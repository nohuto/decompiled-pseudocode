/*
 * XREFs of FsRtlInitializeBaseMcb @ 0x1400632B0
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlInitializeBaseMcbEx @ 0x140063180 (FsRtlInitializeBaseMcbEx.c)
 */

void __stdcall FsRtlInitializeBaseMcb(PBASE_MCB Mcb, POOL_TYPE PoolType)
{
  FsRtlInitializeBaseMcbEx(Mcb, PoolType, 1u);
}
