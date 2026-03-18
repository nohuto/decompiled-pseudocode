/*
 * XREFs of PopSuspendServices @ 0x1405EC44C
 * Callers:
 *     PopIssueActionRequest @ 0x1405EBF50 (PopIssueActionRequest.c)
 *     PopDirectedDripsNotifyAppsAndServices @ 0x140761810 (PopDirectedDripsNotifyAppsAndServices.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x1400CDCD0 (PopDiagTraceEventNoPayload.c)
 *     PopCheckpointSystemSleep @ 0x140473498 (PopCheckpointSystemSleep.c)
 *     PopDispatchStateCallout @ 0x140583BFC (PopDispatchStateCallout.c)
 */

void __fastcall PopSuspendServices(_DWORD *a1, char a2)
{
  int v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0;
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_SUSPENDSERVICES);
  if ( a2 )
    PopCheckpointSystemSleep(4);
  a1[4] = 3;
  PopDispatchStateCallout(a1, (__int64)&v4);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_SUSPENDSERVICES_END);
  if ( a2 )
    PopCheckpointSystemSleep(5);
}
