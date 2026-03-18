/*
 * XREFs of ?Compute@LinearInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x1800B5C60
 * Callers:
 *     ?Calculate@KeyframeSequence@@QEAAXPEAVCExpressionValueStack@@@Z @ 0x1800A6D00 (-Calculate@KeyframeSequence@@QEAAXPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?ExpressionValueLerp@KeyframeInterpolation@@KAXW4DCOMPOSITION_EXPRESSION_TYPE@@MPEAVCExpressionValue@@11@Z @ 0x1800B5550 (-ExpressionValueLerp@KeyframeInterpolation@@KAXW4DCOMPOSITION_EXPRESSION_TYPE@@MPEAVCExpressionV.c)
 *     ?InterpolateHsl@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x1800BABA0 (-InterpolateHsl@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 *     InterpolateInLinearGamma__lambda_05231fcf689ec6251862318fc803ab17___ @ 0x18018A698 (InterpolateInLinearGamma__lambda_05231fcf689ec6251862318fc803ab17___.c)
 *     InterpolateInLinearGamma__lambda_ab2dd9ab3598b0b4e0ea4acb542f55ed___ @ 0x18018A780 (InterpolateInLinearGamma__lambda_ab2dd9ab3598b0b4e0ea4acb542f55ed___.c)
 *     ?InterpolateSpherical@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x18018AF70 (-InterpolateSpherical@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpression.c)
 */

void __fastcall LinearInterpolation::Compute(
        __int64 a1,
        float a2,
        unsigned int a3,
        struct _D3DCOLORVALUE *a4,
        struct _D3DCOLORVALUE *a5,
        struct _D3DCOLORVALUE *a6)
{
  int v6; // edx
  int v7; // edx
  __int64 v8; // rdx
  int v9; // edx
  int v10; // edx
  void *retaddr; // [rsp+48h] [rbp+0h]

  v6 = *(_DWORD *)(a1 + 16);
  if ( !v6 )
    goto LABEL_2;
  v7 = v6 - 1;
  if ( v7 )
  {
    v8 = (unsigned int)(v7 - 1);
    if ( (_DWORD)v8 )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        v10 = v9 - 1;
        if ( !v10 )
        {
LABEL_2:
          KeyframeInterpolation::ExpressionValueLerp(a3, a2, (__int64)a4, &a5->r, (__int64)a6);
          return;
        }
        if ( v10 != 1 )
          ModuleFailFastForHRESULT(2147942487LL, retaddr);
        InterpolateInLinearGamma__lambda_ab2dd9ab3598b0b4e0ea4acb542f55ed_(a4, a5, a6);
      }
      else
      {
        InterpolateInLinearGamma__lambda_05231fcf689ec6251862318fc803ab17_(a4, a5, a6);
      }
    }
    else
    {
      KeyframeInterpolation::InterpolateHsl(a1, v8, a4, a5, a6);
    }
  }
  else
  {
    KeyframeInterpolation::InterpolateSpherical(a1, a3, a4, a5, a6);
  }
}
