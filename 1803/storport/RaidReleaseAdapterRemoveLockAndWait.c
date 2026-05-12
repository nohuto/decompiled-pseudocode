/*
 * XREFs of RaidReleaseAdapterRemoveLockAndWait @ 0x1C002BAE4
 * Callers:
 *     RaidAdapterRemoveDeviceIrp @ 0x1C00646C4 (RaidAdapterRemoveDeviceIrp.c)
 *     RaidAdapterSurpriseRemovalIrp @ 0x1C006498C (RaidAdapterSurpriseRemovalIrp.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidReleaseAdapterRemoveLockAndWait(__int64 a1)
{
  ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 256));
  ExWaitForRundownProtectionReleaseCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 256));
}
