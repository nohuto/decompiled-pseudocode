/*
 * XREFs of DbgUiGetThreadDebugObject @ 0x1800C9530
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *DbgUiGetThreadDebugObject()
{
  return NtCurrentTeb()->DbgSsReserved[1];
}
