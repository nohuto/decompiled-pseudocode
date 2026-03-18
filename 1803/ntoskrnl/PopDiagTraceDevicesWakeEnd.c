/*
 * XREFs of PopDiagTraceDevicesWakeEnd @ 0x1405EB53C
 * Callers:
 *     PoBroadcastSystemState @ 0x140472204 (PoBroadcastSystemState.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x1400CDCD0 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTraceDevicesWakeEnd()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_DEVICESWAKE_END);
}
