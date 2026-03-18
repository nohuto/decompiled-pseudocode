/*
 * XREFs of KeGetRecommendedSharedDataAlignment @ 0x1400FD110
 * Callers:
 *     ExpQuerySystemInformation @ 0x1404C0DD0 (ExpQuerySystemInformation.c)
 *     ExInitializeRundownProtectionCacheAware @ 0x1405546A0 (ExInitializeRundownProtectionCacheAware.c)
 *     ExAllocateCacheAwareRundownProtection @ 0x140554740 (ExAllocateCacheAwareRundownProtection.c)
 *     ExSizeOfRundownProtectionCacheAware @ 0x1405E5480 (ExSizeOfRundownProtectionCacheAware.c)
 * Callees:
 *     <none>
 */

ULONG KeGetRecommendedSharedDataAlignment(void)
{
  return KeLargestCacheLine;
}
