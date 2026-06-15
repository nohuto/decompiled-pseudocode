/*
 * XREFs of ?SetStep@CFadeWindowLUT@@QEAAXIH@Z @ 0x140057328
 * Callers:
 *     ?Initialize@CFadeWindowLUT@@QEAAJIIH@Z @ 0x1400570D4 (-Initialize@CFadeWindowLUT@@QEAAJIIH@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CFadeWindowLUT::SetStep(float **this, int a2, int a3)
{
  float v3; // xmm2_4
  float v4; // xmm0_4
  float *v5; // rax

  if ( a3 )
    v3 = FLOAT_N1_0;
  else
    v3 = FLOAT_1_0;
  v4 = 0.0;
  *this[3] = (float)((float)*((int *)this + 8) / (float)a2) * v3;
  if ( a3 )
    v4 = (float)*((int *)this + 8);
  *this[2] = v4;
  v5 = this[5];
  if ( a3 )
  {
    *v5 = 1.0;
    *this[6] = -1.0;
  }
  else
  {
    *v5 = 0.0;
    *this[6] = 1.0;
  }
}
