/*
 * XREFs of TtmpSetTerminalPendingCleanup @ 0x14070EDB8
 * Callers:
 *     TtmiCreateTerminal @ 0x14070E208 (TtmiCreateTerminal.c)
 *     TtmpCloseTerminalHandle @ 0x14070EB00 (TtmpCloseTerminalHandle.c)
 * Callees:
 *     TtmpResetEvaluationTimer @ 0x14070ECC4 (TtmpResetEvaluationTimer.c)
 *     TtmiScheduleSessionWorker @ 0x14070F9F4 (TtmiScheduleSessionWorker.c)
 */

char __fastcall TtmpSetTerminalPendingCleanup(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a2 + 32) |= 1u;
  TtmiScheduleSessionWorker(a1, 2LL);
  return TtmpResetEvaluationTimer((char *)a2, 0LL);
}
