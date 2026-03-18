/*
 * XREFs of FsRtlpOplockRHIrpCancelRoutine @ 0x1400B6F60
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlpCancelOplockRHIrp @ 0x1400B6F7C (FsRtlpCancelOplockRHIrp.c)
 */

__int64 __fastcall FsRtlpOplockRHIrpCancelRoutine(__int64 a1, __int64 a2, __int64 a3)
{
  LOBYTE(a3) = 1;
  return FsRtlpCancelOplockRHIrp(a2, 0LL, a3);
}
