/*
 * XREFs of DxgkQueryRequiredDmaQueueEntry @ 0x1C00A6F2C
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C0111538 (DpiFdoStartAdapter.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 DxgkQueryRequiredDmaQueueEntry()
{
  return VidSchQueryRequiredDmaQueueEntry();
}
