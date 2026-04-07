/*
 * XREFs of ?ModeChange@CWindowList@@AEAAJXZ @ 0x180084480
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x180031E80 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180012FF0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?ModeChangeImpl@CDesktopManager@@AEAAJXZ @ 0x1800231E4 (-ModeChangeImpl@CDesktopManager@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CWindowList::ModeChange(CWindowList *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  struct _RTL_CRITICAL_SECTION *v4; // [rsp+40h] [rbp+8h] BYREF

  v4 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v1 = CDesktopManager::ModeChangeImpl(CDesktopManager::s_pDesktopManagerInstance);
  v2 = v1;
  if ( v1 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v1, 0x1422u);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v4);
  return v2;
}
