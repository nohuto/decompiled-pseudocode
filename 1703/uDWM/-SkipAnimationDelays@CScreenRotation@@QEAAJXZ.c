/*
 * XREFs of ?SkipAnimationDelays@CScreenRotation@@QEAAJXZ @ 0x180094D78
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x180031E80 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?AbortAllAnimations@CAnimationScheduler@@QEAAXXZ @ 0x180010544 (-AbortAllAnimations@CAnimationScheduler@@QEAAXXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180012FF0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     TemplateEventDescriptor @ 0x1800777AC (TemplateEventDescriptor.c)
 *     ?CleanupTimeline@CScreenRotation@@AEAAXXZ @ 0x1800942CC (-CleanupTimeline@CScreenRotation@@AEAAXXZ.c)
 *     ?MidDelayExpired@CScreenRotation@@AEAAJXZ @ 0x1800945A0 (-MidDelayExpired@CScreenRotation@@AEAAJXZ.c)
 */

__int64 __fastcall CScreenRotation::SkipAnimationDelays(CScreenRotation *this)
{
  unsigned int v2; // edi
  __int64 v3; // rcx
  int v4; // esi
  void *v5; // rdx
  int v6; // eax
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  v8 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = *((_DWORD *)this + 76);
  *((_BYTE *)this + 329) = 1;
  if ( *((_BYTE *)this + 380) )
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    {
      v5 = &UdwmHardwareExpression_HintFired;
LABEL_6:
      TemplateEventDescriptor(v3, (__int64)v5);
    }
  }
  else if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
  {
    v5 = &UdwmScreenRotation_HintFired;
    goto LABEL_6;
  }
  if ( *((_DWORD *)this + 76) == 2 && v4 == 2 )
  {
    CScreenRotation::CleanupTimeline(this);
    CAnimationScheduler::AbortAllAnimations(*((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 22));
    v6 = CScreenRotation::MidDelayExpired(this);
    v2 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v6, 0x22Eu);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v8);
  return v2;
}
