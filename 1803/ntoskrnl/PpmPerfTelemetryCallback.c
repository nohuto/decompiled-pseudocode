/*
 * XREFs of PpmPerfTelemetryCallback @ 0x14015F3D0
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x1400CF7E4 (PopQueueWorkItem.c)
 */

char PpmPerfTelemetryCallback()
{
  return PopQueueWorkItem((__int64)&unk_1403AB368, DelayedWorkQueue);
}
