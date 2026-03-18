/*
 * XREFs of KzLowerIrql @ 0x1400A5E80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall KzLowerIrql(KIRQL NewIrql)
{
  __writecr8(NewIrql);
}
