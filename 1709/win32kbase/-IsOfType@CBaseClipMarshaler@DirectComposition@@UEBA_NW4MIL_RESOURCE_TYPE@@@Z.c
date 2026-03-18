/*
 * XREFs of ?IsOfType@CBaseClipMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C005A930
 * Callers:
 *     ?IsOfType@CRectangleClipMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C0056C10 (-IsOfType@CRectangleClipMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CClipGroupMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C0140020 (-IsOfType@CClipGroupMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CBaseClipMarshaler::IsOfType(__int64 a1, int a2)
{
  unsigned int v2; // edx
  __int64 v3; // rcx
  bool result; // al

  v2 = a2 - 55;
  result = 0;
  if ( v2 <= 0x2F )
  {
    v3 = 0x808000000001LL;
    if ( _bittest64(&v3, (int)v2) )
      return 1;
  }
  return result;
}
