/*
 * XREFs of ?IsOfType@CSkewTransform@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180022BE0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsOfType@CTransform@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180029550 (-IsOfType@CTransform@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 */

char __fastcall CSkewTransform::IsOfType(__int64 a1, int a2)
{
  char v2; // al
  char v3; // cl

  if ( a2 == 67 )
    return 1;
  v2 = CTransform::IsOfType();
  v3 = 0;
  if ( v2 )
    return 1;
  return v3;
}
