/*
 * XREFs of GreIsDwmStateLocked @ 0x1C00FC0F0
 * Callers:
 *     <none>
 * Callees:
 *     GreIsSemaphoreOwnedOrSharedByCurrentThread @ 0x1C003C9F0 (GreIsSemaphoreOwnedOrSharedByCurrentThread.c)
 */

__int64 GreIsDwmStateLocked()
{
  return GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemDwmState);
}
