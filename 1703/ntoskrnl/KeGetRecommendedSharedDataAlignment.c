/*
 * XREFs of KeGetRecommendedSharedDataAlignment @ 0x140005D70
 * Callers:
 *     ExAllocateCacheAwareRundownProtection @ 0x140422A10 (ExAllocateCacheAwareRundownProtection.c)
 *     ExInitializeRundownProtectionCacheAware @ 0x140422B10 (ExInitializeRundownProtectionCacheAware.c)
 *     ExpQuerySystemInformation @ 0x140528170 (ExpQuerySystemInformation.c)
 *     ExSizeOfRundownProtectionCacheAware @ 0x1405CFAE0 (ExSizeOfRundownProtectionCacheAware.c)
 * Callees:
 *     <none>
 */

ULONG KeGetRecommendedSharedDataAlignment(void)
{
  return KeLargestCacheLine;
}
