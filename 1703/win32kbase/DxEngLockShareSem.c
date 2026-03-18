/*
 * XREFs of DxEngLockShareSem @ 0x1C00F0910
 * Callers:
 *     ?W32kAcquireDynamicModeChangeLockShared@@YAXXZ @ 0x1C00F0870 (-W32kAcquireDynamicModeChangeLockShared@@YAXXZ.c)
 * Callees:
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C00777D0 (EtwTraceGreLockAcquireSemaphoreShared.c)
 */

__int64 DxEngLockShareSem()
{
  if ( ghsemDynamicModeChange )
    ExEnterPriorityRegionAndAcquireResourceShared(ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreShared((__int64)L"ghsemDynamicModeChange");
  return 1LL;
}
