/*
 * XREFs of ?IsOfType@CTranslateTransform@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180019B40
 * Callers:
 *     <none>
 * Callees:
 *     ?IsOfType@CTransform@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180037EC0 (-IsOfType@CTransform@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 */

char __fastcall CTranslateTransform::IsOfType(__int64 a1, int a2)
{
  char v2; // cl
  char v4; // al

  if ( a2 == 146 )
    return 1;
  v4 = CTransform::IsOfType();
  v2 = 0;
  if ( v4 )
    return 1;
  return v2;
}
