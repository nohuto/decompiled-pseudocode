/*
 * XREFs of KeRaiseIrqlToDpcLevel @ 0x1400E2500
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

KIRQL KeRaiseIrqlToDpcLevel(void)
{
  KIRQL result; // al

  result = KeGetCurrentIrql();
  __writecr8(2uLL);
  return result;
}
