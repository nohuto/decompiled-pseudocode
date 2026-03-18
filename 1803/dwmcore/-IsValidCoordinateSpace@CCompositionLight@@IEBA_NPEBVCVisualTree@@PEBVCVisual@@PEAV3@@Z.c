/*
 * XREFs of ?IsValidCoordinateSpace@CCompositionLight@@IEBA_NPEBVCVisualTree@@PEBVCVisual@@PEAV3@@Z @ 0x18013CD68
 * Callers:
 *     ?IsValid@CCompositionDistantLight@@UEBA_NPEBVCVisualTree@@PEBVCVisual@@@Z @ 0x180184050 (-IsValid@CCompositionDistantLight@@UEBA_NPEBVCVisualTree@@PEBVCVisual@@@Z.c)
 * Callees:
 *     ?IsInvertibleDeterminant@CMILMatrix@@SA_NM@Z @ 0x18000DFF8 (-IsInvertibleDeterminant@CMILMatrix@@SA_NM@Z.c)
 *     ?IsInTree@CVisualTree@@QEBA_NPEBVCVisual@@@Z @ 0x180041280 (-IsInTree@CVisualTree@@QEBA_NPEBVCVisual@@@Z.c)
 *     ?GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x18004F74C (-GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ?determinant@Numerics@Foundation@Windows@@YAMAEBUfloat4x4@123@@Z @ 0x1801C77C4 (-determinant@Numerics@Foundation@Windows@@YAMAEBUfloat4x4@123@@Z.c)
 */

char __fastcall CCompositionLight::IsValidCoordinateSpace(
        CCompositionLight *this,
        const struct CVisualTree *a2,
        const struct CVisual *a3,
        struct CVisual *a4)
{
  const struct CVisualTree *v6; // r10
  const struct Windows::Foundation::Numerics::float4x4 *v7; // rdx
  float v8; // xmm0_4
  _BYTE v10[64]; // [rsp+30h] [rbp-58h] BYREF
  int v11; // [rsp+70h] [rbp-18h]

  if ( CVisualTree::IsInTree(a2, a4) )
  {
    v11 = 0;
    if ( (int)CVisual::GetWorldTransform(a4, v6, 3, (__int64)v10, 0LL, 0LL) >= 0 )
    {
      v8 = Windows::Foundation::Numerics::determinant((Windows::Foundation::Numerics *)v10, v7);
      if ( CMILMatrix::IsInvertibleDeterminant(v8) )
      {
        while ( a3 )
        {
          if ( a3 == a4 )
            return 1;
          a3 = (const struct CVisual *)*((_QWORD *)a3 + 10);
        }
      }
    }
  }
  return 0;
}
