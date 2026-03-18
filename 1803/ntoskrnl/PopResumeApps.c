/*
 * XREFs of PopResumeApps @ 0x1405EC4BC
 * Callers:
 *     PopIssueActionRequest @ 0x1405EBF50 (PopIssueActionRequest.c)
 *     PopDirectedDripsNotifyAppsAndServices @ 0x140761810 (PopDirectedDripsNotifyAppsAndServices.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x1400CDCD0 (PopDiagTraceEventNoPayload.c)
 *     PopCheckpointSystemSleep @ 0x140473498 (PopCheckpointSystemSleep.c)
 *     PopDispatchStateCallout @ 0x140583BFC (PopDispatchStateCallout.c)
 */

void __fastcall PopResumeApps(_DWORD *a1, char a2)
{
  PopHiberBootForceMonitorOff = 0;
  a1[4] = 5;
  qword_1403AA4D0 = KeQueryPerformanceCounter(0LL).QuadPart;
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_RESUMEAPPS);
  if ( a2 )
    PopCheckpointSystemSleep(37);
  PopDispatchStateCallout(a1, 0LL);
  qword_1403AA4D8 = KeQueryPerformanceCounter(0LL).QuadPart;
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_RESUMEAPPS_END);
  if ( a2 )
    PopCheckpointSystemSleep(38);
}
