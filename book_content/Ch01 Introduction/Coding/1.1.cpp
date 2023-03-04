void InitGlobals() {
    nMarbles = 25.7;
    shoeSize = 13;
    dielectric = true;
}

<Function Definitions> ===
    void InitGlobals() {
        <Initialize Global Variables 2>
    }

<Initialize Global Variables> ===
    shoeSize = 13;

<Initialize GLobal Variables> +===
    dielectric = true;

void InitGlobals() {
    shoeSize = 13;
    dielectric = true;
}

<Function Definitions> +===
    void complecFunc(int x, int y, double *values){
        <Check validity of arguments>
        if (x < y){
            <Swap parameter values>
        }
        <Do precomputation before loop>
        <Loop throught and update values array>
    }