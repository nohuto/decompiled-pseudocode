/*
 * XREFs of ExFreeCacheAwareRundownProtection @ 0x1400FA200
 * Callers:
 *     RawCleanupVcb @ 0x140546D34 (RawCleanupVcb.c)
 *     EtwInitializeSiloState @ 0x1405DA61C (EtwInitializeSiloState.c)
 *     EtwDeleteSiloState @ 0x140747D48 (EtwDeleteSiloState.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __stdcall ExFreeCacheAwareRundownProtection(PEX_RUNDOWN_REF_CACHE_AWARE RunRefCacheAware)
{
  ExFreePoolWithTag(RunRefCacheAware->PoolToFree, 0);
  ExFreePoolWithTag(RunRefCacheAware, 0);
}
