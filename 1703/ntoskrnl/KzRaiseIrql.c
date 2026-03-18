/*
 * XREFs of KzRaiseIrql @ 0x1400A7E60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

KIRQL __stdcall KzRaiseIrql(KIRQL NewIrql)
{
  KIRQL result; // al

  result = KeGetCurrentIrql();
  __writecr8(NewIrql);
  return result;
}
