/*
 * XREFs of PopThermalTelemetryCallback @ 0x140243D10
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x140139F70 (PopQueueWorkItem.c)
 */

char PopThermalTelemetryCallback()
{
  return PopQueueWorkItem((__int64)&unk_1403652A8, DelayedWorkQueue);
}
