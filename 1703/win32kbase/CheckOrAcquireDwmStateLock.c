/*
 * XREFs of CheckOrAcquireDwmStateLock @ 0x1C00277CC
 * Callers:
 *     OpenDwmHandle @ 0x1C00276C0 (OpenDwmHandle.c)
 *     NtDCompositionDuplicateSwapchainHandleToDwm @ 0x1C013F0A0 (NtDCompositionDuplicateSwapchainHandleToDwm.c)
 * Callees:
 *     UserIsUserCritSecIn @ 0x1C0027810 (UserIsUserCritSecIn.c)
 *     GreIsSemaphoreOwnedOrSharedByCurrentThread @ 0x1C0027850 (GreIsSemaphoreOwnedOrSharedByCurrentThread.c)
 *     GreLockDwmState @ 0x1C0027890 (GreLockDwmState.c)
 */

char CheckOrAcquireDwmStateLock()
{
  char v0; // bl

  v0 = 0;
  if ( !(unsigned int)UserIsUserCritSecIn()
    && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread((PERESOURCE)ghsemDwmState) )
  {
    GreLockDwmState();
    return 1;
  }
  return v0;
}
