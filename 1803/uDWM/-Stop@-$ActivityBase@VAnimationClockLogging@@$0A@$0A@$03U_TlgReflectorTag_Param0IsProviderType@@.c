/*
 * XREFs of ?Stop@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18000AE00
 * Callers:
 *     ?End@CAnimationClock@@QEAAJXZ @ 0x18000C360 (-End@CAnimationClock@@QEAAJXZ.c)
 *     ?Begin@CAnimationClock@@QEAAJK@Z @ 0x18000C480 (-Begin@CAnimationClock@@QEAAJK@Z.c)
 *     ?_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z @ 0x18000C69C (-_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z.c)
 *     ?_TriggerAnimation@CAnimationClock@@AEAAJXZ @ 0x18000C8B0 (-_TriggerAnimation@CAnimationClock@@AEAAJXZ.c)
 *     ?Create@CAnimationClockFactory@@SAJU_GUID@@PEAPEAVCAnimationClock@@@Z @ 0x180038544 (-Create@CAnimationClockFactory@@SAJU_GUID@@PEAPEAVCAnimationClock@@@Z.c)
 *     ?GetCommitHandle@CAnimationClock@@QEAAJKPEAPEAX@Z @ 0x1800A789C (-GetCommitHandle@CAnimationClock@@QEAAJKPEAPEAX@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180004FC8 (_TlgWrite.c)
 *     ?LockExclusive@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18000ACDC (-LockExclusive@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProvi.c)
 *     ?SetStopResult@?$ActivityData@VWindowFrameLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA_NJPEAJ@Z @ 0x18000AFBC (-SetStopResult@-$ActivityData@VWindowFrameLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$Ac.c)
 *     ?get@?$static_lazy@VAnimationClockLogging@@@details@wil@@QEAAPEAVAnimationClockLogging@@P6AXXZ@Z @ 0x18000B030 (-get@-$static_lazy@VAnimationClockLogging@@@details@wil@@QEAAPEAVAnimationClockLogging@@P6AXXZ@Z.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18000B120 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?StopActivity@AnimationClockStateChange@AnimationClockLoggingTelemetry@@MEAAXXZ @ 0x18000CD00 (-StopActivity@AnimationClockStateChange@AnimationClockLoggingTelemetry@@MEAAXXZ.c)
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::ActivityBase<AnimationClockLogging,0,0,4,_TlgReflectorTag_Param0IsProviderType>::Stop(
        AnimationClockLoggingTelemetry::AnimationClockStateChange *this,
        unsigned int a2)
{
  char v4; // al
  PSRWLOCK v5; // rcx
  char v6; // di
  void (__fastcall *v7)(AnimationClockLoggingTelemetry::AnimationClockStateChange *__hidden); // rax
  const struct _TlgProvider_t *v8; // rdi
  DWORD CurrentThreadId; // eax
  DWORD v10; // [rsp+38h] [rbp-9h] BYREF
  PSRWLOCK SRWLock; // [rsp+40h] [rbp-1h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp+7h] BYREF
  PSRWLOCK *p_SRWLock; // [rsp+68h] [rbp+27h]
  int v14; // [rsp+70h] [rbp+2Fh]
  int v15; // [rsp+74h] [rbp+33h]
  DWORD *v16; // [rsp+78h] [rbp+37h]
  int v17; // [rsp+80h] [rbp+3Fh]
  int v18; // [rsp+84h] [rbp+43h]

  wil::ActivityBase<AnimationClockLogging,0,0,4,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    &SRWLock);
  v4 = wil::ActivityBase<WindowFrameLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowFrameLogging,_TlgReflectorTag_Param0IsProviderType>::SetStopResult(
         *((_QWORD *)this + 6),
         a2,
         &v10);
  v5 = SRWLock;
  v6 = v4;
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  if ( v6 )
  {
    v7 = *(void (__fastcall **)(AnimationClockLoggingTelemetry::AnimationClockStateChange *__hidden))(*(_QWORD *)this + 8LL);
    if ( v7 == AnimationClockLoggingTelemetry::AnimationClockStateChange::StopActivity )
      AnimationClockLoggingTelemetry::AnimationClockStateChange::StopActivity(this);
    else
      v7(this);
  }
  else
  {
    v8 = *(const struct _TlgProvider_t **)(wil::details::static_lazy<AnimationClockLogging>::get(
                                             v5,
                                             lambda_9ef98c5d6b8c5c3c74462e1eb0f6f12e_::_lambda_invoker_cdecl_)
                                         + 8);
    if ( *(_DWORD *)v8 > 5u )
    {
      v15 = 0;
      LODWORD(SRWLock) = a2;
      v14 = 4;
      p_SRWLock = &SRWLock;
      CurrentThreadId = GetCurrentThreadId();
      v18 = 0;
      v10 = CurrentThreadId;
      v16 = &v10;
      v17 = 4;
      TlgWrite(v8, &unk_1800B80B0, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 4u, &pData);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((AnimationClockLoggingTelemetry::AnimationClockStateChange *)((char *)this + 8));
}
