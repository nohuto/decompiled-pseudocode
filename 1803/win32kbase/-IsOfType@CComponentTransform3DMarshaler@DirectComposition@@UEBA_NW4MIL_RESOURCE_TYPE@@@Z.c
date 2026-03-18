/*
 * XREFs of ?IsOfType@CComponentTransform3DMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C001AA10
 * Callers:
 *     <none>
 * Callees:
 *     ?IsOfType@CBaseTransform3DMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C001ACAC (-IsOfType@CBaseTransform3DMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 */

char __fastcall DirectComposition::CComponentTransform3DMarshaler::IsOfType(__int64 a1, int a2)
{
  char v2; // al
  char v3; // cl

  if ( a2 == 26 )
    return 1;
  v2 = DirectComposition::CBaseTransform3DMarshaler::IsOfType();
  v3 = 0;
  if ( v2 )
    return 1;
  return v3;
}
