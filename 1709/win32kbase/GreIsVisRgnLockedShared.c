/*
 * XREFs of GreIsVisRgnLockedShared @ 0x1C00FC140
 * Callers:
 *     <none>
 * Callees:
 *     GreIsSemaphoreSharedByCurrentThread @ 0x1C00908F0 (GreIsSemaphoreSharedByCurrentThread.c)
 */

_BOOL8 GreIsVisRgnLockedShared()
{
  return GreIsSemaphoreSharedByCurrentThread(ghsemDCVisRgn);
}
