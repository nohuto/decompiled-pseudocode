/*
 * XREFs of ?IsOfType@CRectangleGeometry@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800A6960
 * Callers:
 *     <none>
 * Callees:
 *     ?IsOfType@CGeometry@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18006FD8C (-IsOfType@CGeometry@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 */

char __fastcall CRectangleGeometry::IsOfType(__int64 a1, int a2)
{
  char v2; // cl
  char v4; // al

  if ( a2 == 115 )
    return 1;
  v4 = CGeometry::IsOfType(a1, a2);
  v2 = 0;
  if ( v4 )
    return 1;
  return v2;
}
