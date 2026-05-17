/*
 * XREFs of DbgUiGetThreadDebugObject @ 0x1800CFE00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *DbgUiGetThreadDebugObject()
{
  return NtCurrentTeb()->DbgSsReserved[1];
}
