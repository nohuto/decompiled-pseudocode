/*
 * XREFs of ?IsOfType@CTransformGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800B46B0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsOfType@CTransform@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800B4E80 (-IsOfType@CTransform@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 */

char __fastcall CTransformGroup::IsOfType(__int64 a1, int a2)
{
  char v2; // cl
  char v4; // al

  if ( a2 == 130 )
    return 1;
  v4 = CTransform::IsOfType();
  v2 = 0;
  if ( v4 )
    return 1;
  return v2;
}
