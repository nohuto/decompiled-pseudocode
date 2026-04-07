/*
 * XREFs of ?Abandon@CStoryboard@@QEAAXXZ @ 0x18000553C
 * Callers:
 *     ?_ScheduleBlockedStoryboards@CAnimationScheduler@@AEAAXH@Z @ 0x1800044A0 (-_ScheduleBlockedStoryboards@CAnimationScheduler@@AEAAXH@Z.c)
 *     ?_ScheduleStoryboard@CAnimationScheduler@@AEAAJPEAVCStoryboard@@@Z @ 0x180004540 (-_ScheduleStoryboard@CAnimationScheduler@@AEAAJPEAVCStoryboard@@@Z.c)
 *     ?_ShouldContinueStoryboardSetup@CAnimationScheduler@@AEAA_NPEAVCStoryboard@@@Z @ 0x1800045C0 (-_ShouldContinueStoryboardSetup@CAnimationScheduler@@AEAA_NPEAVCStoryboard@@@Z.c)
 *     ?OnAnimationClockChanged@CAnimationScheduler@@UEAAXU_GUID@@W4AnimationClockState@@@Z @ 0x1800046F0 (-OnAnimationClockChanged@CAnimationScheduler@@UEAAXU_GUID@@W4AnimationClockState@@@Z.c)
 *     ?_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x180004A0C (-_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z.c)
 *     ?AbandonTransition@CAnimationScheduler@@QEAAJH@Z @ 0x180004BE8 (-AbandonTransition@CAnimationScheduler@@QEAAJH@Z.c)
 *     ?OnEndTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEAVCStoryboard@@@Z @ 0x180004C38 (-OnEndTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEAVCStoryboard@@@Z.c)
 *     ?OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@PEAU2@@Z @ 0x180004D68 (-OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@P.c)
 *     ?ScheduleStartAnimation@CStoryboard@@QEAAJXZ @ 0x180005354 (-ScheduleStartAnimation@CStoryboard@@QEAAJXZ.c)
 *     ?_EnumerateWindows@CStoryboard@@IEAAJW4EnumWindowFlags@1@@Z @ 0x180005AD0 (-_EnumerateWindows@CStoryboard@@IEAAJW4EnumWindowFlags@1@@Z.c)
 *     ?AbortAllAnimations@CAnimationScheduler@@QEAAXXZ @ 0x180010544 (-AbortAllAnimations@CAnimationScheduler@@QEAAXXZ.c)
 *     _lambda_9b37f3d03e1ad1f523dfdba086665a20_::operator() @ 0x180091D60 (_lambda_9b37f3d03e1ad1f523dfdba086665a20_--operator().c)
 *     ?OnAnimationStart@CAppArrangementDelayed@@EEAAJXZ @ 0x180096C90 (-OnAnimationStart@CAppArrangementDelayed@@EEAAJXZ.c)
 *     ?OnStoryboardTimeout@CStoryboard@@QEAAJXZ @ 0x1800973B0 (-OnStoryboardTimeout@CStoryboard@@QEAAJXZ.c)
 * Callees:
 *     ?OnSetAnimationClockTime@CAnimationClockCoordinator@@QEAAJU_GUID@@W4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z @ 0x180004124 (-OnSetAnimationClockTime@CAnimationClockCoordinator@@QEAAJU_GUID@@W4DWMPANIMATION_CLOCK_TIME@@PE.c)
 *     ?_NotifyStoryboardState@CStoryboard@@IEAAXW4DWMTRANSITION_STORYBOARD_STATE@@@Z @ 0x1800055EC (-_NotifyStoryboardState@CStoryboard@@IEAAXW4DWMTRANSITION_STORYBOARD_STATE@@@Z.c)
 *     ?ScheduleStopAnimation@CStoryboard@@QEAAJXZ @ 0x18000574C (-ScheduleStopAnimation@CStoryboard@@QEAAJXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180012FF0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 */

void __fastcall CStoryboard::Abandon(struct _GUID *this)
{
  struct _GUID v2; // xmm0
  __int64 v3; // rax
  struct _RTL_CRITICAL_SECTION *v4; // [rsp+20h] [rbp-38h] BYREF
  struct _GUID v5; // [rsp+30h] [rbp-28h] BYREF

  v4 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  if ( *(_DWORD *)this[1].Data4 != 4 )
  {
    CStoryboard::_NotifyStoryboardState(this, 2LL);
    CStoryboard::ScheduleStopAnimation((CStoryboard *)this);
    v2 = this[3];
    v3 = *(_QWORD *)&this[3].Data1 - *(_QWORD *)&GUID_NULL.Data1;
    v5 = v2;
    if ( !v3 )
      v3 = *(_QWORD *)v5.Data4 - *(_QWORD *)GUID_NULL.Data4;
    if ( v3 )
    {
      v5 = v2;
      CAnimationClockCoordinator::OnSetAnimationClockTime(
        *((CAnimationClockCoordinator **)CDesktopManager::s_pDesktopManagerInstance + 19),
        &v5,
        1,
        0LL);
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v4);
}
