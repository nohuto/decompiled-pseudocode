/*
 * XREFs of TtmpSetTerminalPendingCleanup @ 0x140772528
 * Callers:
 *     TtmiCreateTerminal @ 0x1407719C4 (TtmiCreateTerminal.c)
 *     TtmpCloseTerminalHandle @ 0x140772260 (TtmpCloseTerminalHandle.c)
 * Callees:
 *     TtmpResetEvaluationTimer @ 0x140772424 (TtmpResetEvaluationTimer.c)
 *     TtmiScheduleSessionWorker @ 0x140773264 (TtmiScheduleSessionWorker.c)
 */

char __fastcall TtmpSetTerminalPendingCleanup(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a2 + 32) |= 1u;
  TtmiScheduleSessionWorker(a1, 2LL);
  return TtmpResetEvaluationTimer((char *)a2, 0LL);
}
