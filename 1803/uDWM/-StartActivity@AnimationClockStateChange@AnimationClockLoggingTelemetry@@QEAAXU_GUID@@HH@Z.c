/*
 * XREFs of ?StartActivity@AnimationClockStateChange@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@HH@Z @ 0x18000CE14
 * Callers:
 *     ?_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z @ 0x18000C69C (-_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180004FC8 (_TlgWrite.c)
 *     ?zInternalStart@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18000AF54 (-zInternalStart@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProv.c)
 *     ?get@?$static_lazy@VAnimationClockLogging@@@details@wil@@QEAAPEAVAnimationClockLogging@@P6AXXZ@Z @ 0x18000B030 (-get@-$static_lazy@VAnimationClockLogging@@@details@wil@@QEAAPEAVAnimationClockLogging@@P6AXXZ@Z.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18000B0D4 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?zInternalRelatedId@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180048EB8 (-zInternalRelatedId@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03U_TlgReflectorTag_Param0Is.c)
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 */

void __fastcall AnimationClockLoggingTelemetry::AnimationClockStateChange::StartActivity(
        AnimationClockLoggingTelemetry::AnimationClockStateChange *this,
        struct _GUID *a2,
        int a3,
        int a4)
{
  __int64 v6; // rcx
  __int64 v7; // rdx
  const struct _TlgProvider_t *v8; // rdi
  DWORD CurrentThreadId; // eax
  const GUID *v10; // rax
  DWORD v11; // [rsp+38h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-29h] BYREF
  DWORD *v13; // [rsp+68h] [rbp-9h]
  int v14; // [rsp+70h] [rbp-1h]
  int v15; // [rsp+74h] [rbp+3h]
  struct _GUID *v16; // [rsp+78h] [rbp+7h]
  int v17; // [rsp+80h] [rbp+Fh]
  int v18; // [rsp+84h] [rbp+13h]
  int *v19; // [rsp+88h] [rbp+17h]
  int v20; // [rsp+90h] [rbp+1Fh]
  int v21; // [rsp+94h] [rbp+23h]
  int *v22; // [rsp+98h] [rbp+27h]
  int v23; // [rsp+A0h] [rbp+2Fh]
  int v24; // [rsp+A4h] [rbp+33h]
  int v25; // [rsp+E8h] [rbp+77h] BYREF
  int v26; // [rsp+F0h] [rbp+7Fh] BYREF

  v26 = a4;
  v25 = a3;
  wil::ActivityBase<AnimationClockLogging,0,0,4,_TlgReflectorTag_Param0IsProviderType>::zInternalStart((__int64)this);
  v8 = (const struct _TlgProvider_t *)wil::details::static_lazy<AnimationClockLogging>::get(
                                        v6,
                                        (void (__cdecl *)())lambda_9ef98c5d6b8c5c3c74462e1eb0f6f12e_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v8 > 4u )
  {
    CurrentThreadId = GetCurrentThreadId();
    v15 = 0;
    v18 = 0;
    v21 = 0;
    v24 = 0;
    v11 = CurrentThreadId;
    v13 = &v11;
    v19 = &v25;
    v22 = &v26;
    v14 = 4;
    v16 = a2;
    v17 = 16;
    v20 = 4;
    v23 = 4;
    v10 = (const GUID *)wil::ActivityBase<AnimationClockLogging,0,0,4,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(this);
    TlgWrite(v8, &unk_1800B84FE, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), v10, 6u, &pData);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching(
      (AnimationClockLoggingTelemetry::AnimationClockStateChange *)((char *)this + 8),
      v7);
}
