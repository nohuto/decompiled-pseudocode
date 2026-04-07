/*
 * XREFs of ?ClearPreferences@CDesktopManager@@SAXK@Z @ 0x180041724
 * Callers:
 *     ?StartupEnd@CWindowList@@AEAAJXZ @ 0x1800426D4 (-StartupEnd@CWindowList@@AEAAJXZ.c)
 *     ?NotifyRedirectionShutdown@CDesktopManager@@QEAAJXZ @ 0x180078A98 (-NotifyRedirectionShutdown@CDesktopManager@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CDesktopManager::ClearPreferences()
{
  (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 7) + 80LL))(
    *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 7),
    16LL);
}
