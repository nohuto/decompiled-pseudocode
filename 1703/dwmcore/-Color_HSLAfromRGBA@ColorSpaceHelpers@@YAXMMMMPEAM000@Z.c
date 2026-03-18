/*
 * XREFs of ?Color_HSLAfromRGBA@ColorSpaceHelpers@@YAXMMMMPEAM000@Z @ 0x18017D0BC
 * Callers:
 *     ?ColorLerpHsl@CExpressionValueStack@@QEAAJXZ @ 0x18017CC44 (-ColorLerpHsl@CExpressionValueStack@@QEAAJXZ.c)
 * Callees:
 *     fmodf_0 @ 0x1800D5378 (fmodf_0.c)
 */

void __fastcall ColorSpaceHelpers::Color_HSLAfromRGBA(
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
  float v11; // xmm6_4
  float v12; // xmm1_4
  float v13; // xmm7_4
  float v14; // xmm8_4
  float v15; // xmm3_4
  float v16; // xmm6_4
  float v17; // xmm6_4
  float v18; // xmm0_4
  double v19; // xmm1_8

  v11 = fmaxf(fmaxf(v8, a2), a3);
  v12 = fminf(fminf(v8, a2), a3);
  v13 = v11 + v12;
  v14 = (float)(v11 + v12) * 0.5;
  if ( v11 == v12 )
  {
    v15 = 0.0;
    v16 = 0.0;
    goto LABEL_12;
  }
  if ( v11 == v8 )
  {
    v17 = v11 - v12;
    v18 = fmodf_0((float)(a2 - a3) / v17, 6.0);
LABEL_8:
    v19 = v18;
    goto LABEL_9;
  }
  if ( v11 != a2 )
  {
    v17 = v11 - v12;
    v18 = (float)((float)(v8 - a2) / v17) + 4.0;
    goto LABEL_8;
  }
  v17 = v11 - v12;
  v19 = (float)((float)((float)(a3 - v8) / v17) + 2.0);
LABEL_9:
  v15 = v19 * 1.047197551196598;
  if ( v15 < 0.0 )
    v15 = v15 + 6.2831855;
  v16 = v17 / (float)(1.0 - (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v13 - 1.0)) & _xmm));
LABEL_12:
  *a5 = v15;
  *a6 = v16;
  *a7 = v14;
  *a8 = a4;
}
