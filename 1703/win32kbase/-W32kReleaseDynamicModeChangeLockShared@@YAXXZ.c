/*
 * XREFs of ?W32kReleaseDynamicModeChangeLockShared@@YAXXZ @ 0x1C00F0900
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void W32kReleaseDynamicModeChangeLockShared(void)
{
  DxEngUnlockShareSem();
}
