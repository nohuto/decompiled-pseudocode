/*
 * XREFs of ?StartActivity@ShowWindowAttempted@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@PEAUHWND__@@I@Z @ 0x1802CBAC4
 * Callers:
 *     ?ShowWindowAttempted@TabletModePositioner@@UEAAXPEAUHWND__@@IPEAK@Z @ 0x1802CAB60 (-ShowWindowAttempted@TabletModePositioner@@UEAAXPEAUHWND__@@IPEAK@Z.c)
 * Callees:
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180018200 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??1?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAA@XZ @ 0x18001D2D4 (--1-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAA@XZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18001D300 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     _TlgCreateWsz @ 0x180058BCC (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x18005AB68 (_TlgWrite.c)
 *     ?zInternalRelatedId@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180097C0C (-zInternalRelatedId@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     ??0TraceLoggingProvider@wil@@IEAA@XZ @ 0x180104258 (--0TraceLoggingProvider@wil@@IEAA@XZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ?zInternalStart@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18028DA08 (-zInternalStart@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsPr.c)
 *     ?GetViewName@ApplicationViewTraceLoggingHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z @ 0x1802C74C4 (-GetViewName@ApplicationViewTraceLoggingHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z.c)
 */

void __fastcall TabletModeTraceLogging::ShowWindowAttempted::StartActivity(
        TabletModeTraceLogging::ShowWindowAttempted *this,
        struct IApplicationView *a2,
        HWND a3,
        int a4)
{
  const WCHAR *v4; // rdi
  unsigned __int16 **v8; // r8
  void *v9; // r8
  const struct _TlgProvider_t *v10; // rsi
  DWORD CurrentThreadId; // eax
  const WCHAR *v12; // rdx
  int v13; // r10d
  const GUID *v14; // rax
  WINBOOL fPending; // [rsp+30h] [rbp-69h] BYREF
  DWORD v16; // [rsp+34h] [rbp-65h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-61h] BYREF
  const WCHAR *v18; // [rsp+40h] [rbp-59h] BYREF
  __int64 v19; // [rsp+48h] [rbp-51h]
  __int64 v20; // [rsp+50h] [rbp-49h]
  HWND v21; // [rsp+58h] [rbp-41h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-39h] BYREF
  DWORD *v23; // [rsp+80h] [rbp-19h]
  int v24; // [rsp+88h] [rbp-11h]
  int v25; // [rsp+8Ch] [rbp-Dh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp-9h] BYREF
  HWND *v27; // [rsp+A0h] [rbp+7h]
  int v28; // [rsp+A8h] [rbp+Fh]
  int v29; // [rsp+ACh] [rbp+13h]
  int *v30; // [rsp+B0h] [rbp+17h]
  int v31; // [rsp+B8h] [rbp+1Fh]
  int v32; // [rsp+BCh] [rbp+23h]
  int v33; // [rsp+118h] [rbp+7Fh] BYREF

  v33 = a4;
  v4 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v18 = 0LL;
  if ( a2 )
  {
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v18);
    v19 = -1LL;
    v20 = -1LL;
    ApplicationViewTraceLoggingHelpers::GetViewName(a2, (struct IApplicationView *)&v18, v8);
    v4 = v18;
  }
  wil::ActivityBase<WindowManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::zInternalStart((__int64)this);
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_1804387B0;
    wil::TraceLoggingProvider::TraceLoggingProvider((wil::TraceLoggingProvider *)qword_1804387B0);
    qword_1804387B0[0] = &ImmersiveIconsLogging::`vftable';
    qword_1804387C8 = (struct _TlgProvider_t *)&`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1804387B0, qword_1804387C8, v9);
    InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, qword_1804387B0);
  }
  v10 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v10 > 5u )
  {
    CurrentThreadId = GetCurrentThreadId();
    v25 = 0;
    v12 = &word_18035ABCC;
    v16 = CurrentThreadId;
    v23 = &v16;
    if ( v4 )
      v12 = v4;
    v24 = 4;
    TlgCreateWsz(&pDesc, v12);
    v29 = 0;
    v32 = 0;
    v27 = &v21;
    v30 = &v33;
    v21 = a3;
    v28 = 8;
    v31 = v13;
    v14 = (const GUID *)wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
    TlgWrite(v10, &unk_18039CCDA, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), v14, 6u, &pData);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((TabletModeTraceLogging::ShowWindowAttempted *)((char *)this + 8));
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::~NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>((__int64)&v18);
}
