/*
 * XREFs of ?OnWindowArrangementContinue@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z @ 0x180085418
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x18002A9C0 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18000F590 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?EnsureWindowArrangementTransition@CWindowList@@AEAAJXZ @ 0x180084480 (-EnsureWindowArrangementTransition@CWindowList@@AEAAJXZ.c)
 *     ?OnWindowArrangementContinue@CWindowArrangementTransition@@QEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z @ 0x180088564 (-OnWindowArrangementContinue@CWindowArrangementTransition@@QEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENT.c)
 */

__int64 __fastcall CWindowList::OnWindowArrangementContinue(
        CWindowArrangementTransition **this,
        const struct MILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+50h] [rbp+18h] BYREF

  v8 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = CWindowList::EnsureWindowArrangementTransition((CWindowList *)this);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v6 = CWindowArrangementTransition::OnWindowArrangementContinue(this[65], a2);
    v5 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x181Fu);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x181Eu);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v8);
  return v5;
}
