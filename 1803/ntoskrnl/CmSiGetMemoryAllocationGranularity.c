/*
 * XREFs of CmSiGetMemoryAllocationGranularity @ 0x140006D10
 * Callers:
 *     HvpViewMapCreateViewsForRegion @ 0x140496F3C (HvpViewMapCreateViewsForRegion.c)
 *     HvpViewMapPromoteRangeToMapping @ 0x140566C84 (HvpViewMapPromoteRangeToMapping.c)
 * Callees:
 *     <none>
 */

__int64 CmSiGetMemoryAllocationGranularity()
{
  return 0x10000LL;
}
