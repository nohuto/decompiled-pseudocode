/*
 * XREFs of ?StartupEnd@CWindowList@@AEAAJXZ @ 0x18003E6C0
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x18002A9C0 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18000F590 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?ClearPreferences@CDesktopManager@@SAXK@Z @ 0x180041900 (-ClearPreferences@CDesktopManager@@SAXK@Z.c)
 *     ?EnableDesktopTarget@CDesktopManager@@SAJ_N@Z @ 0x18004A470 (-EnableDesktopTarget@CDesktopManager@@SAJ_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CWindowList::StartupEnd(CWindowList *this)
{
  unsigned int v2; // ecx
  int v3; // eax
  unsigned int v4; // ebx
  struct _RTL_CRITICAL_SECTION *v6; // [rsp+40h] [rbp+8h] BYREF

  v6 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  if ( *((_BYTE *)this + 384) )
    CDesktopManager::ClearPreferences(v2);
  v3 = CDesktopManager::EnableDesktopTarget(1);
  v4 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x1558u);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v6);
  return v4;
}
