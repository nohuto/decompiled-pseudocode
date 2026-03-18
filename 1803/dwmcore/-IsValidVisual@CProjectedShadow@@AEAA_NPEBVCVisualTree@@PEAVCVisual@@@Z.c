/*
 * XREFs of ?IsValidVisual@CProjectedShadow@@AEAA_NPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x1801B644C
 * Callers:
 *     ?IsValid@CProjectedShadow@@AEAA_NPEBVCVisualTree@@@Z @ 0x1801B63A8 (-IsValid@CProjectedShadow@@AEAA_NPEBVCVisualTree@@@Z.c)
 * Callees:
 *     ?IsInvertibleDeterminant@CMILMatrix@@SA_NM@Z @ 0x18000DFF8 (-IsInvertibleDeterminant@CMILMatrix@@SA_NM@Z.c)
 *     ?IsInTree@CVisualTree@@QEBA_NPEBVCVisual@@@Z @ 0x180041280 (-IsInTree@CVisualTree@@QEBA_NPEBVCVisual@@@Z.c)
 *     ?GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x18004F74C (-GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ?determinant@Numerics@Foundation@Windows@@YAMAEBUfloat4x4@123@@Z @ 0x1801C77C4 (-determinant@Numerics@Foundation@Windows@@YAMAEBUfloat4x4@123@@Z.c)
 */

bool __fastcall CProjectedShadow::IsValidVisual(
        CProjectedShadow *this,
        const struct CVisualTree *a2,
        struct CVisual *a3)
{
  CVisual *v4; // r10
  const struct CVisualTree *v5; // r11
  const struct Windows::Foundation::Numerics::float4x4 *v6; // rdx
  float v7; // xmm0_4
  _BYTE v8[64]; // [rsp+30h] [rbp-58h] BYREF
  int v9; // [rsp+70h] [rbp-18h]

  if ( !a3 )
    return 0;
  if ( !CVisualTree::IsInTree(a2, a3) )
    return 0;
  v9 = 0;
  if ( (int)CVisual::GetWorldTransform(v4, v5, 3, (__int64)v8, 0LL, 0LL) < 0 )
    return 0;
  v7 = Windows::Foundation::Numerics::determinant((Windows::Foundation::Numerics *)v8, v6);
  return CMILMatrix::IsInvertibleDeterminant(v7);
}
