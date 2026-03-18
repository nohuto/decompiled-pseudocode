/*
 * XREFs of PsChargeProcessPoolQuota @ 0x140108080
 * Callers:
 *     PsChargePoolQuota @ 0x140108060 (PsChargePoolQuota.c)
 *     FsRtlCancelNotify @ 0x1401086F0 (FsRtlCancelNotify.c)
 * Callees:
 *     PspChargeQuota @ 0x14003AE80 (PspChargeQuota.c)
 */

NTSTATUS __stdcall PsChargeProcessPoolQuota(PEPROCESS Process, POOL_TYPE PoolType, ULONG_PTR Amount)
{
  if ( Process == PsInitialSystemProcess )
    return 0;
  else
    return PspChargeQuota(Process[1].ActiveProcessors.Bitmap[4], (__int64)Process, PoolType == PagedPool, Amount);
}
