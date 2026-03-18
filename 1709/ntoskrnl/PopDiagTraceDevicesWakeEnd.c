/*
 * XREFs of PopDiagTraceDevicesWakeEnd @ 0x140703250
 * Callers:
 *     PoBroadcastSystemState @ 0x140436BFC (PoBroadcastSystemState.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x14012C528 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTraceDevicesWakeEnd()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_DEVICESWAKE_END);
}
