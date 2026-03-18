/*
 * XREFs of ?IsOfType@CRotateTransform3D@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800D2510
 * Callers:
 *     <none>
 * Callees:
 *     ?IsOfType@CTransform3D@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18002B420 (-IsOfType@CTransform3D@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 */

char __fastcall CRotateTransform3D::IsOfType(__int64 a1, int a2)
{
  bool v2; // al
  char v3; // cl

  if ( a2 == 26 )
    return 1;
  v2 = CTransform3D::IsOfType(a1, a2);
  v3 = 0;
  if ( v2 )
    return 1;
  return v3;
}
