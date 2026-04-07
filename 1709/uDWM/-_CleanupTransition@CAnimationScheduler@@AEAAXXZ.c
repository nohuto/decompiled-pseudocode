/*
 * XREFs of ?_CleanupTransition@CAnimationScheduler@@AEAAXXZ @ 0x18000D8BC
 * Callers:
 *     ?_ScheduleStartAnimations@CAnimationScheduler@@AEAAJXZ @ 0x18000367C (-_ScheduleStartAnimations@CAnimationScheduler@@AEAAJXZ.c)
 *     ?OnAnimationComplete@CAnimationScheduler@@UEAAJI@Z @ 0x180003D00 (-OnAnimationComplete@CAnimationScheduler@@UEAAJI@Z.c)
 *     ?AbortAllAnimations@CAnimationScheduler@@QEAAXXZ @ 0x18000D8F4 (-AbortAllAnimations@CAnimationScheduler@@QEAAXXZ.c)
 * Callees:
 *     ?CleanupTransition@CTransitionVisualController@@QEAAJXZ @ 0x18000C994 (-CleanupTransition@CTransitionVisualController@@QEAAJXZ.c)
 *     ?StopTrackingAllWindows@CWindowPropertyTracker@@QEAAXXZ @ 0x18000CB18 (-StopTrackingAllWindows@CWindowPropertyTracker@@QEAAXXZ.c)
 *     ?_RecycleAbandonedStoryboards@CAnimationScheduler@@AEAAXXZ @ 0x18000D84C (-_RecycleAbandonedStoryboards@CAnimationScheduler@@AEAAXXZ.c)
 */

void __fastcall CAnimationScheduler::_CleanupTransition(CAnimationScheduler *this, __int64 a2)
{
  CAnimationScheduler::_RecycleAbandonedStoryboards(this, a2);
  if ( !*((_DWORD *)this + 10) )
  {
    CTransitionVisualController::CleanupTransition(*((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance
                                                   + 29));
    CWindowPropertyTracker::StopTrackingAllWindows((CAnimationScheduler *)((char *)this + 48));
  }
}
