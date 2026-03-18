/*
 * XREFs of ?IsOfType@CPathGeometry@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18016F570
 * Callers:
 *     <none>
 * Callees:
 *     ?IsOfType@CGeometry@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18006FD8C (-IsOfType@CGeometry@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 */

char __fastcall CPathGeometry::IsOfType(__int64 a1, int a2)
{
  char v2; // al
  char v3; // cl

  if ( a2 == 102 )
    return 1;
  v2 = CGeometry::IsOfType(a1, a2);
  v3 = 0;
  if ( v2 )
    return 1;
  return v3;
}
