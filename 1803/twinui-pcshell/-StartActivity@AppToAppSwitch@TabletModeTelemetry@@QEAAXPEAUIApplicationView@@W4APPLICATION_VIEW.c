/*
 * XREFs of ?StartActivity@AppToAppSwitch@TabletModeTelemetry@@QEAAXPEAUIApplicationView@@W4APPLICATION_VIEW_SIZE_PREFERENCE@@01@Z @ 0x1802CB068
 * Callers:
 *     ?AppToAppSwitchHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_SIZE_PREFERENCE@@01@Z @ 0x1802C3F60 (-AppToAppSwitchHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_SIZE_P.c)
 * Callees:
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180018200 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??1?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAA@XZ @ 0x18001D2D4 (--1-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAA@XZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18001D300 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     _TlgCreateWsz @ 0x180058BCC (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x18005AB44 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x18005AB68 (_TlgWrite.c)
 *     ?zInternalRelatedId@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180097C0C (-zInternalRelatedId@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     ?CensorAppID@SQM@@YAPEBGPEBG@Z @ 0x18009D860 (-CensorAppID@SQM@@YAPEBGPEBG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??0TraceLoggingProvider@wil@@IEAA@XZ @ 0x180104258 (--0TraceLoggingProvider@wil@@IEAA@XZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ?zInternalStart@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180152A44 (-zInternalStart@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_.c)
 */

void __fastcall TabletModeTelemetry::AppToAppSwitch::StartActivity(
        __int64 a1,
        __int64 *a2,
        int a3,
        __int64 *a4,
        int a5)
{
  __int64 v9; // rax
  __int64 v10; // rax
  void *v11; // r8
  const struct _TlgProvider_t *v12; // rdi
  DWORD CurrentThreadId; // eax
  const unsigned __int16 *v14; // rdx
  const WCHAR *v15; // rbx
  const WCHAR *v16; // rcx
  const WCHAR *v17; // rax
  const unsigned __int16 *v18; // rdx
  const WCHAR *v19; // rax
  const GUID *v20; // rax
  WINBOOL fPending; // [rsp+30h] [rbp-B1h] BYREF
  DWORD v22; // [rsp+34h] [rbp-ADh] BYREF
  int v23; // [rsp+38h] [rbp-A9h] BYREF
  int v24; // [rsp+3Ch] [rbp-A5h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-A1h] BYREF
  LPCWSTR v26; // [rsp+48h] [rbp-99h] BYREF
  __int64 v27; // [rsp+50h] [rbp-91h]
  __int64 v28; // [rsp+58h] [rbp-89h]
  LPCWSTR pszPath; // [rsp+60h] [rbp-81h] BYREF
  __int64 v30; // [rsp+68h] [rbp-79h]
  __int64 v31; // [rsp+70h] [rbp-71h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-61h] BYREF
  DWORD *v33; // [rsp+A0h] [rbp-41h]
  __int64 v34; // [rsp+A8h] [rbp-39h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+B0h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v36; // [rsp+C0h] [rbp-21h] BYREF
  int *v37; // [rsp+D0h] [rbp-11h]
  __int64 v38; // [rsp+D8h] [rbp-9h]
  int *v39; // [rsp+E0h] [rbp-1h]
  __int64 v40; // [rsp+E8h] [rbp+7h]

  pszPath = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&pszPath);
  v9 = *a2;
  v30 = -1LL;
  v31 = -1LL;
  (*(void (__fastcall **)(__int64 *, LPCWSTR *))(v9 + 136))(a2, &pszPath);
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v26);
  v10 = *a4;
  v27 = -1LL;
  v28 = -1LL;
  (*(void (__fastcall **)(__int64 *, LPCWSTR *))(v10 + 136))(a4, &v26);
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::zInternalStart(a1);
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_1804387B0;
    wil::TraceLoggingProvider::TraceLoggingProvider((wil::TraceLoggingProvider *)qword_1804387B0);
    qword_1804387B0[0] = &ImmersiveIconsLogging::`vftable';
    qword_1804387C8 = (struct _TlgProvider_t *)&`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1804387B0, qword_1804387C8, v11);
    InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, qword_1804387B0);
  }
  v12 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v12 > 5u && TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0x400000000000uLL) )
  {
    CurrentThreadId = GetCurrentThreadId();
    v15 = &word_18035ABCC;
    v34 = 4LL;
    v22 = CurrentThreadId;
    v16 = &word_18035ABCC;
    v33 = &v22;
    if ( pszPath )
      v16 = pszPath;
    v17 = SQM::CensorAppID(v16, v14);
    TlgCreateWsz(&pDesc, v17);
    if ( v26 )
      v15 = v26;
    v19 = SQM::CensorAppID(v15, v18);
    TlgCreateWsz(&v36, v19);
    v23 = a3;
    v37 = &v23;
    v24 = a5;
    v39 = &v24;
    v38 = 4LL;
    v40 = 4LL;
    v20 = (const GUID *)wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(a1);
    TlgWrite(v12, &unk_18039CC60, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), v20, 7u, &pData);
  }
  if ( !*(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::~NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>((__int64)&v26);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::~NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>((__int64)&pszPath);
}
