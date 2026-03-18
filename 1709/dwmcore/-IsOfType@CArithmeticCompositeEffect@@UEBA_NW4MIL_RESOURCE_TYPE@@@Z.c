/*
 * XREFs of ?IsOfType@CArithmeticCompositeEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801470E0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsOfType@CFilterEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801471A0 (-IsOfType@CFilterEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 */

char __fastcall CArithmeticCompositeEffect::IsOfType(__int64 a1, int a2)
{
  char v2; // al
  char v3; // cl

  if ( a2 == 5 )
    return 1;
  v2 = CFilterEffect::IsOfType();
  v3 = 0;
  if ( v2 )
    return 1;
  return v3;
}
