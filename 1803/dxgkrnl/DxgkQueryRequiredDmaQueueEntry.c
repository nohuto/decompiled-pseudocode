/*
 * XREFs of DxgkQueryRequiredDmaQueueEntry @ 0x1C01A1EAC
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C01F913C (DpiFdoStartAdapter.c)
 * Callees:
 *     VidSchQueryRequiredDmaQueueEntry @ 0x1C002F3A4 (VidSchQueryRequiredDmaQueueEntry.c)
 */

__int64 DxgkQueryRequiredDmaQueueEntry()
{
  return VidSchQueryRequiredDmaQueueEntry();
}
