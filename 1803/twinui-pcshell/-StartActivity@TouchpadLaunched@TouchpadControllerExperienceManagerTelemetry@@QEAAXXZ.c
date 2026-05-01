/*
 * XREFs of ?StartActivity@TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@QEAAXXZ @ 0x18018309C
 * Callers:
 *     ?Show@CVirtualTouchpadExperienceManager@@UEAAJW4VirtualTouchpadPosition@Experience@Shell@Internal@Windows@@URect@Foundation@6@@Z @ 0x180182E20 (-Show@CVirtualTouchpadExperienceManager@@UEAAJW4VirtualTouchpadPosition@Experience@Shell@Interna.c)
 * Callees:
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180018200 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgKeywordOn @ 0x18005AB44 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x18005AB68 (_TlgWrite.c)
 *     TraceLoggingProviderEnabled @ 0x1800755FC (TraceLoggingProviderEnabled.c)
 *     ?zInternalRelatedId@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180097C0C (-zInternalRelatedId@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VTouchpadControllerExperienceManagerLogging@@@details@wil@@QEAAPEAVTouchpadControllerExperienceManagerLogging@@P6AXXZ@Z @ 0x180183A9C (-get@-$static_lazy@VTouchpadControllerExperienceManagerLogging@@@details@wil@@QEAAPEAVTouchpadCo.c)
 *     ?LockExclusive@?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1801AF520 (-LockExclusive@-$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflecto.c)
 */

void __fastcall TouchpadControllerExperienceManagerTelemetry::TouchpadLaunched::StartActivity(
        TouchpadControllerExperienceManagerTelemetry::TouchpadLaunched *this)
{
  __int64 v2; // rdi
  __int64 v3; // rcx
  __int64 v4; // rax
  RTL_SRWLOCK *v5; // rcx
  __int64 v6; // rax
  const struct _TlgProvider_t *v7; // rdi
  DWORD CurrentThreadId; // eax
  const GUID *v9; // rax
  PSRWLOCK SRWLock; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  PSRWLOCK *p_SRWLock; // [rsp+58h] [rbp-20h]
  int v13; // [rsp+60h] [rbp-18h]
  int v14; // [rsp+64h] [rbp-14h]

  wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    this,
    &SRWLock);
  v2 = *((_QWORD *)this + 6);
  v4 = wil::details::static_lazy<TouchpadControllerExperienceManagerLogging>::get(
         v3,
         lambda_fcbe7e8e9d69bc7433d8ee1b3dc43461_::_lambda_invoker_cdecl_);
  if ( TraceLoggingProviderEnabled(*(TraceLoggingHProvider *)(v4 + 8), 5u, 0x400000000000uLL) )
    EventActivityIdControl(3u, (LPGUID)(v2 + 8));
  else
    *(_QWORD *)(v2 + 8) = 0LL;
  v5 = SRWLock;
  *(_DWORD *)v2 = 1;
  if ( v5 )
    ReleaseSRWLockExclusive(v5);
  v6 = wil::details::static_lazy<TouchpadControllerExperienceManagerLogging>::get(
         v5,
         lambda_fcbe7e8e9d69bc7433d8ee1b3dc43461_::_lambda_invoker_cdecl_);
  v7 = *(const struct _TlgProvider_t **)(v6 + 8);
  if ( *(_DWORD *)v7 > 5u && TlgKeywordOn(*(TraceLoggingHProvider *)(v6 + 8), 0x400000000000uLL) )
  {
    CurrentThreadId = GetCurrentThreadId();
    v14 = 0;
    LODWORD(SRWLock) = CurrentThreadId;
    p_SRWLock = &SRWLock;
    v13 = 4;
    v9 = (const GUID *)wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
    TlgWrite(v7, &unk_18039061B, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), v9, 3u, &pData);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((TouchpadControllerExperienceManagerTelemetry::TouchpadLaunched *)((char *)this + 8));
}
