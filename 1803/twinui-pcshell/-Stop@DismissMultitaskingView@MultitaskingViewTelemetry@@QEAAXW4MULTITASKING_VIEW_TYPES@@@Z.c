/*
 * XREFs of ?Stop@DismissMultitaskingView@MultitaskingViewTelemetry@@QEAAXW4MULTITASKING_VIEW_TYPES@@@Z @ 0x18020F830
 * Callers:
 *     ?DismissView@?$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UEAAJXZ @ 0x18020AAC0 (-DismissView@-$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UEAAJXZ.c)
 *     ?DismissView@?$CMultitaskingViewHostBase@UIAltTabViewHost@@@@UEAAJXZ @ 0x180216E80 (-DismissView@-$CMultitaskingViewHostBase@UIAltTabViewHost@@@@UEAAJXZ.c)
 *     ?DismissView@?$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@UEAAJXZ @ 0x180218590 (-DismissView@-$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@UEAAJXZ.c)
 *     ?DismissView@?$CMultitaskingViewHostBase@UIPPIAllUpViewHost@@@@UEAAJXZ @ 0x180278250 (-DismissView@-$CMultitaskingViewHostBase@UIPPIAllUpViewHost@@@@UEAAJXZ.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18001833C (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgCreateWsz @ 0x180058BCC (_TlgCreateWsz.c)
 *     _TlgCreateSz @ 0x180058D78 (_TlgCreateSz.c)
 *     _TlgKeywordOn @ 0x18005AB44 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x18005AB68 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ?zInternalStop@?$ActivityBase@VImmersiveIconsLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1802CFC80 (-zInternalStop@-$ActivityBase@VImmersiveIconsLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProvid.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MultitaskingViewTelemetry::DismissMultitaskingView::Stop(__int64 a1, WINBOOL a2)
{
  __int64 v4; // rsi
  int v5; // eax
  __int64 v6; // rsi
  void *v7; // r8
  TraceLoggingHProvider v8; // r10
  void *v9; // r8
  const struct _TlgProvider_t *v10; // rdi
  WINBOOL v11; // [rsp+38h] [rbp-D0h] BYREF
  DWORD CurrentThreadId; // [rsp+3Ch] [rbp-CCh] BYREF
  WINBOOL v13[2]; // [rsp+40h] [rbp-C8h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-C0h] BYREF
  WINBOOL fPending; // [rsp+50h] [rbp-B8h] BYREF
  int v16; // [rsp+54h] [rbp-B4h] BYREF
  _QWORD v17[2]; // [rsp+58h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR v18; // [rsp+68h] [rbp-A0h] BYREF
  WINBOOL *v19; // [rsp+88h] [rbp-80h]
  __int64 v20; // [rsp+90h] [rbp-78h]
  DWORD *p_CurrentThreadId; // [rsp+98h] [rbp-70h]
  __int64 v22; // [rsp+A0h] [rbp-68h]
  WINBOOL *v23; // [rsp+A8h] [rbp-60h]
  __int64 v24; // [rsp+B0h] [rbp-58h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+B8h] [rbp-50h] BYREF
  int *v26; // [rsp+D8h] [rbp-30h]
  __int64 v27; // [rsp+E0h] [rbp-28h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v29; // [rsp+F8h] [rbp-10h]
  __int64 v30; // [rsp+100h] [rbp-8h]
  struct _EVENT_DATA_DESCRIPTOR v31; // [rsp+108h] [rbp+0h] BYREF
  _QWORD *v32; // [rsp+118h] [rbp+10h]
  __int64 v33; // [rsp+120h] [rbp+18h]
  struct _EVENT_DATA_DESCRIPTOR v34; // [rsp+128h] [rbp+20h] BYREF
  WINBOOL *v35; // [rsp+138h] [rbp+30h]
  __int64 v36; // [rsp+140h] [rbp+38h]
  struct _EVENT_DATA_DESCRIPTOR v37; // [rsp+148h] [rbp+40h] BYREF
  DWORD *v38; // [rsp+158h] [rbp+50h]
  __int64 v39; // [rsp+160h] [rbp+58h]
  struct _EVENT_DATA_DESCRIPTOR v40; // [rsp+168h] [rbp+60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v41; // [rsp+178h] [rbp+70h] BYREF
  WINBOOL *v42; // [rsp+188h] [rbp+80h]
  __int64 v43; // [rsp+190h] [rbp+88h]
  struct _EVENT_DATA_DESCRIPTOR v44; // [rsp+198h] [rbp+90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v45; // [rsp+1A8h] [rbp+A0h] BYREF
  WINBOOL *v46; // [rsp+1B8h] [rbp+B0h]
  __int64 v47; // [rsp+1C0h] [rbp+B8h]

  v17[1] = -2LL;
  v4 = *(_QWORD *)(a1 + 48);
  v5 = *(_DWORD *)(v4 + 76);
  if ( v5 < 0 && v5 == *(_DWORD *)(v4 + 84) )
    v6 = v4 + 80;
  else
    v6 = 0LL;
  wil::ActivityBase<ImmersiveIconsLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::zInternalStop();
  Context = 0LL;
  if ( v6 )
  {
    if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
    {
      Context = qword_1804387B0;
      qword_1804387B0[0] = &ImmersiveIconsLogging::`vftable';
      qword_1804387C8 = (struct _TlgProvider_t *)&`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1804387B0, qword_1804387C8, v7);
      InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, qword_1804387B0);
    }
    if ( **((_DWORD **)Context + 1) > 5u && TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0x400000000000uLL) )
    {
      v16 = *(_DWORD *)(v6 + 4);
      v26 = &v16;
      v27 = 4LL;
      TlgCreateSz(&pDesc, *(LPCSTR *)(v6 + 48));
      v29 = v6 + 56;
      v30 = 4LL;
      TlgCreateSz(&v31, *(LPCSTR *)(v6 + 120));
      LODWORD(v17[0]) = *(_DWORD *)v6;
      v32 = v17;
      v33 = 4LL;
      TlgCreateWsz(&v34, *(LPCWSTR *)(v6 + 16));
      v11 = *(_DWORD *)(v6 + 24);
      v35 = &v11;
      v36 = 4LL;
      TlgCreateSz(&v37, *(LPCSTR *)(v6 + 64));
      CurrentThreadId = *(_DWORD *)(v6 + 72);
      v38 = &CurrentThreadId;
      v39 = 4LL;
      TlgCreateSz(&v40, *(LPCSTR *)(v6 + 80));
      TlgCreateWsz(&v41, *(LPCWSTR *)(v6 + 88));
      v13[0] = *(_DWORD *)(v6 + 96);
      v42 = v13;
      v43 = 4LL;
      TlgCreateSz(&v44, *(LPCSTR *)(v6 + 104));
      TlgCreateWsz(&v45, *(LPCWSTR *)(v6 + 112));
      v13[1] = a2;
      v46 = &v13[1];
      v47 = 4LL;
      TlgWrite(v8, &unk_180397A81, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), 0LL, 0x11u, &pData);
    }
  }
  else
  {
    if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &v13[1], &Context) && v13[1] )
    {
      Context = qword_1804387B0;
      qword_1804387B0[0] = &ImmersiveIconsLogging::`vftable';
      qword_1804387C8 = (struct _TlgProvider_t *)&`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1804387B0, qword_1804387C8, v9);
      InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, qword_1804387B0);
    }
    v10 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
    if ( *(_DWORD *)v10 > 5u && TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0x400000000000uLL) )
    {
      v13[0] = *(_DWORD *)(*(_QWORD *)(a1 + 48) + 76LL);
      v19 = v13;
      v20 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      p_CurrentThreadId = &CurrentThreadId;
      v22 = 4LL;
      v11 = a2;
      v23 = &v11;
      v24 = 4LL;
      TlgWrite(v10, &unk_180397B9A, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), 0LL, 5u, &v18);
    }
  }
  if ( *(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
