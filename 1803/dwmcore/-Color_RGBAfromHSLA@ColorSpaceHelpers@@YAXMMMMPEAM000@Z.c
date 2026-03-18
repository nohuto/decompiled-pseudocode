/*
 * XREFs of ?Color_RGBAfromHSLA@ColorSpaceHelpers@@YAXMMMMPEAM000@Z @ 0x1800C5BB0
 * Callers:
 *     ?ColorLerpHsl@CExpressionValueStack@@QEAAJXZ @ 0x18005242C (-ColorLerpHsl@CExpressionValueStack@@QEAAJXZ.c)
 *     ?ColorHsl@CExpressionValueStack@@QEAAJXZ @ 0x1801B7A50 (-ColorHsl@CExpressionValueStack@@QEAAJXZ.c)
 *     ?InterpolateHsl@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x1801C0710 (-InterpolateHsl@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@.c)
 * Callees:
 *     _o_fmod_0 @ 0x1800DB78A (_o_fmod_0.c)
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
  __int64 v8; // rdx
  float v9; // xmm0_4
  double v10; // xmm11_8
  float v11; // xmm4_4
  float v12; // xmm8_4
  float v13; // xmm10_4
  float v14; // xmm9_4
  float v15; // xmm2_4
  float v16; // xmm0_4
  float v17; // xmm1_4

  v10 = v9;
  v11 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)(a3 + a3) - 1.0)) & _xmm);
  v12 = (float)(1.0 - v11) * a2;
  v13 = a3 - (float)(v12 * 0.5);
  v14 = v13 + v12;
  v15 = (float)((1.0 - COERCE_DOUBLE(COERCE_UNSIGNED_INT64(o_fmod_0(this, v8) - 1.0) & _xmm)) * v12) + v13;
  if ( v10 >= 1.047197551196598 )
  {
    if ( v10 < 2.094395102393195 )
    {
      v16 = v13;
      v17 = v13 + v12;
LABEL_13:
      v14 = v15;
      goto LABEL_3;
    }
    if ( v10 >= 3.141592653589793 )
    {
      if ( v10 < 4.188790204786391 )
      {
        v16 = v13 + v12;
        v17 = v15;
        v14 = v13;
        goto LABEL_3;
      }
      v17 = v13;
      if ( v10 < 5.235987755982989 )
      {
        v16 = v13 + v12;
        goto LABEL_13;
      }
    }
    else
    {
      v17 = v13 + v12;
      v14 = v13;
    }
    v16 = v15;
    goto LABEL_3;
  }
  v16 = v13;
  v17 = v15;
LABEL_3:
  *a5 = v14;
  *a6 = v17;
  *a7 = v16;
  *a5 = fmaxf(0.0, *a5);
  *a6 = fmaxf(0.0, *a6);
  *a7 = fmaxf(0.0, *a7);
  *a8 = a4;
}
