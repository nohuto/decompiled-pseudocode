/*
 * XREFs of PpmPerfTelemetryCallback @ 0x140139F50
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x140139F70 (PopQueueWorkItem.c)
 */

__int64 PpmPerfTelemetryCallback()
{
  return PopQueueWorkItem(&unk_140366BA8, 1LL);
}
