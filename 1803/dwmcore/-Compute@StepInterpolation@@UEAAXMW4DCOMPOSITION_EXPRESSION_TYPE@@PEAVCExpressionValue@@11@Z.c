/*
 * XREFs of ?Compute@StepInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x1800407E0
 * Callers:
 *     ?Calculate@KeyframeSequence@@QEAAXPEAVCExpressionValueStack@@@Z @ 0x18003F0F0 (-Calculate@KeyframeSequence@@QEAAXPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?ExpressionValueLerp@KeyframeInterpolation@@KAXW4DCOMPOSITION_EXPRESSION_TYPE@@MPEAVCExpressionValue@@11@Z @ 0x1800BDE44 (-ExpressionValueLerp@KeyframeInterpolation@@KAXW4DCOMPOSITION_EXPRESSION_TYPE@@MPEAVCExpressionV.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     InterpolateInLinearGamma__lambda_05231fcf689ec6251862318fc803ab17___ @ 0x1801BFDA0 (InterpolateInLinearGamma__lambda_05231fcf689ec6251862318fc803ab17___.c)
 *     InterpolateInLinearGamma__lambda_ab2dd9ab3598b0b4e0ea4acb542f55ed___ @ 0x1801BFE80 (InterpolateInLinearGamma__lambda_ab2dd9ab3598b0b4e0ea4acb542f55ed___.c)
 *     ?InterpolateHsl@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x1801C0710 (-InterpolateHsl@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@.c)
 *     ?InterpolateSpherical@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x1801C08FC (-InterpolateSpherical@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpression.c)
 */

__int64 __fastcall StepInterpolation::Compute(
        __int64 a1,
        float a2,
        unsigned int a3,
        struct _D3DCOLORVALUE *a4,
        struct _D3DCOLORVALUE *a5,
        struct _D3DCOLORVALUE *a6)
{
  __int64 v6; // rdx
  int v7; // ecx
  __int64 v9; // rcx
  __int64 v10; // rcx
  int v11; // ecx
  int v12; // ecx
  void *retaddr; // [rsp+48h] [rbp+8h]

  v6 = (unsigned int)(int)(float)(a2 / *(float *)(a1 + 44));
  v7 = *(_DWORD *)(a1 + 16);
  if ( !v7 )
    return KeyframeInterpolation::ExpressionValueLerp(a3, v6, a4, a5, a6);
  v9 = (unsigned int)(v7 - 1);
  if ( !(_DWORD)v9 )
    return KeyframeInterpolation::InterpolateSpherical(v9, a3, a4, a5, a6);
  v10 = (unsigned int)(v9 - 1);
  if ( !(_DWORD)v10 )
    return KeyframeInterpolation::InterpolateHsl(v10, v6, a4, a5, a6);
  v11 = v10 - 1;
  if ( !v11 )
    return InterpolateInLinearGamma__lambda_05231fcf689ec6251862318fc803ab17_(a4, a5, a6);
  v12 = v11 - 1;
  if ( !v12 )
    return KeyframeInterpolation::ExpressionValueLerp(a3, v6, a4, a5, a6);
  if ( v12 != 1 )
    ModuleFailFastForHRESULT(2147942487LL, retaddr);
  return InterpolateInLinearGamma__lambda_ab2dd9ab3598b0b4e0ea4acb542f55ed_(a4, a5, a6);
}
