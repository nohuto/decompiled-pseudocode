/*
 * XREFs of PopThermalTelemetryCallback @ 0x140278E40
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x1400CF7E4 (PopQueueWorkItem.c)
 */

char PopThermalTelemetryCallback()
{
  return PopQueueWorkItem((__int64)&unk_1403A9C68, DelayedWorkQueue);
}
