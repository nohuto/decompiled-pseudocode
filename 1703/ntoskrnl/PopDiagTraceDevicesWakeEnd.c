/*
 * XREFs of PopDiagTraceDevicesWakeEnd @ 0x14057A424
 * Callers:
 *     PoBroadcastSystemState @ 0x140408390 (PoBroadcastSystemState.c)
 * Callees:
 *     <none>
 */

void PopDiagTraceDevicesWakeEnd()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_DEVICESWAKE_END);
}
