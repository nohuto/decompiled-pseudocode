/*
 * XREFs of ?IsOfType@CRectangleClipMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C000F630
 * Callers:
 *     <none>
 * Callees:
 *     ?IsOfType@CBaseClipMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C000FA10 (-IsOfType@CBaseClipMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 */

char __fastcall DirectComposition::CRectangleClipMarshaler::IsOfType(__int64 a1, int a2)
{
  char v2; // al
  char v3; // cl

  if ( a2 == 115 )
    return 1;
  v2 = DirectComposition::CBaseClipMarshaler::IsOfType();
  v3 = 0;
  if ( v2 )
    return 1;
  return v3;
}
