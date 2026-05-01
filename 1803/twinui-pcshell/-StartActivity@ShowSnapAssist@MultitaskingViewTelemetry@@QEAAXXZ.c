/*
 * XREFs of ?StartActivity@ShowSnapAssist@MultitaskingViewTelemetry@@QEAAXXZ @ 0x1802190EC
 * Callers:
 *     ??$Start@$$V@ShowSnapAssist@MultitaskingViewTelemetry@@SA?AV01@XZ @ 0x180217CEC (--$Start@$$V@ShowSnapAssist@MultitaskingViewTelemetry@@SA-AV01@XZ.c)
 *     ?Show@XamlSnapAssistViewHost@@UEAAJPEAUtagRECT@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x180218AC0 (-Show@XamlSnapAssistViewHost@@UEAAJPEAUtagRECT@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z.c)
 * Callees:
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180018200 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgKeywordOn @ 0x18005AB44 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x18005AB68 (_TlgWrite.c)
 *     ?zInternalRelatedId@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180097C0C (-zInternalRelatedId@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ?zInternalStart@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180152A44 (-zInternalStart@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MultitaskingViewTelemetry::ShowSnapAssist::StartActivity(
        MultitaskingViewTelemetry::ShowSnapAssist *this)
{
  void *v2; // r8
  const struct _TlgProvider_t *v3; // rdi
  const GUID *v4; // rax
  WINBOOL fPending; // [rsp+30h] [rbp-50h] BYREF
  DWORD CurrentThreadId; // [rsp+34h] [rbp-4Ch] BYREF
  LPVOID Context[2]; // [rsp+38h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-38h] BYREF
  DWORD *p_CurrentThreadId; // [rsp+68h] [rbp-18h]
  int v10; // [rsp+70h] [rbp-10h]
  int v11; // [rsp+74h] [rbp-Ch]

  Context[1] = (LPVOID)-2LL;
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::zInternalStart((__int64)this);
  Context[0] = 0LL;
  if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &fPending, Context) && fPending )
  {
    Context[0] = qword_1804387B0;
    qword_1804387B0[0] = &ImmersiveIconsLogging::`vftable';
    qword_1804387C8 = (struct _TlgProvider_t *)&`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1804387B0, qword_1804387C8, v2);
    InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, qword_1804387B0);
  }
  v3 = (const struct _TlgProvider_t *)*((_QWORD *)Context[0] + 1);
  if ( *(_DWORD *)v3 > 5u && TlgKeywordOn(*((TraceLoggingHProvider *)Context[0] + 1), 0x400000000000uLL) )
  {
    CurrentThreadId = GetCurrentThreadId();
    p_CurrentThreadId = &CurrentThreadId;
    v10 = 4;
    v11 = 0;
    v4 = (const GUID *)wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
    TlgWrite(v3, &unk_1803980FF, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), v4, 3u, &pData);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((MultitaskingViewTelemetry::ShowSnapAssist *)((char *)this + 8));
}
