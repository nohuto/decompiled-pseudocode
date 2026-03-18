/*
 * XREFs of PopDispatchSuperfetchNotification @ 0x1406FCC50
 * Callers:
 *     PopIssueActionRequest @ 0x1406FD0C4 (PopIssueActionRequest.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x14012C528 (PopDiagTraceEventNoPayload.c)
 *     PfPowerActionNotify @ 0x1404309DC (PfPowerActionNotify.c)
 *     PopCheckpointSystemSleep @ 0x14043A498 (PopCheckpointSystemSleep.c)
 */

unsigned __int64 __fastcall PopDispatchSuperfetchNotification(int a1, int a2)
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_SUPERFETCH_START);
  PopCheckpointSystemSleep(6);
  PfPowerActionNotify(1, (a1 >> 31) & 2, a2);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_SUPERFETCH_STOP);
  return PopCheckpointSystemSleep(7);
}
