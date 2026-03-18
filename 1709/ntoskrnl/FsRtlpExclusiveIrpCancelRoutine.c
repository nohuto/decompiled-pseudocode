/*
 * XREFs of FsRtlpExclusiveIrpCancelRoutine @ 0x1401E8170
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlpCancelExclusiveIrp @ 0x1401E7EA0 (FsRtlpCancelExclusiveIrp.c)
 */

void __fastcall FsRtlpExclusiveIrpCancelRoutine(__int64 a1, __int64 a2)
{
  FsRtlpCancelExclusiveIrp(a2, 0, 1);
}
