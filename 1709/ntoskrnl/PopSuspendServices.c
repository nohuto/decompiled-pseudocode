/*
 * XREFs of PopSuspendServices @ 0x1406FD9D4
 * Callers:
 *     PopIssueActionRequest @ 0x1406FD0C4 (PopIssueActionRequest.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x14012C528 (PopDiagTraceEventNoPayload.c)
 *     PopCheckpointSystemSleep @ 0x14043A498 (PopCheckpointSystemSleep.c)
 *     PopDispatchStateCallout @ 0x1406FCB40 (PopDispatchStateCallout.c)
 */

unsigned __int64 __fastcall PopSuspendServices(_DWORD *a1)
{
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_SUSPENDSERVICES);
  PopCheckpointSystemSleep(4);
  a1[4] = 3;
  PopDispatchStateCallout(a1, &v3);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_SUSPENDSERVICES_END);
  return PopCheckpointSystemSleep(5);
}
