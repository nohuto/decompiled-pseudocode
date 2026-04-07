/*
 * XREFs of ?Start@CScreenRotation@@QEAAJXZ @ 0x180091358
 * Callers:
 *     ?HandleHardwareExpressionActivation@CWindowList@@AEAAJK@Z @ 0x18007BB58 (-HandleHardwareExpressionActivation@CWindowList@@AEAAJK@Z.c)
 *     ?RotationModeChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYROTATIONMODECHANGE@@@Z @ 0x18007C69C (-RotationModeChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYROTATIONMODECHANGE@@@Z.c)
 * Callees:
 *     ?AbortAllAnimations@CAnimationScheduler@@QEAAXXZ @ 0x18000D8F4 (-AbortAllAnimations@CAnimationScheduler@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CleanupTimeline@CScreenRotation@@AEAAXXZ @ 0x1800907C4 (-CleanupTimeline@CScreenRotation@@AEAAXXZ.c)
 *     ?SetupTimeline@CScreenRotation@@AEAAJW4RotationTimelineReason@1@@Z @ 0x1800910CC (-SetupTimeline@CScreenRotation@@AEAAJW4RotationTimelineReason@1@@Z.c)
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
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x179u);
    CScreenRotation::CleanupTimeline(this);
  }
  return v3;
}
