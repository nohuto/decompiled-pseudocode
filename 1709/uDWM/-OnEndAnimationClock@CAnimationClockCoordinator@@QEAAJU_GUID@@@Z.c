/*
 * XREFs of ?OnEndAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@@Z @ 0x1800033EC
 * Callers:
 *     ?OnEndTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEAVCStoryboard@@@Z @ 0x180003D78 (-OnEndTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEAVCStoryboard@@@Z.c)
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18002B020 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?End@CAnimationClock@@QEAAJXZ @ 0x180002AF8 (-End@CAnimationClock@@QEAAJXZ.c)
 *     ?GetAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@PEAPEAVCAnimationClock@@@Z @ 0x18000315C (-GetAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@PEAPEAVCAnimationClock@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 */

__int64 __fastcall CAnimationClockCoordinator::OnEndAnimationClock(CAnimationClockCoordinator *this, struct _GUID *a2)
{
  struct _GUID v2; // xmm0
  int AnimationClock; // edi
  struct _GUID v5; // [rsp+20h] [rbp-18h] BYREF
  CAnimationClock *v6; // [rsp+48h] [rbp+10h] BYREF

  v2 = *a2;
  v6 = 0LL;
  v5 = v2;
  AnimationClock = CAnimationClockCoordinator::GetAnimationClock(this, &v5, &v6);
  if ( AnimationClock >= 0 )
  {
    AnimationClock = CAnimationClock::End(v6);
    if ( v6 )
      CBaseObject::Release(v6);
  }
  return (unsigned int)AnimationClock;
}
