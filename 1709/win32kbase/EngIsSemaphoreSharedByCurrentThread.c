/*
 * XREFs of EngIsSemaphoreSharedByCurrentThread @ 0x1C00908D0
 * Callers:
 *     <none>
 * Callees:
 *     GreIsSemaphoreSharedByCurrentThread @ 0x1C00908F0 (GreIsSemaphoreSharedByCurrentThread.c)
 */

BOOL __stdcall EngIsSemaphoreSharedByCurrentThread(HSEMAPHORE hsem)
{
  return GreIsSemaphoreSharedByCurrentThread(hsem);
}
