/*
 * XREFs of ?SkipAnimationDelays@CScreenRotation@@QEAAJXZ @ 0x180099A30
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x18002A9C0 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?AbortAllAnimations@CAnimationScheduler@@QEAAXXZ @ 0x18000C028 (-AbortAllAnimations@CAnimationScheduler@@QEAAXXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18000F590 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     McTemplateU0 @ 0x180073C8C (McTemplateU0.c)
 *     ?CleanupTimeline@CScreenRotation@@AEAAXXZ @ 0x180098F74 (-CleanupTimeline@CScreenRotation@@AEAAXXZ.c)
 *     ?MidDelayExpired@CScreenRotation@@AEAAJXZ @ 0x180099244 (-MidDelayExpired@CScreenRotation@@AEAAJXZ.c)
 */

__int64 __fastcall CScreenRotation::SkipAnimationDelays(CScreenRotation *this)
{
  unsigned int v2; // edi
  __int128 *v3; // rdx
  int v4; // eax
  struct _RTL_CRITICAL_SECTION *v6; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  v6 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  *((_BYTE *)this + 329) = 1;
  if ( *((_BYTE *)this + 380) )
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    {
      v3 = (__int128 *)&UdwmHardwareExpression_HintFired;
LABEL_6:
      McTemplateU0(Microsoft_Windows_Dwm_Udwm_Provider_Context, v3);
    }
  }
  else if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
  {
    v3 = (__int128 *)&UdwmScreenRotation_HintFired;
    goto LABEL_6;
  }
  if ( *((_DWORD *)this + 76) == 2 )
  {
    CScreenRotation::CleanupTimeline(this);
    CAnimationScheduler::AbortAllAnimations(*((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 28));
    v4 = CScreenRotation::MidDelayExpired(this);
    v2 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x1C1u);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v6);
  return v2;
}
