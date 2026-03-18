/*
 * XREFs of KzLowerIrql @ 0x14005B500
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall KzLowerIrql(KIRQL NewIrql)
{
  __writecr8(NewIrql);
}
