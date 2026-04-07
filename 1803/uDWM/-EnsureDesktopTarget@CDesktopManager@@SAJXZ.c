/*
 * XREFs of ?EnsureDesktopTarget@CDesktopManager@@SAJXZ @ 0x18004B1A0
 * Callers:
 *     ?StartupBegin@CWindowList@@AEAAJXZ @ 0x18003E720 (-StartupBegin@CWindowList@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CDesktopManager::EnsureDesktopTarget(CDesktopManager *a1)
{
  return CDesktopManager::EnsureDesktopRenderTarget(a1);
}
