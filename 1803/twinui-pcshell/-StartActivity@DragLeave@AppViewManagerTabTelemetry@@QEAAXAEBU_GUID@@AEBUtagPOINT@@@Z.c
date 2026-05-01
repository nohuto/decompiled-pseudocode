/*
 * XREFs of ?StartActivity@DragLeave@AppViewManagerTabTelemetry@@QEAAXAEBU_GUID@@AEBUtagPOINT@@@Z @ 0x1801223B8
 * Callers:
 *     ?DragLeave@CAppViewManager@@UEAAJAEBU_GUID@@UtagPOINT@@@Z @ 0x180120130 (-DragLeave@CAppViewManager@@UEAAJAEBU_GUID@@UtagPOINT@@@Z.c)
 * Callees:
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180018200 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgKeywordOn @ 0x18005AB44 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x18005AB68 (_TlgWrite.c)
 *     TraceLoggingProviderEnabled @ 0x1800755FC (TraceLoggingProviderEnabled.c)
 *     ?zInternalRelatedId@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180097C0C (-zInternalRelatedId@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@P6AXXZ@Z @ 0x180128104 (-get@-$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@.c)
 *     ?LockExclusive@?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1801AF520 (-LockExclusive@-$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflecto.c)
 */

void __fastcall AppViewManagerTabTelemetry::DragLeave::StartActivity(
        AppViewManagerTabTelemetry::DragLeave *this,
        const struct _GUID *a2,
        const struct tagPOINT *a3)
{
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rax
  RTL_SRWLOCK *v9; // rcx
  __int64 v10; // rax
  const struct _TlgProvider_t *v11; // rdi
  DWORD CurrentThreadId; // eax
  const GUID *v13; // rax
  PSRWLOCK SRWLock[2]; // [rsp+30h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-29h] BYREF
  PSRWLOCK *v16; // [rsp+60h] [rbp-9h]
  int v17; // [rsp+68h] [rbp-1h]
  int v18; // [rsp+6Ch] [rbp+3h]
  const struct _GUID *v19; // [rsp+70h] [rbp+7h]
  int v20; // [rsp+78h] [rbp+Fh]
  int v21; // [rsp+7Ch] [rbp+13h]
  const struct tagPOINT *v22; // [rsp+80h] [rbp+17h]
  int v23; // [rsp+88h] [rbp+1Fh]
  int v24; // [rsp+8Ch] [rbp+23h]
  LONG *p_y; // [rsp+90h] [rbp+27h]
  int v26; // [rsp+98h] [rbp+2Fh]
  int v27; // [rsp+9Ch] [rbp+33h]

  wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    this,
    SRWLock);
  v6 = *((_QWORD *)this + 6);
  v8 = wil::details::static_lazy<TabShellTelemetryProvider>::get(
         v7,
         lambda_e53bbca54556f26c08250baf48169049_::_lambda_invoker_cdecl_);
  if ( TraceLoggingProviderEnabled(*(TraceLoggingHProvider *)(v8 + 8), 5u, 0x200000000000uLL) )
    EventActivityIdControl(3u, (LPGUID)(v6 + 8));
  else
    *(_QWORD *)(v6 + 8) = 0LL;
  v9 = SRWLock[0];
  *(_DWORD *)v6 = 1;
  if ( v9 )
    ReleaseSRWLockExclusive(v9);
  v10 = wil::details::static_lazy<TabShellTelemetryProvider>::get(
          v9,
          lambda_e53bbca54556f26c08250baf48169049_::_lambda_invoker_cdecl_);
  v11 = *(const struct _TlgProvider_t **)(v10 + 8);
  if ( *(_DWORD *)v11 > 5u && TlgKeywordOn(*(TraceLoggingHProvider *)(v10 + 8), 0x200000000000uLL) )
  {
    CurrentThreadId = GetCurrentThreadId();
    v18 = 0;
    v21 = 0;
    v24 = 0;
    v27 = 0;
    LODWORD(SRWLock[0]) = CurrentThreadId;
    v16 = SRWLock;
    p_y = &a3->y;
    v17 = 4;
    v19 = a2;
    v20 = 16;
    v22 = a3;
    v23 = 4;
    v26 = 4;
    v13 = (const GUID *)wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
    TlgWrite(v11, &unk_180386984, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), v13, 6u, &pData);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((AppViewManagerTabTelemetry::DragLeave *)((char *)this + 8));
}
