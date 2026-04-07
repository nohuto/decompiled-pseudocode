/*
 * XREFs of ?Release@CStoryboard@@QEAAKXZ @ 0x1800041EC
 * Callers:
 *     ?Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z @ 0x180001EB4 (-Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z.c)
 *     ?_ScheduleBlockedStoryboards@CAnimationScheduler@@AEAAXH@Z @ 0x18000374C (-_ScheduleBlockedStoryboards@CAnimationScheduler@@AEAAXH@Z.c)
 *     ?OnAnimationClockChanged@CAnimationScheduler@@UEAAXU_GUID@@W4AnimationClockState@@@Z @ 0x1800039A0 (-OnAnimationClockChanged@CAnimationScheduler@@UEAAXU_GUID@@W4AnimationClockState@@@Z.c)
 *     ?_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x180003B9C (-_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z.c)
 *     ?OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@PEAU2@@Z @ 0x180003E9C (-OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@P.c)
 *     ?SetParentStoryboard@CStoryboard@@QEAAXPEAV1@@Z @ 0x18000426C (-SetParentStoryboard@CStoryboard@@QEAAXPEAV1@@Z.c)
 *     ?Destroy@CStoryboard@@UEAAXXZ @ 0x180004640 (-Destroy@CStoryboard@@UEAAXXZ.c)
 *     ?OnEndTransitionRequest@CStoryboard@@UEAAJXZ @ 0x180004BC0 (-OnEndTransitionRequest@CStoryboard@@UEAAJXZ.c)
 *     ?_Cleanup@CStoryboard@@IEAAXXZ @ 0x180004BFC (-_Cleanup@CStoryboard@@IEAAXXZ.c)
 *     ??_GCAnimationScheduler@@QEAAPEAXI@Z @ 0x18006DBE0 (--_GCAnimationScheduler@@QEAAPEAXI@Z.c)
 *     ?Destroy@CAppArrangementDelayed@@EEAAXXZ @ 0x180092EA0 (-Destroy@CAppArrangementDelayed@@EEAAXXZ.c)
 *     ?Destroy@CSlideOut@@UEAAXXZ @ 0x180092EE0 (-Destroy@CSlideOut@@UEAAXXZ.c)
 *     ?Destroy@CVirtualDesktopSwitch@@EEAAXXZ @ 0x180092F20 (-Destroy@CVirtualDesktopSwitch@@EEAAXXZ.c)
 *     ?_SlideWindowHorizontally@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEBU3@PEAPEAVCAnimationComponent@@@Z @ 0x1800966C8 (-_SlideWindowHorizontally@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEBU3@PEAPEAVCAnimationCo.c)
 * Callees:
 *     ?_Cleanup@CStoryboard@@IEAAXXZ @ 0x180004BFC (-_Cleanup@CStoryboard@@IEAAXXZ.c)
 */

unsigned int __fastcall CStoryboard::Release(CStoryboard *this)
{
  if ( *((_DWORD *)this + 2) == 1 )
    CStoryboard::_Cleanup(this);
  return CBaseObject::Release(this);
}
