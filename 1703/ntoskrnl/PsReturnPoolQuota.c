/*
 * XREFs of PsReturnPoolQuota @ 0x140025000
 * Callers:
 *     ExReturnPoolQuota @ 0x140024F70 (ExReturnPoolQuota.c)
 * Callees:
 *     PspReturnQuota @ 0x1400DC8F0 (PspReturnQuota.c)
 */

void __stdcall PsReturnPoolQuota(PEPROCESS Process, POOL_TYPE PoolType, ULONG_PTR Amount)
{
  if ( Process != PsInitialSystemProcess )
    PspReturnQuota(Process[1].ActiveProcessors.Bitmap[4], Process, PoolType == PagedPool, Amount);
}
