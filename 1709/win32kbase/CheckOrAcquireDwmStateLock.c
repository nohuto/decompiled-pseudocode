/*
 * XREFs of CheckOrAcquireDwmStateLock @ 0x1C003C96C
 * Callers:
 *     OpenDwmHandle @ 0x1C003C85C (OpenDwmHandle.c)
 *     NtDCompositionDuplicateSwapchainHandleToDwm @ 0x1C013E500 (NtDCompositionDuplicateSwapchainHandleToDwm.c)
 * Callees:
 *     UserIsUserCritSecIn @ 0x1C003C9B0 (UserIsUserCritSecIn.c)
 *     GreIsSemaphoreOwnedOrSharedByCurrentThread @ 0x1C003C9F0 (GreIsSemaphoreOwnedOrSharedByCurrentThread.c)
 *     GreLockDwmState @ 0x1C003CA30 (GreLockDwmState.c)
 */

char CheckOrAcquireDwmStateLock()
{
  char v0; // bl

  v0 = 0;
  if ( !(unsigned int)UserIsUserCritSecIn() && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemDwmState) )
  {
    GreLockDwmState();
    return 1;
  }
  return v0;
}
