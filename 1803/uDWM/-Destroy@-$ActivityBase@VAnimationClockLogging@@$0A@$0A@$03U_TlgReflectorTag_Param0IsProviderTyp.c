/*
 * XREFs of ?Destroy@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18000AD4C
 * Callers:
 *     ?End@CAnimationClock@@QEAAJXZ @ 0x18000C360 (-End@CAnimationClock@@QEAAJXZ.c)
 *     ?Begin@CAnimationClock@@QEAAJK@Z @ 0x18000C480 (-Begin@CAnimationClock@@QEAAJK@Z.c)
 *     ?_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z @ 0x18000C69C (-_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z.c)
 *     ?Create@CAnimationClockFactory@@SAJU_GUID@@PEAPEAVCAnimationClock@@@Z @ 0x180038544 (-Create@CAnimationClockFactory@@SAJU_GUID@@PEAPEAVCAnimationClock@@@Z.c)
 *     ??1TriggerClock@AnimationClockLoggingTelemetry@@QEAA@XZ @ 0x180038BC4 (--1TriggerClock@AnimationClockLoggingTelemetry@@QEAA@XZ.c)
 *     ??1GetCommitHandle@AnimationClockLoggingTelemetry@@QEAA@XZ @ 0x1800A7874 (--1GetCommitHandle@AnimationClockLoggingTelemetry@@QEAA@XZ.c)
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18000ACDC (-LockExclusive@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProvi.c)
 *     ?SetStopResult@?$ActivityData@VWindowFrameLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA_NJPEAJ@Z @ 0x18000AFBC (-SetStopResult@-$ActivityData@VWindowFrameLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$Ac.c)
 *     ?StopActivity@AnimationClockStateChange@AnimationClockLoggingTelemetry@@MEAAXXZ @ 0x18000CD00 (-StopActivity@AnimationClockStateChange@AnimationClockLoggingTelemetry@@MEAAXXZ.c)
 *     ?reset@?$shared_object@V?$ActivityData@VAnimationClockLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180039240 (-reset@-$shared_object@V-$ActivityData@VAnimationClockLogging@@U_TlgReflectorTag_Param0IsProvide.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::ActivityBase<AnimationClockLogging,0,0,4,_TlgReflectorTag_Param0IsProviderType>::Destroy(
        AnimationClockLoggingTelemetry::AnimationClockStateChange *this)
{
  _QWORD *v1; // rdi
  _DWORD *v3; // rcx
  char v4; // si
  __int64 v5; // rdx
  void (__fastcall *v6)(AnimationClockLoggingTelemetry::AnimationClockStateChange *__hidden); // rax
  PSRWLOCK SRWLock[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = (_QWORD *)((char *)this + 304);
  if ( !*((_QWORD *)this + 38) )
    goto LABEL_2;
  wil::ActivityBase<AnimationClockLogging,0,0,4,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    SRWLock);
  if ( *v1 && *(_DWORD *)*v1 == 1 )
  {
    v4 = 1;
  }
  else
  {
    v4 = 0;
    wil::details::shared_object<wil::ActivityBase<AnimationClockLogging,0,0,4,_TlgReflectorTag_Param0IsProviderType>::ActivityData<AnimationClockLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(v1);
  }
  if ( SRWLock[0] )
    ReleaseSRWLockExclusive(SRWLock[0]);
  if ( v4 )
  {
LABEL_2:
    v3 = (_DWORD *)*((_QWORD *)this + 6);
    if ( *v3 == 1 )
    {
      v5 = 2147942974LL;
      if ( (int)v3[21] < 0 )
        v5 = (unsigned int)v3[21];
      wil::ActivityBase<WindowFrameLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowFrameLogging,_TlgReflectorTag_Param0IsProviderType>::SetStopResult(
        v3,
        v5,
        SRWLock);
      v6 = *(void (__fastcall **)(AnimationClockLoggingTelemetry::AnimationClockStateChange *__hidden))(*(_QWORD *)this + 8LL);
      if ( v6 == AnimationClockLoggingTelemetry::AnimationClockStateChange::StopActivity )
        AnimationClockLoggingTelemetry::AnimationClockStateChange::StopActivity(this);
      else
        v6(this);
    }
  }
}
