/*
 * XREFs of ?W32kAcquireDynamicModeChangeLockShared@@YAXXZ @ 0x1C00F0870
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void W32kAcquireDynamicModeChangeLockShared(void)
{
  DxEngLockShareSem();
}
