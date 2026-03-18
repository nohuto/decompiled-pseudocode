/*
 * XREFs of ?W32kReleaseDynamicModeChangeLockShared@@YAXXZ @ 0x1C00C9740
 * Callers:
 *     <none>
 * Callees:
 *     DxEngUnlockShareSem @ 0x1C00C97A0 (DxEngUnlockShareSem.c)
 */

void W32kReleaseDynamicModeChangeLockShared(void)
{
  DxEngUnlockShareSem();
}
