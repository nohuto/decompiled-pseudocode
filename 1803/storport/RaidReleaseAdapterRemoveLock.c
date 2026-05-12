/*
 * XREFs of RaidReleaseAdapterRemoveLock @ 0x1C002BAC8
 * Callers:
 *     RaWmiDispatchIrp @ 0x1C0060794 (RaWmiDispatchIrp.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidReleaseAdapterRemoveLock(__int64 a1)
{
  ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 256));
}
