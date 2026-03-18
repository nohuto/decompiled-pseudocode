/*
 * XREFs of ?IsOfType@CTransform3DGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801473B0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsOfType@CTransform3D@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180096850 (-IsOfType@CTransform3D@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 */

char __fastcall CTransform3DGroup::IsOfType(__int64 a1, int a2)
{
  char v2; // al
  char v3; // cl

  if ( a2 == 129 )
    return 1;
  v2 = CTransform3D::IsOfType(a1, a2);
  v3 = 0;
  if ( v2 )
    return 1;
  return v3;
}
