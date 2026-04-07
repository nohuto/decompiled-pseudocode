/*
 * XREFs of ?EnableDesktopTarget@CDesktopManager@@SAJ_N@Z @ 0x18004A470
 * Callers:
 *     ?StartupEnd@CWindowList@@AEAAJXZ @ 0x18003E6C0 (-StartupEnd@CWindowList@@AEAAJXZ.c)
 *     ?NotifyRedirectionShutdown@CDesktopManager@@QEAAJXZ @ 0x1800753CC (-NotifyRedirectionShutdown@CDesktopManager@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDesktopManager::EnableDesktopTarget(CDesktopManager *a1)
{
  return CDesktopManager::EnableDesktopRenderTarget(a1, (char)a1);
}
