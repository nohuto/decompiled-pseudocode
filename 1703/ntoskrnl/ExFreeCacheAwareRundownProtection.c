/*
 * XREFs of ExFreeCacheAwareRundownProtection @ 0x140005C00
 * Callers:
 *     RawCleanupVcb @ 0x140422344 (RawCleanupVcb.c)
 *     EtwInitializeSiloState @ 0x1405C7308 (EtwInitializeSiloState.c)
 *     EtwDeleteSiloState @ 0x14070C6D8 (EtwDeleteSiloState.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

void __stdcall ExFreeCacheAwareRundownProtection(PEX_RUNDOWN_REF_CACHE_AWARE RunRefCacheAware)
{
  ExFreePoolWithTag(RunRefCacheAware->PoolToFree, 0);
  ExFreePoolWithTag(RunRefCacheAware, 0);
}
