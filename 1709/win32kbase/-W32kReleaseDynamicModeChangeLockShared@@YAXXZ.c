/*
 * XREFs of ?W32kReleaseDynamicModeChangeLockShared@@YAXXZ @ 0x1C00F34D0
 * Callers:
 *     <none>
 * Callees:
 *     DxEngUnlockShareSem @ 0x1C00F3530 (DxEngUnlockShareSem.c)
 */

void W32kReleaseDynamicModeChangeLockShared(void)
{
  DxEngUnlockShareSem();
}
