/*
 * XREFs of ?StartupBegin@CWindowList@@AEAAJXZ @ 0x18003D290
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x18002ADB0 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18002C388 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?CheckAnyPreference@CDesktopManager@@SA_NK@Z @ 0x18003583C (-CheckAnyPreference@CDesktopManager@@SA_NK@Z.c)
 *     ?SetPreferences@CDesktopManager@@SAXK@Z @ 0x18003DD98 (-SetPreferences@CDesktopManager@@SAXK@Z.c)
 */

__int64 __fastcall CWindowList::StartupBegin(CWindowList *this)
{
  unsigned int v2; // ecx
  struct _RTL_CRITICAL_SECTION *v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  *((_BYTE *)this + 384) = (unsigned __int8)CDesktopManager::CheckAnyPreference(0x10u) == 0;
  CDesktopManager::SetPreferences(v2);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v4);
  return 0LL;
}
