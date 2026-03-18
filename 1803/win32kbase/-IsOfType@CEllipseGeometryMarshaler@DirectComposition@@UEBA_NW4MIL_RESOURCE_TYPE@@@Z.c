/*
 * XREFs of ?IsOfType@CEllipseGeometryMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C0146860
 * Callers:
 *     <none>
 * Callees:
 *     ?IsOfType@CBaseClipMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C000FA10 (-IsOfType@CBaseClipMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 */

char __fastcall DirectComposition::CEllipseGeometryMarshaler::IsOfType(__int64 a1, int a2)
{
  bool v2; // al
  char v3; // cl

  if ( a2 == 53 )
    return 1;
  v2 = DirectComposition::CBaseClipMarshaler::IsOfType(a1, a2);
  v3 = 0;
  if ( v2 )
    return 1;
  return v3;
}
