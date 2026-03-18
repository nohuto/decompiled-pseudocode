/*
 * XREFs of PopDispatchSuperfetchNotification @ 0x1405EC5D4
 * Callers:
 *     PopIssueActionRequest @ 0x1405EBF50 (PopIssueActionRequest.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x1400CDCD0 (PopDiagTraceEventNoPayload.c)
 *     PfPowerActionNotify @ 0x140471F34 (PfPowerActionNotify.c)
 *     PopCheckpointSystemSleep @ 0x140473498 (PopCheckpointSystemSleep.c)
 */

unsigned __int64 __fastcall PopDispatchSuperfetchNotification(int a1, int a2)
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_SUPERFETCH_START);
  PopCheckpointSystemSleep(6);
  PfPowerActionNotify(1, (a1 >> 31) & 2, a2);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_SUPERFETCH_STOP);
  return PopCheckpointSystemSleep(7);
}
