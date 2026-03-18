/*
 * XREFs of DxgkQueryRequiredDmaQueueEntry @ 0x1C00FAD74
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C0117FA8 (DpiFdoStartAdapter.c)
 * Callees:
 *     VidSchQueryRequiredDmaQueueEntry @ 0x1C0025E44 (VidSchQueryRequiredDmaQueueEntry.c)
 */

__int64 DxgkQueryRequiredDmaQueueEntry()
{
  return VidSchQueryRequiredDmaQueueEntry();
}
