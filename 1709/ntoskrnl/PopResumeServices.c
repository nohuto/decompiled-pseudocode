/*
 * XREFs of PopResumeServices @ 0x1406FD79C
 * Callers:
 *     PopIssueActionRequest @ 0x1406FD0C4 (PopIssueActionRequest.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x14012C528 (PopDiagTraceEventNoPayload.c)
 *     PopCheckpointSystemSleep @ 0x14043A498 (PopCheckpointSystemSleep.c)
 *     PopDispatchStateCallout @ 0x1406FCB40 (PopDispatchStateCallout.c)
 */

unsigned __int64 __fastcall PopResumeServices(_DWORD *a1)
{
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  a1[4] = 6;
  qword_140365C40 = KeQueryPerformanceCounter(0LL).QuadPart;
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_RESUMESERVICES);
  PopCheckpointSystemSleep(39);
  PopDispatchStateCallout(a1, &v3);
  qword_140365C48 = KeQueryPerformanceCounter(0LL).QuadPart;
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_RESUMESERVICES_END);
  return PopCheckpointSystemSleep(40);
}
