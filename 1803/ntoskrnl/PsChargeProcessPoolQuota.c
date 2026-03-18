/*
 * XREFs of PsChargeProcessPoolQuota @ 0x1400B6740
 * Callers:
 *     PsChargePoolQuota @ 0x1400B6720 (PsChargePoolQuota.c)
 *     FsRtlCancelNotify @ 0x1400B6BD0 (FsRtlCancelNotify.c)
 * Callees:
 *     PspChargeQuota @ 0x1401049D0 (PspChargeQuota.c)
 */

NTSTATUS __stdcall PsChargeProcessPoolQuota(PEPROCESS Process, POOL_TYPE PoolType, ULONG_PTR Amount)
{
  if ( Process == PsInitialSystemProcess )
    return 0;
  else
    return PspChargeQuota(Process[1].ActiveProcessors.Bitmap[4], Process, PoolType == PagedPool, Amount);
}
