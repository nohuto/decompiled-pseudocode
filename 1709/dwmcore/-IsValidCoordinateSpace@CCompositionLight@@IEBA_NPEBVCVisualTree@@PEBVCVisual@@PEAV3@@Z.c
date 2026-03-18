/*
 * XREFs of ?IsValidCoordinateSpace@CCompositionLight@@IEBA_NPEBVCVisualTree@@PEBVCVisual@@PEAV3@@Z @ 0x18011AA58
 * Callers:
 *     ?IsValid@CCompositionDistantLight@@UEBA_NPEBVCVisualTree@@PEBVCVisual@@@Z @ 0x18015ADB0 (-IsValid@CCompositionDistantLight@@UEBA_NPEBVCVisualTree@@PEBVCVisual@@@Z.c)
 * Callees:
 *     ?GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x18004E640 (-GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ?IsInvertibleDeterminant@CMILMatrix@@SA_NM@Z @ 0x18009F7DC (-IsInvertibleDeterminant@CMILMatrix@@SA_NM@Z.c)
 *     ?determinant@Numerics@Foundation@Windows@@YAMAEBUfloat4x4@123@@Z @ 0x180190AFC (-determinant@Numerics@Foundation@Windows@@YAMAEBUfloat4x4@123@@Z.c)
 */

char __fastcall CCompositionLight::IsValidCoordinateSpace(
        CCompositionLight *this,
        struct _LIST_ENTRY *a2,
        const struct CVisual *a3,
        struct CVisual *a4)
{
  const struct Windows::Foundation::Numerics::float4x4 *v6; // rdx
  float v7; // xmm0_4
  _BYTE v9[64]; // [rsp+30h] [rbp-58h] BYREF
  int v10; // [rsp+70h] [rbp-18h]

  if ( a4 )
  {
    v10 = 0;
    if ( (int)CVisual::GetWorldTransform(a4, a2, 3, (__int64)v9, 0LL, 0LL) >= 0 )
    {
      v7 = Windows::Foundation::Numerics::determinant((Windows::Foundation::Numerics *)v9, v6);
      if ( CMILMatrix::IsInvertibleDeterminant(v7) )
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
