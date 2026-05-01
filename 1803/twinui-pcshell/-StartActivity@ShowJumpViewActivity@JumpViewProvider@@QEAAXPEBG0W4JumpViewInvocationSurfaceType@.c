/*
 * XREFs of ?StartActivity@ShowJumpViewActivity@JumpViewProvider@@QEAAXPEBG0W4JumpViewInvocationSurfaceType@JumpView@Shell@Internal@Windows@@W4JumpViewInvocationMethod@4567@@Z @ 0x1801784EC
 * Callers:
 *     ?BeginTelemetryActivity@CJumpViewExperienceManager@@AEAA?AVShowJumpViewActivity@JumpViewProvider@@PEAUIJumpViewParams@JumpView@Shell@Internal@Windows@@@Z @ 0x1801760A0 (-BeginTelemetryActivity@CJumpViewExperienceManager@@AEAA-AVShowJumpViewActivity@JumpViewProvider.c)
 * Callees:
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180018200 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgCreateWsz @ 0x180058BCC (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x18005AB44 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x18005AB68 (_TlgWrite.c)
 *     TraceLoggingProviderEnabled @ 0x1800755FC (TraceLoggingProviderEnabled.c)
 *     ?zInternalRelatedId@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180097C0C (-zInternalRelatedId@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?CensorAppID@SQM@@YAPEBGPEBG@Z @ 0x18009D860 (-CensorAppID@SQM@@YAPEBGPEBG@Z.c)
 *     ?get@?$static_lazy@VJumpViewProvider@@@details@wil@@QEAAPEAVJumpViewProvider@@P6AXXZ@Z @ 0x180178AF0 (-get@-$static_lazy@VJumpViewProvider@@@details@wil@@QEAAPEAVJumpViewProvider@@P6AXXZ@Z.c)
 *     ?LockExclusive@?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1801AF520 (-LockExclusive@-$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflecto.c)
 */

void __fastcall JumpViewProvider::ShowJumpViewActivity::StartActivity(
        __int64 a1,
        const WCHAR *a2,
        const WCHAR *a3,
        int a4,
        int a5)
{
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rax
  RTL_SRWLOCK *v12; // rcx
  __int64 v13; // rax
  const struct _TlgProvider_t *v14; // rdi
  DWORD CurrentThreadId; // eax
  const unsigned __int16 *v16; // rdx
  const WCHAR *v17; // rax
  const unsigned __int16 *v18; // rdx
  const WCHAR *v19; // rax
  const GUID *v20; // rax
  DWORD v21; // [rsp+30h] [rbp-61h] BYREF
  int v22; // [rsp+34h] [rbp-5Dh] BYREF
  PSRWLOCK SRWLock; // [rsp+38h] [rbp-59h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-51h] BYREF
  DWORD *v25; // [rsp+60h] [rbp-31h]
  int v26; // [rsp+68h] [rbp-29h]
  int v27; // [rsp+6Ch] [rbp-25h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v29; // [rsp+80h] [rbp-11h] BYREF
  int *v30; // [rsp+90h] [rbp-1h]
  int v31; // [rsp+98h] [rbp+7h]
  int v32; // [rsp+9Ch] [rbp+Bh]
  PSRWLOCK *p_SRWLock; // [rsp+A0h] [rbp+Fh]
  int v34; // [rsp+A8h] [rbp+17h]
  int v35; // [rsp+ACh] [rbp+1Bh]

  wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    &SRWLock);
  v9 = *(_QWORD *)(a1 + 48);
  v11 = wil::details::static_lazy<JumpViewProvider>::get(
          v10,
          lambda_98d309e3731f67b600e39960160efe32_::_lambda_invoker_cdecl_);
  if ( TraceLoggingProviderEnabled(*(TraceLoggingHProvider *)(v11 + 8), 5u, 0x400000000000uLL) )
    EventActivityIdControl(3u, (LPGUID)(v9 + 8));
  else
    *(_QWORD *)(v9 + 8) = 0LL;
  v12 = SRWLock;
  *(_DWORD *)v9 = 1;
  if ( v12 )
    ReleaseSRWLockExclusive(v12);
  v13 = wil::details::static_lazy<JumpViewProvider>::get(
          v12,
          lambda_98d309e3731f67b600e39960160efe32_::_lambda_invoker_cdecl_);
  v14 = *(const struct _TlgProvider_t **)(v13 + 8);
  if ( *(_DWORD *)v14 > 5u && TlgKeywordOn(*(TraceLoggingHProvider *)(v13 + 8), 0x400000000000uLL) )
  {
    CurrentThreadId = GetCurrentThreadId();
    v27 = 0;
    v21 = CurrentThreadId;
    v25 = &v21;
    v26 = 4;
    v17 = SQM::CensorAppID(a2, v16);
    TlgCreateWsz(&pDesc, v17);
    v19 = SQM::CensorAppID(a3, v18);
    TlgCreateWsz(&v29, v19);
    v32 = 0;
    v35 = 0;
    v30 = &v22;
    LODWORD(SRWLock) = a5;
    p_SRWLock = &SRWLock;
    v22 = a4;
    v31 = 4;
    v34 = 4;
    v20 = (const GUID *)wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(a1);
    TlgWrite(v14, &unk_18038E9DB, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), v20, 7u, &pData);
  }
  if ( !*(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
