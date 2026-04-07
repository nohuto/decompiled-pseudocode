/*
 * XREFs of ?OnGetSynchronizationCommitHandle@CAnimationClockCoordinator@@QEAAJAEBU_GUID@@KPEAPEAX@Z @ 0x1800A84A0
 * Callers:
 *     ?UpdateScene@CWindowList@@UEAAJXZ @ 0x1800273D0 (-UpdateScene@CWindowList@@UEAAJXZ.c)
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18002AC30 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?GetAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@PEAPEAVCAnimationClock@@@Z @ 0x18000CFD0 (-GetAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@PEAPEAVCAnimationClock@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ @ 0x180010A78 (-InternalRelease@-$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049FC4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCommitHandle@CAnimationClock@@QEAAJKPEAPEAX@Z @ 0x1800A789C (-GetCommitHandle@CAnimationClock@@QEAAJKPEAPEAX@Z.c)
 */

__int64 __fastcall CAnimationClockCoordinator::OnGetSynchronizationCommitHandle(
        CAnimationClockCoordinator *this,
        const struct _GUID *a2,
        unsigned int a3,
        void **a4)
{
  struct _GUID v4; // xmm0
  int AnimationClock; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  struct _GUID v12; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct CAnimationClock *v14; // [rsp+48h] [rbp+10h] BYREF

  v4 = *a2;
  v14 = 0LL;
  v12 = v4;
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v14);
  AnimationClock = CAnimationClockCoordinator::GetAnimationClock(this, &v12, &v14);
  v9 = AnimationClock;
  if ( AnimationClock >= 0 )
  {
    AnimationClock = CAnimationClock::GetCommitHandle(v14, a3, a4);
    v9 = AnimationClock;
    if ( AnimationClock >= 0 )
    {
      v9 = 0;
      goto LABEL_7;
    }
    v10 = 213LL;
  }
  else
  {
    v10 = 211LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"windows\\dwm\\udwm\\animationclockcoordinator.cpp",
    (const char *)(unsigned int)AnimationClock);
LABEL_7:
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v14);
  return v9;
}
