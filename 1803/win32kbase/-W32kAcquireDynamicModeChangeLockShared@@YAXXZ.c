/*
 * XREFs of ?W32kAcquireDynamicModeChangeLockShared@@YAXXZ @ 0x1C00C96A0
 * Callers:
 *     <none>
 * Callees:
 *     DxEngLockShareSem @ 0x1C00C9760 (DxEngLockShareSem.c)
 */

void W32kAcquireDynamicModeChangeLockShared(void)
{
  DxEngLockShareSem();
}
