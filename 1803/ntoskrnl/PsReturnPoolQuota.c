/*
 * XREFs of PsReturnPoolQuota @ 0x1400BA6B0
 * Callers:
 *     ExReturnPoolQuota @ 0x1400BA618 (ExReturnPoolQuota.c)
 *     ExpReleasePoolQuota @ 0x1402B8F50 (ExpReleasePoolQuota.c)
 * Callees:
 *     PspReturnQuota @ 0x1400F8E70 (PspReturnQuota.c)
 */

void __stdcall PsReturnPoolQuota(PEPROCESS Process, POOL_TYPE PoolType, ULONG_PTR Amount)
{
  if ( Process != PsInitialSystemProcess )
    PspReturnQuota(Process[1].ActiveProcessors.Bitmap[4], Process, PoolType == PagedPool, Amount);
}
