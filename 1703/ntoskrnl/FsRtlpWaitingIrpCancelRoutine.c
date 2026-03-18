/*
 * XREFs of FsRtlpWaitingIrpCancelRoutine @ 0x1401E3FC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall FsRtlpWaitingIrpCancelRoutine(__int64 a1, __int64 a2)
{
  FsRtlpCancelWaitingIrp(a2, 0);
}
