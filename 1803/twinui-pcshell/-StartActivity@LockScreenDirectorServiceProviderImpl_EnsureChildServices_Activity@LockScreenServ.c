/*
 * XREFs of ?StartActivity@LockScreenDirectorServiceProviderImpl_EnsureChildServices_Activity@LockScreenServiceTelemetry@@QEAAXXZ @ 0x18018EF8C
 * Callers:
 *     ?EnsureChildServices@LockScreenDirectorServiceProviderImpl@@AEAAJPEAPEAUILockScreenDirector@@@Z @ 0x18018E318 (-EnsureChildServices@LockScreenDirectorServiceProviderImpl@@AEAAJPEAPEAUILockScreenDirector@@@Z.c)
 * Callees:
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180018200 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgWrite @ 0x18005AB68 (_TlgWrite.c)
 *     ?zInternalRelatedId@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180097C0C (-zInternalRelatedId@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VLockScreenServiceLogging@@@details@wil@@QEAAPEAVLockScreenServiceLogging@@P6AXXZ@Z @ 0x1801900E0 (-get@-$static_lazy@VLockScreenServiceLogging@@@details@wil@@QEAAPEAVLockScreenServiceLogging@@P6.c)
 *     ?zInternalStart@?$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1801904C4 (-zInternalStart@-$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsPr.c)
 */

void __fastcall LockScreenServiceTelemetry::LockScreenDirectorServiceProviderImpl_EnsureChildServices_Activity::StartActivity(
        LockScreenServiceTelemetry::LockScreenDirectorServiceProviderImpl_EnsureChildServices_Activity *this)
{
  __int64 v2; // rcx
  const struct _TlgProvider_t *v3; // rdi
  const GUID *v4; // rax
  DWORD CurrentThreadId; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  DWORD *p_CurrentThreadId; // [rsp+58h] [rbp-20h]
  int v8; // [rsp+60h] [rbp-18h]
  int v9; // [rsp+64h] [rbp-14h]

  wil::ActivityBase<LockScreenServiceLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::zInternalStart();
  v3 = *(const struct _TlgProvider_t **)(wil::details::static_lazy<LockScreenServiceLogging>::get(
                                           v2,
                                           lambda_63f7170bce12b7e543c3c21ebfae390d_::_lambda_invoker_cdecl_)
                                       + 8);
  if ( *(_DWORD *)v3 > 5u )
  {
    v9 = 0;
    CurrentThreadId = GetCurrentThreadId();
    p_CurrentThreadId = &CurrentThreadId;
    v8 = 4;
    v4 = (const GUID *)wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
    TlgWrite(v3, &unk_180391BD4, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), v4, 3u, &pData);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((LockScreenServiceTelemetry::LockScreenDirectorServiceProviderImpl_EnsureChildServices_Activity *)((char *)this + 8));
}
