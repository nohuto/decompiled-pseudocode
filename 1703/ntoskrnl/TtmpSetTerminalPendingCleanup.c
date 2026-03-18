/*
 * XREFs of TtmpSetTerminalPendingCleanup @ 0x1406D8A28
 * Callers:
 *     TtmiCreateTerminal @ 0x1406D7E80 (TtmiCreateTerminal.c)
 *     TtmpCloseTerminalHandle @ 0x1406D8770 (TtmpCloseTerminalHandle.c)
 * Callees:
 *     TtmiScheduleSessionWorker @ 0x1406D95E8 (TtmiScheduleSessionWorker.c)
 */

char __fastcall TtmpSetTerminalPendingCleanup(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a2 + 32) |= 1u;
  TtmiScheduleSessionWorker(a1, 2LL);
  return TtmpResetEvaluationTimer((char *)a2, 0LL);
}
