/*
 * XREFs of ?Start@CScreenRotation@@QEAAJXZ @ 0x180099AF0
 * Callers:
 *     ?HandleHardwareExpressionActivation@CWindowList@@AEAAJK@Z @ 0x180085114 (-HandleHardwareExpressionActivation@CWindowList@@AEAAJK@Z.c)
 *     ?RotationModeChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYROTATIONMODECHANGE@@@Z @ 0x180085DFC (-RotationModeChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYROTATIONMODECHANGE@@@Z.c)
 * Callees:
 *     ?AbortAllAnimations@CAnimationScheduler@@QEAAXXZ @ 0x18000C028 (-AbortAllAnimations@CAnimationScheduler@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CleanupTimeline@CScreenRotation@@AEAAXXZ @ 0x180098F74 (-CleanupTimeline@CScreenRotation@@AEAAXXZ.c)
 *     ?SetupTimeline@CScreenRotation@@AEAAJW4RotationTimelineReason@1@@Z @ 0x180099868 (-SetupTimeline@CScreenRotation@@AEAAJW4RotationTimelineReason@1@@Z.c)
 */

__int64 __fastcall CScreenRotation::Start(CScreenRotation *this)
{
  int v2; // eax
  unsigned int v3; // ebx

  *((_BYTE *)this + 328) = 1;
  CAnimationScheduler::AbortAllAnimations(*((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 28));
  v2 = CScreenRotation::SetupTimeline((__int64)this, 1);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x12Bu);
    CScreenRotation::CleanupTimeline(this);
  }
  return v3;
}
