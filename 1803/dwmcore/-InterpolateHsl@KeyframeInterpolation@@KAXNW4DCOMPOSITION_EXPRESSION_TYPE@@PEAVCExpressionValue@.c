/*
 * XREFs of ?InterpolateHsl@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x1801C0710
 * Callers:
 *     ?Compute@StepInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x1800407E0 (-Compute@StepInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z.c)
 *     ?Compute@LinearInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x1800408E0 (-Compute@LinearInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z.c)
 *     ?Interpolate@KeyframeInterpolation@@QEAAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x180040A14 (-Interpolate@KeyframeInterpolation@@QEAAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@.c)
 *     ?Compute@CubicBezierInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x1800AF900 (-Compute@CubicBezierInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@1.c)
 *     InterpolateInLinearGamma__lambda_05231fcf689ec6251862318fc803ab17___ @ 0x1801BFDA0 (InterpolateInLinearGamma__lambda_05231fcf689ec6251862318fc803ab17___.c)
 * Callees:
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x180029658 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?Color_HSLAfromRGBA@ColorSpaceHelpers@@YAXMMMMPEAM000@Z @ 0x1800C59C0 (-Color_HSLAfromRGBA@ColorSpaceHelpers@@YAXMMMMPEAM000@Z.c)
 *     ?Color_RGBAfromHSLA@ColorSpaceHelpers@@YAXMMMMPEAM000@Z @ 0x1800C5BB0 (-Color_RGBAfromHSLA@ColorSpaceHelpers@@YAXMMMMPEAM000@Z.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     fmodf_0 @ 0x1800DD3CB (fmodf_0.c)
 */

__int64 __fastcall KeyframeInterpolation::InterpolateHsl(double a1, __int64 a2, float *a3, float *a4, __int64 a5)
{
  float v7; // xmm7_4
  ColorSpaceHelpers *v8; // rcx
  ColorSpaceHelpers *v9; // rcx
  ColorSpaceHelpers *v10; // rcx
  float v11; // xmm6_4
  float v12; // xmm1_4
  float v13; // xmm0_4
  float v15; // [rsp+48h] [rbp-41h] BYREF
  float v16; // [rsp+4Ch] [rbp-3Dh] BYREF
  float v17; // [rsp+50h] [rbp-39h] BYREF
  float v18; // [rsp+54h] [rbp-35h] BYREF
  __int128 v19; // [rsp+58h] [rbp-31h] BYREF
  _OWORD v20[4]; // [rsp+68h] [rbp-21h] BYREF
  __int64 v21; // [rsp+A8h] [rbp+1Fh]
  int v22; // [rsp+B0h] [rbp+27h]
  char v23; // [rsp+B4h] [rbp+2Bh]

  v7 = a1;
  memset_0(v20, 0, sizeof(v20));
  v21 = 0LL;
  ColorSpaceHelpers::Color_HSLAfromRGBA(v8, a3[1], a3[2], a3[3], &v15, &v16, &v17, &v18);
  ColorSpaceHelpers::Color_HSLAfromRGBA(
    v9,
    a4[1],
    a4[2],
    a4[3],
    (float *)&v19,
    (float *)&v19 + 1,
    (float *)&v19 + 2,
    (float *)&v19 + 3);
  v11 = 1.0 - v7;
  v12 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v15 - *(float *)&v19)) & _xmm);
  if ( v12 >= 3.1415927 )
  {
    if ( v15 <= *(float *)&v19 )
      v13 = (float)((float)(v15 + 6.2831855) * v11) + (float)(*(float *)&v19 * v7);
    else
      v13 = (float)((float)(*(float *)&v19 + 6.2831855) * v7) + (float)(v11 * v15);
    fmodf_0(v13, 6.2831855);
  }
  ColorSpaceHelpers::Color_RGBAfromHSLA(
    v10,
    (float)(v11 * v16) + (float)(*((float *)&v19 + 1) * v7),
    (float)(v11 * v17) + (float)(*((float *)&v19 + 2) * v7),
    (float)(v11 * v18) + (float)(*((float *)&v19 + 3) * v7),
    (float *)&v19,
    (float *)&v19 + 1,
    (float *)&v19 + 2,
    (float *)&v19 + 3);
  v22 = 70;
  v20[0] = v19;
  v23 = 1;
  return CExpressionValue::operator=(a5, (__int64)v20);
}
