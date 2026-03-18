/*
 * XREFs of FsRtlpExclusiveIrpCancelRoutine @ 0x1401449F0
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlpCancelExclusiveIrp @ 0x140144A0C (FsRtlpCancelExclusiveIrp.c)
 */

__int64 __fastcall FsRtlpExclusiveIrpCancelRoutine(__int64 a1, __int64 a2, __int64 a3)
{
  LOBYTE(a3) = 1;
  return FsRtlpCancelExclusiveIrp(a2, 0LL, a3);
}
