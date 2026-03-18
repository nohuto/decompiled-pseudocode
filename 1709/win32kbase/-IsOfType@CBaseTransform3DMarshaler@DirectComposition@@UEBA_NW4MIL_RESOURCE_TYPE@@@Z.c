/*
 * XREFs of ?IsOfType@CBaseTransform3DMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C0029254
 * Callers:
 *     ?IsOfType@CComponentTransform3DMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C00290E0 (-IsOfType@CComponentTransform3DMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CBaseTransformMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C007ECD4 (-IsOfType@CBaseTransformMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CRotateTransform3DMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C0140280 (-IsOfType@CRotateTransform3DMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CScaleTransform3DMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C0140320 (-IsOfType@CScaleTransform3DMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CTransform3DGroupMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C01403D0 (-IsOfType@CTransform3DGroupMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CTranslateTransform3DMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C0140400 (-IsOfType@CTranslateTransform3DMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CBaseTransform3DMarshaler::IsOfType(__int64 a1, int a2)
{
  __int64 v2; // rcx
  bool result; // al

  result = 1;
  if ( a2 != 128 )
  {
    if ( (unsigned int)(a2 - 45) > 0x39 )
      return 0;
    v2 = 0x202000000000001LL;
    if ( !_bittest64(&v2, a2 - 45) )
      return 0;
  }
  return result;
}
