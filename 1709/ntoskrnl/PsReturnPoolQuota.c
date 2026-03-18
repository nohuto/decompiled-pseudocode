/*
 * XREFs of PsReturnPoolQuota @ 0x140116740
 * Callers:
 *     ExReturnPoolQuota @ 0x1401166AC (ExReturnPoolQuota.c)
 * Callees:
 *     PspReturnQuota @ 0x140070050 (PspReturnQuota.c)
 */

void __stdcall PsReturnPoolQuota(PEPROCESS Process, POOL_TYPE PoolType, ULONG_PTR Amount)
{
  if ( Process != PsInitialSystemProcess )
    PspReturnQuota((char *)Process[1].ActiveProcessors.Bitmap[4], (ULONG_PTR)Process, PoolType == PagedPool, Amount);
}
