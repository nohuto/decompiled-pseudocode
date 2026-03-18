/*
 * XREFs of ?Compute@CubicBezierInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x1800AF900
 * Callers:
 *     ?Calculate@KeyframeSequence@@QEAAXPEAVCExpressionValueStack@@@Z @ 0x18003F0F0 (-Calculate@KeyframeSequence@@QEAAXPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?ExpressionValueLerp@KeyframeInterpolation@@KAXW4DCOMPOSITION_EXPRESSION_TYPE@@MPEAVCExpressionValue@@11@Z @ 0x1800BDE44 (-ExpressionValueLerp@KeyframeInterpolation@@KAXW4DCOMPOSITION_EXPRESSION_TYPE@@MPEAVCExpressionV.c)
 *     pow @ 0x1800DB796 (pow.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     InterpolateInLinearGamma__lambda_05231fcf689ec6251862318fc803ab17___ @ 0x1801BFDA0 (InterpolateInLinearGamma__lambda_05231fcf689ec6251862318fc803ab17___.c)
 *     InterpolateInLinearGamma__lambda_ab2dd9ab3598b0b4e0ea4acb542f55ed___ @ 0x1801BFE80 (InterpolateInLinearGamma__lambda_ab2dd9ab3598b0b4e0ea4acb542f55ed___.c)
 *     ?InterpolateHsl@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x1801C0710 (-InterpolateHsl@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@.c)
 *     ?InterpolateSpherical@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x1801C08FC (-InterpolateSpherical@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpression.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall CubicBezierInterpolation::Compute(
        __int64 a1,
        double a2,
        unsigned int a3,
        struct _D3DCOLORVALUE *a4,
        struct _D3DCOLORVALUE *a5,
        struct _D3DCOLORVALUE *a6)
{
  int v9; // edi
  double v10; // xmm13_8
  __int64 v11; // xmm2_8
  double v12; // xmm0_8
  __int128 v13; // xmm7
  double v14; // xmm8_8
  double v15; // xmm6_8
  float v16; // xmm0_4
  float v17; // xmm2_4
  __int128 v18; // xmm1
  double v19; // xmm0_8
  float v20; // xmm2_4
  __int64 v21; // rdx
  int v22; // ecx
  __int64 v24; // rcx
  __int64 v25; // rcx
  int v26; // ecx
  int v27; // ecx
  double v28; // [rsp+30h] [rbp-C8h]
  void *retaddr; // [rsp+F8h] [rbp+0h]
  double v30; // [rsp+100h] [rbp+8h]

  v9 = 0;
  a2 = *(float *)&a2;
  v10 = *(float *)(a1 + 24);
  v30 = *(float *)(a1 + 32);
  v11 = _xmm;
  v12 = DOUBLE_6_0;
  v13 = *(_OWORD *)&a2;
  v28 = a2;
  do
  {
    v14 = 1.0 - *(double *)&v13;
    v15 = (1.0 - *(double *)&v13) * v12 * *(double *)&v13 * (v30 - v10)
        + v14 * v14 * 3.0 * v10
        + *(double *)&v13 * *(double *)&v13 * 3.0 * (1.0 - v30);
    v16 = v15;
    v17 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v16) & v11);
    if ( v17 < 0.0000011920929 )
      break;
    *((_QWORD *)&v18 + 1) = *((_QWORD *)&v13 + 1);
    *(double *)&v18 = *(double *)&v13
                    - (pow(*(double *)&v13, 3.0)
                     + v14 * 3.0 * (*(double *)&v13 * *(double *)&v13) * v30
                     + v14 * v14 * 3.0 * *(double *)&v13 * v10
                     - v28)
                    / v15;
    v19 = *(double *)&v13 - *(double *)&v18;
    v13 = v18;
    *(float *)&v19 = v19;
    v20 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&v19) & _xmm);
    if ( v20 < 0.0000011920929 )
      break;
    v11 = _xmm;
    ++v9;
    v12 = DOUBLE_6_0;
  }
  while ( v9 < 30 );
  pow(*(double *)&v13, 3.0);
  v22 = *(_DWORD *)(a1 + 16);
  if ( !v22 )
    return KeyframeInterpolation::ExpressionValueLerp(a3, v21, a4, a5, a6);
  v24 = (unsigned int)(v22 - 1);
  if ( !(_DWORD)v24 )
    return KeyframeInterpolation::InterpolateSpherical(v24, a3, a4, a5, a6);
  v25 = (unsigned int)(v24 - 1);
  if ( !(_DWORD)v25 )
    return KeyframeInterpolation::InterpolateHsl(v25, v21, a4, a5, a6);
  v26 = v25 - 1;
  if ( !v26 )
    return InterpolateInLinearGamma__lambda_05231fcf689ec6251862318fc803ab17_(a4, a5, a6);
  v27 = v26 - 1;
  if ( !v27 )
    return KeyframeInterpolation::ExpressionValueLerp(a3, v21, a4, a5, a6);
  if ( v27 != 1 )
    ModuleFailFastForHRESULT(2147942487LL, retaddr);
  return InterpolateInLinearGamma__lambda_ab2dd9ab3598b0b4e0ea4acb542f55ed_(a4, a5, a6);
}
