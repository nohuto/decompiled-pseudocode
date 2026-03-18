/*
 * XREFs of PopDispatchSuperfetchNotification @ 0x140576408
 * Callers:
 *     PopIssueActionRequest @ 0x140576C20 (PopIssueActionRequest.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x140038914 (PopDiagTraceEventNoPayload.c)
 *     PopCheckpointSystemSleep @ 0x140408338 (PopCheckpointSystemSleep.c)
 *     PfPowerActionNotify @ 0x140409780 (PfPowerActionNotify.c)
 */

unsigned __int64 __fastcall PopDispatchSuperfetchNotification(int a1, int a2)
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_SUPERFETCH_START);
  PopCheckpointSystemSleep(6);
  PfPowerActionNotify(1, (a1 >> 31) & 2, a2);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_SUPERFETCH_STOP);
  return PopCheckpointSystemSleep(7);
}
