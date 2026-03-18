/*
 * XREFs of ?Color_RGBAfromHSLA@ColorSpaceHelpers@@YAXMMMMPEAM000@Z @ 0x18017D20C
 * Callers:
 *     ?ColorHsl@CExpressionValueStack@@QEAAJXZ @ 0x18017CAFC (-ColorHsl@CExpressionValueStack@@QEAAJXZ.c)
 *     ?ColorLerpHsl@CExpressionValueStack@@QEAAJXZ @ 0x18017CC44 (-ColorLerpHsl@CExpressionValueStack@@QEAAJXZ.c)
 * Callees:
 *     fmod_0 @ 0x1800D5372 (fmod_0.c)
 */

void __fastcall ColorSpaceHelpers::Color_RGBAfromHSLA(
        ColorSpaceHelpers *this,
        float a2,
        float a3,
        float a4,
        float *a5,
        float *a6,
        float *a7,
        float *a8)
{
  float v8; // xmm0_4
  float v10; // xmm11_4
  double v11; // xmm8_8
  float v12; // xmm4_4
  float v13; // xmm10_4
  float v14; // xmm2_4
  float v15; // xmm9_4
  float v16; // xmm0_4
  float v17; // xmm1_4
  float *v18; // rax
  float *v19; // rcx

  v10 = v8;
  v11 = v8;
  v12 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)(a3 + a3) - 1.0)) & _xmm);
  v13 = (float)(1.0 - v12) * a2;
  v14 = (1.0 - COERCE_DOUBLE(COERCE_UNSIGNED_INT64(fmod_0(v8 / 1.047197551196598, 2.0) - 1.0) & _xmm)) * v13;
  v15 = a3 - (float)(v13 * 0.5);
  if ( v11 >= 1.047197551196598 )
  {
    if ( v10 < 2.094395102393195 )
    {
      v16 = v15 + v14;
      v17 = v15 + v13;
      goto LABEL_3;
    }
    v18 = a5;
    v19 = a6;
    if ( v10 < 3.141592653589793 )
    {
      *a5 = v15;
      *a6 = v15 + v13;
LABEL_14:
      v15 = v15 + v14;
      goto LABEL_15;
    }
    if ( v10 >= 4.188790204786391 )
    {
      if ( v10 >= 5.235987755982989 )
      {
        *a5 = v15 + v13;
        *a6 = v15;
        goto LABEL_14;
      }
      *a5 = v15 + v14;
      *a6 = v15;
    }
    else
    {
      *a5 = v15;
      *a6 = v15 + v14;
    }
    v15 = v15 + v13;
    goto LABEL_15;
  }
  v16 = v15 + v13;
  v17 = v15 + v14;
LABEL_3:
  v18 = a5;
  v19 = a6;
  *a5 = v16;
  *a6 = v17;
LABEL_15:
  *a7 = v15;
  *v18 = fmaxf(0.0, *v18);
  *v19 = fmaxf(0.0, *v19);
  *a7 = fmaxf(0.0, *a7);
  *a8 = a4;
}
