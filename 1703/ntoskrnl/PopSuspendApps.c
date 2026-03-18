/*
 * XREFs of PopSuspendApps @ 0x140576714
 * Callers:
 *     PopIssueActionRequest @ 0x140576C20 (PopIssueActionRequest.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x140038914 (PopDiagTraceEventNoPayload.c)
 *     PopCheckpointSystemSleep @ 0x140408338 (PopCheckpointSystemSleep.c)
 *     PopDispatchStateCallout @ 0x1404209B4 (PopDispatchStateCallout.c)
 */

unsigned __int64 __fastcall PopSuspendApps(_DWORD *a1)
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_SUSPENDAPPS);
  PopCheckpointSystemSleep(2);
  a1[4] = 2;
  PopDispatchStateCallout(a1, 0LL);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_SUSPENDAPPS_END);
  return PopCheckpointSystemSleep(3);
}
