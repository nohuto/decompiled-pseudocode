/*
 * XREFs of ?IsOfType@CCombinedGeometry@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180147160
 * Callers:
 *     <none>
 * Callees:
 *     ?IsOfType@CGeometry@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180096DA4 (-IsOfType@CGeometry@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 */

char __fastcall CCombinedGeometry::IsOfType(__int64 a1, int a2)
{
  bool v2; // al
  char v3; // cl

  if ( a2 == 21 )
    return 1;
  v2 = CGeometry::IsOfType(a1, a2);
  v3 = 0;
  if ( v2 )
    return 1;
  return v3;
}
