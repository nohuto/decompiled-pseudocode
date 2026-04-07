/*
 * XREFs of ?SetPreferences@CDesktopManager@@SAXK@Z @ 0x18003DD98
 * Callers:
 *     ?StartupBegin@CWindowList@@AEAAJXZ @ 0x18003D290 (-StartupBegin@CWindowList@@AEAAJXZ.c)
 *     ?NotifyRedirectionShutdown@CDesktopManager@@QEAAJXZ @ 0x18006E7F8 (-NotifyRedirectionShutdown@CDesktopManager@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CDesktopManager::SetPreferences()
{
  (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 7) + 72LL))(
    *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 7),
    16LL);
}
