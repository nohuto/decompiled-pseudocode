/*
 * XREFs of ?_ScheduleStoryboard@CAnimationScheduler@@AEAAJPEAVCStoryboard@@@Z @ 0x1800037EC
 * Callers:
 *     ?_ScheduleBlockedStoryboards@CAnimationScheduler@@AEAAXH@Z @ 0x18000374C (-_ScheduleBlockedStoryboards@CAnimationScheduler@@AEAAXH@Z.c)
 *     ?_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x180003B9C (-_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z.c)
 * Callees:
 *     ?_LogStoryboardEvent@CStoryboard@@IEAAXXZ @ 0x180004590 (-_LogStoryboardEvent@CStoryboard@@IEAAXXZ.c)
 *     ?MorphForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@@Z @ 0x1800055B0 (-MorphForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@@Z.c)
 *     ?RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z @ 0x1800070A0 (-RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Abandon@CStoryboard@@QEAAXXZ @ 0x180092BB8 (-Abandon@CStoryboard@@QEAAXXZ.c)
 */

__int64 __fastcall CAnimationScheduler::_ScheduleStoryboard(CAnimationScheduler *this, struct CStoryboard *a2)
{
  int v3; // eax
  int v4; // edi
  int v5; // eax

  v3 = CTransitionVisualController::MorphForStoryboard(
         *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 29),
         a2);
  v4 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800AF320, 1u, v3, 0x3A1u);
  }
  else
  {
    v5 = CTransitionVisualController::RemoveTargetsForStoryboard(
           *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 29),
           a2,
           0,
           0x10000000u);
    v4 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800AF320, 1u, v5, 0x3A4u);
    }
    else if ( *((_DWORD *)a2 + 6) <= 1u )
    {
      *((_DWORD *)a2 + 6) = 2;
      CStoryboard::_LogStoryboardEvent(a2);
    }
  }
  if ( v4 < 0 )
    CStoryboard::Abandon(a2);
  return (unsigned int)v4;
}
