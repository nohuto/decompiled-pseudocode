/*
 * XREFs of FsRtlInitializeBaseMcb @ 0x14003AC40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall FsRtlInitializeBaseMcb(PBASE_MCB Mcb, POOL_TYPE PoolType)
{
  FsRtlInitializeBaseMcbEx(Mcb, PoolType, 1u);
}
