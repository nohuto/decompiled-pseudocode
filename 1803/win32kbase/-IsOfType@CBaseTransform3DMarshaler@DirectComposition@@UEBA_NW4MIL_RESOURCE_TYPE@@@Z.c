/*
 * XREFs of ?IsOfType@CBaseTransform3DMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C001ACAC
 * Callers:
 *     ?IsOfType@CComponentTransform3DMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C001AA10 (-IsOfType@CComponentTransform3DMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CBaseTransformMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C0067804 (-IsOfType@CBaseTransformMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CRotateTransform3DMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C0146AB0 (-IsOfType@CRotateTransform3DMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CScaleTransform3DMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C0146B50 (-IsOfType@CScaleTransform3DMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CTransform3DGroupMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C0146CB0 (-IsOfType@CTransform3DGroupMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CTranslateTransform3DMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C0146D10 (-IsOfType@CTranslateTransform3DMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CBaseTransform3DMarshaler::IsOfType(__int64 a1, int a2)
{
  __int64 v2; // rcx
  bool result; // al

  result = 1;
  if ( a2 != 143 )
  {
    if ( (unsigned int)(a2 - 50) > 0x3E )
      return 0;
    v2 = 0x4008000000000001LL;
    if ( !_bittest64(&v2, a2 - 50) )
      return 0;
  }
  return result;
}
