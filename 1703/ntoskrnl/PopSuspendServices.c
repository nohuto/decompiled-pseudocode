/*
 * XREFs of PopSuspendServices @ 0x1405766B8
 * Callers:
 *     PopIssueActionRequest @ 0x140576C20 (PopIssueActionRequest.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x140038914 (PopDiagTraceEventNoPayload.c)
 *     PopCheckpointSystemSleep @ 0x140408338 (PopCheckpointSystemSleep.c)
 *     PopDispatchStateCallout @ 0x1404209B4 (PopDispatchStateCallout.c)
 */

unsigned __int64 __fastcall PopSuspendServices(_DWORD *a1)
{
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_SUSPENDSERVICES);
  PopCheckpointSystemSleep(4);
  a1[4] = 3;
  PopDispatchStateCallout(a1, (__int64)&v3);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_SUSPENDSERVICES_END);
  return PopCheckpointSystemSleep(5);
}
