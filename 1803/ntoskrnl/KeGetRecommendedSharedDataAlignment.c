/*
 * XREFs of KeGetRecommendedSharedDataAlignment @ 0x140006AC0
 * Callers:
 *     ExAllocateCacheAwareRundownProtection @ 0x1404955A0 (ExAllocateCacheAwareRundownProtection.c)
 *     ExInitializeRundownProtectionCacheAware @ 0x1404956A0 (ExInitializeRundownProtectionCacheAware.c)
 *     ExpQuerySystemInformation @ 0x1405AE850 (ExpQuerySystemInformation.c)
 *     ExSizeOfRundownProtectionCacheAware @ 0x1406056F0 (ExSizeOfRundownProtectionCacheAware.c)
 * Callees:
 *     <none>
 */

ULONG KeGetRecommendedSharedDataAlignment(void)
{
  return KeLargestCacheLine;
}
