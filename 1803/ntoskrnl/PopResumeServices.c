/*
 * XREFs of PopResumeServices @ 0x1405EC548
 * Callers:
 *     PopIssueActionRequest @ 0x1405EBF50 (PopIssueActionRequest.c)
 *     PopDirectedDripsNotifyAppsAndServices @ 0x140761810 (PopDirectedDripsNotifyAppsAndServices.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x1400CDCD0 (PopDiagTraceEventNoPayload.c)
 *     PopCheckpointSystemSleep @ 0x140473498 (PopCheckpointSystemSleep.c)
 *     PopDispatchStateCallout @ 0x140583BFC (PopDispatchStateCallout.c)
 */

void __fastcall PopResumeServices(_DWORD *a1, char a2)
{
  int v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0;
  a1[4] = 6;
  qword_1403AA4E0 = KeQueryPerformanceCounter(0LL).QuadPart;
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_RESUMESERVICES);
  if ( a2 )
    PopCheckpointSystemSleep(39);
  PopDispatchStateCallout(a1, (__int64)&v4);
  qword_1403AA4E8 = KeQueryPerformanceCounter(0LL).QuadPart;
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_RESUMESERVICES_END);
  if ( a2 )
    PopCheckpointSystemSleep(40);
}
