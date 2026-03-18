/*
 * XREFs of ?InterpolateHsl@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x1800BABA0
 * Callers:
 *     ?Interpolate@KeyframeInterpolation@@QEAAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x18006A394 (-Interpolate@KeyframeInterpolation@@QEAAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@.c)
 *     ?Compute@LinearInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x1800B5C60 (-Compute@LinearInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z.c)
 *     InterpolateInLinearGamma__lambda_05231fcf689ec6251862318fc803ab17___ @ 0x18018A698 (InterpolateInLinearGamma__lambda_05231fcf689ec6251862318fc803ab17___.c)
 * Callees:
 *     ?Color_HSLAfromRGBA@ColorSpaceHelpers@@YAXMMMMPEAM000@Z @ 0x1800BAD84 (-Color_HSLAfromRGBA@ColorSpaceHelpers@@YAXMMMMPEAM000@Z.c)
 *     ?Color_RGBAfromHSLA@ColorSpaceHelpers@@YAXMMMMPEAM000@Z @ 0x1800BAE30 (-Color_RGBAfromHSLA@ColorSpaceHelpers@@YAXMMMMPEAM000@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     fmodf_0 @ 0x1800C5D68 (fmodf_0.c)
 */

void __fastcall KeyframeInterpolation::InterpolateHsl(double a1, __int64 a2, float *a3, float *a4, __int64 a5)
{
  float v7; // xmm7_4
  ColorSpaceHelpers *v8; // rcx
  ColorSpaceHelpers *v9; // rcx
  ColorSpaceHelpers *v10; // rcx
  float v11; // xmm6_4
  float v12; // xmm1_4
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  float v15; // xmm0_4
  __int128 v16; // [rsp+48h] [rbp-51h] BYREF
  float v17; // [rsp+58h] [rbp-41h] BYREF
  float v18; // [rsp+5Ch] [rbp-3Dh] BYREF
  float v19; // [rsp+60h] [rbp-39h] BYREF
  float v20; // [rsp+64h] [rbp-35h] BYREF
  _BYTE v21[16]; // [rsp+68h] [rbp-31h] BYREF
  __int128 v22; // [rsp+78h] [rbp-21h]
  __int128 v23; // [rsp+88h] [rbp-11h]
  __int128 v24; // [rsp+98h] [rbp-1h]
  __int64 v25; // [rsp+A8h] [rbp+Fh]

  v7 = a1;
  memset_0(v21, 0, 0x40uLL);
  ColorSpaceHelpers::Color_HSLAfromRGBA(v8, a3[1], a3[2], a3[3], COERCE_FLOAT(&v17), &v18, &v19, &v20, (float *)v16);
  ColorSpaceHelpers::Color_HSLAfromRGBA(
    v9,
    a4[1],
    a4[2],
    a4[3],
    COERCE_FLOAT(&v16),
    (float *)&v16 + 1,
    (float *)&v16 + 2,
    (float *)&v16 + 3,
    (float *)v16);
  v11 = 1.0 - v7;
  v12 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v17 - *(float *)&v16)) & _xmm);
  if ( v12 >= 3.1415927 )
  {
    if ( v17 <= *(float *)&v16 )
      v15 = (float)((float)(v17 + 6.2831855) * v11) + (float)(*(float *)&v16 * v7);
    else
      v15 = (float)((float)(*(float *)&v16 + 6.2831855) * v7) + (float)(v11 * v17);
    fmodf_0(v15, 6.2831855);
  }
  ColorSpaceHelpers::Color_RGBAfromHSLA(
    v10,
    (float)(v11 * v18) + (float)(*((float *)&v16 + 1) * v7),
    (float)(v11 * v19) + (float)(*((float *)&v16 + 2) * v7),
    (float)(v11 * v20) + (float)(*((float *)&v16 + 3) * v7),
    COERCE_FLOAT(&v16),
    (float *)&v16 + 1,
    (float *)&v16 + 2,
    (float *)&v16 + 3,
    (float *)v16);
  LODWORD(v25) = 70;
  v13 = v23;
  *(_OWORD *)a5 = v16;
  BYTE4(v25) = 1;
  *(_OWORD *)(a5 + 16) = v22;
  v14 = v24;
  *(_OWORD *)(a5 + 32) = v13;
  *(_QWORD *)&v13 = v25;
  *(_OWORD *)(a5 + 48) = v14;
  *(_QWORD *)(a5 + 64) = v13;
}
