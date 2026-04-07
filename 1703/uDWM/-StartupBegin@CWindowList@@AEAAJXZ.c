/*
 * XREFs of ?StartupBegin@CWindowList@@AEAAJXZ @ 0x1800427A8
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x180031E80 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180012FF0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?CheckAnyPreference@CDesktopManager@@SA_NK@Z @ 0x180013454 (-CheckAnyPreference@CDesktopManager@@SA_NK@Z.c)
 *     ?SetPreferences@CDesktopManager@@SAXK@Z @ 0x1800420B8 (-SetPreferences@CDesktopManager@@SAXK@Z.c)
 */

__int64 __fastcall CWindowList::StartupBegin(CWindowList *this)
{
  struct _RTL_CRITICAL_SECTION *v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  *((_BYTE *)this + 384) = (unsigned __int8)CDesktopManager::CheckAnyPreference(0x10u) == 0;
  CDesktopManager::SetPreferences();
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v3);
  return 0LL;
}
