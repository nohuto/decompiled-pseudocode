/*
 * XREFs of ?W32kAcquireDynamicModeChangeLockShared@@YAXXZ @ 0x1C00F3430
 * Callers:
 *     <none>
 * Callees:
 *     DxEngLockShareSem @ 0x1C00F34F0 (DxEngLockShareSem.c)
 */

void W32kAcquireDynamicModeChangeLockShared(void)
{
  DxEngLockShareSem();
}
