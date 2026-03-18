/*
 * XREFs of ExFreeCacheAwareRundownProtection @ 0x140006330
 * Callers:
 *     MiDeletePartitionResources @ 0x14026E874 (MiDeletePartitionResources.c)
 *     RawCleanupVcb @ 0x1404942A0 (RawCleanupVcb.c)
 *     EtwInitializeSiloState @ 0x14063D968 (EtwInitializeSiloState.c)
 *     EtwDeleteSiloState @ 0x1407A948C (EtwDeleteSiloState.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __stdcall ExFreeCacheAwareRundownProtection(PEX_RUNDOWN_REF_CACHE_AWARE RunRefCacheAware)
{
  ExFreePoolWithTag(RunRefCacheAware->PoolToFree, 0);
  ExFreePoolWithTag(RunRefCacheAware, 0);
}
