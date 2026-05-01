/*
 * XREFs of ?StartActivity@DragCancel@AppViewManagerTabTelemetry@@QEAAXAEBU_GUID@@@Z @ 0x180121F5C
 * Callers:
 *     ?DragCancel@CAppViewManager@@UEAAJAEBU_GUID@@@Z @ 0x18011F090 (-DragCancel@CAppViewManager@@UEAAJAEBU_GUID@@@Z.c)
 * Callees:
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180018200 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgKeywordOn @ 0x18005AB44 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x18005AB68 (_TlgWrite.c)
 *     ?zInternalRelatedId@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180097C0C (-zInternalRelatedId@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@P6AXXZ@Z @ 0x180128104 (-get@-$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@.c)
 *     ?zInternalStart@?$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180128244 (-zInternalStart@-$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTa.c)
 */

void __fastcall AppViewManagerTabTelemetry::DragCancel::StartActivity(
        AppViewManagerTabTelemetry::DragCancel *this,
        const struct _GUID *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  const struct _TlgProvider_t *v6; // rdi
  const GUID *v7; // rax
  UINT32 cData; // edx
  DWORD CurrentThreadId; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  DWORD *p_CurrentThreadId; // [rsp+60h] [rbp-38h]
  int v12; // [rsp+68h] [rbp-30h]
  int v13; // [rsp+6Ch] [rbp-2Ch]
  const struct _GUID *v14; // [rsp+70h] [rbp-28h]
  int v15; // [rsp+78h] [rbp-20h]
  int v16; // [rsp+7Ch] [rbp-1Ch]

  wil::ActivityBase<TabShellTelemetryProvider,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::zInternalStart();
  v5 = wil::details::static_lazy<TabShellTelemetryProvider>::get(
         v4,
         lambda_e53bbca54556f26c08250baf48169049_::_lambda_invoker_cdecl_);
  v6 = *(const struct _TlgProvider_t **)(v5 + 8);
  if ( *(_DWORD *)v6 > 5u && TlgKeywordOn(*(TraceLoggingHProvider *)(v5 + 8), 0x400000000000uLL) )
  {
    v13 = 0;
    v16 = 0;
    CurrentThreadId = GetCurrentThreadId();
    p_CurrentThreadId = &CurrentThreadId;
    v12 = 4;
    v14 = a2;
    v15 = 16;
    v7 = (const GUID *)wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
    TlgWrite(v6, &unk_1803868F4, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), v7, cData, &pData);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((AppViewManagerTabTelemetry::DragCancel *)((char *)this + 8));
}
