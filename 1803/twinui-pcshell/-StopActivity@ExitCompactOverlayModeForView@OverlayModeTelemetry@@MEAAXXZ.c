/*
 * XREFs of ?StopActivity@ExitCompactOverlayModeForView@OverlayModeTelemetry@@MEAAXXZ @ 0x1802B9EE0
 * Callers:
 *     <none>
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
void __fastcall OverlayModeTelemetry::ExitCompactOverlayModeForView::StopActivity(
        OverlayModeTelemetry::ExitCompactOverlayModeForView *this)
{
  __int64 v2; // rsi
  int v3; // eax
  __int64 v4; // rsi
  void *v5; // r8
  TraceLoggingHProvider v6; // r10
  void *v7; // r8
  const struct _TlgProvider_t *v8; // rdi
  DWORD CurrentThreadId; // [rsp+38h] [rbp-D0h] BYREF
  int v10; // [rsp+3Ch] [rbp-CCh] BYREF
  WINBOOL v11[2]; // [rsp+40h] [rbp-C8h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-C0h] BYREF
  WINBOOL fPending; // [rsp+50h] [rbp-B8h] BYREF
  int v14; // [rsp+54h] [rbp-B4h] BYREF
  _QWORD v15[2]; // [rsp+58h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR v16; // [rsp+68h] [rbp-A0h] BYREF
  int *v17; // [rsp+88h] [rbp-80h]
  __int64 v18; // [rsp+90h] [rbp-78h]
  DWORD *p_CurrentThreadId; // [rsp+98h] [rbp-70h]
  __int64 v20; // [rsp+A0h] [rbp-68h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A8h] [rbp-60h] BYREF
  int *v22; // [rsp+C8h] [rbp-40h]
  __int64 v23; // [rsp+D0h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v25; // [rsp+E8h] [rbp-20h]
  __int64 v26; // [rsp+F0h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR v27; // [rsp+F8h] [rbp-10h] BYREF
  _QWORD *v28; // [rsp+108h] [rbp+0h]
  __int64 v29; // [rsp+110h] [rbp+8h]
  struct _EVENT_DATA_DESCRIPTOR v30; // [rsp+118h] [rbp+10h] BYREF
  DWORD *v31; // [rsp+128h] [rbp+20h]
  __int64 v32; // [rsp+130h] [rbp+28h]
  struct _EVENT_DATA_DESCRIPTOR v33; // [rsp+138h] [rbp+30h] BYREF
  int *v34; // [rsp+148h] [rbp+40h]
  __int64 v35; // [rsp+150h] [rbp+48h]
  struct _EVENT_DATA_DESCRIPTOR v36; // [rsp+158h] [rbp+50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v37; // [rsp+168h] [rbp+60h] BYREF
  WINBOOL *v38; // [rsp+178h] [rbp+70h]
  __int64 v39; // [rsp+180h] [rbp+78h]
  struct _EVENT_DATA_DESCRIPTOR v40; // [rsp+188h] [rbp+80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v41; // [rsp+198h] [rbp+90h] BYREF

  v15[1] = -2LL;
  v2 = *((_QWORD *)this + 6);
  v3 = *(_DWORD *)(v2 + 76);
  if ( v3 < 0 && v3 == *(_DWORD *)(v2 + 84) )
    v4 = v2 + 80;
  else
    v4 = 0LL;
  wil::ActivityBase<ImmersiveIconsLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::zInternalStop();
  Context = 0LL;
  if ( v4 )
  {
    if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
    {
      Context = qword_1804387B0;
      qword_1804387B0[0] = &ImmersiveIconsLogging::`vftable';
      qword_1804387C8 = (struct _TlgProvider_t *)&`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1804387B0, qword_1804387C8, v5);
      InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, qword_1804387B0);
    }
    if ( **((_DWORD **)Context + 1) > 5u && TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0x400000000000uLL) )
    {
      v14 = *(_DWORD *)(v4 + 4);
      v22 = &v14;
      v23 = 4LL;
      TlgCreateSz(&pDesc, *(LPCSTR *)(v4 + 48));
      v25 = v4 + 56;
      v26 = 4LL;
      TlgCreateSz(&v27, *(LPCSTR *)(v4 + 120));
      LODWORD(v15[0]) = *(_DWORD *)v4;
      v28 = v15;
      v29 = 4LL;
      TlgCreateWsz(&v30, *(LPCWSTR *)(v4 + 16));
      CurrentThreadId = *(_DWORD *)(v4 + 24);
      v31 = &CurrentThreadId;
      v32 = 4LL;
      TlgCreateSz(&v33, *(LPCSTR *)(v4 + 64));
      v10 = *(_DWORD *)(v4 + 72);
      v34 = &v10;
      v35 = 4LL;
      TlgCreateSz(&v36, *(LPCSTR *)(v4 + 80));
      TlgCreateWsz(&v37, *(LPCWSTR *)(v4 + 88));
      v11[0] = *(_DWORD *)(v4 + 96);
      v38 = v11;
      v39 = 4LL;
      TlgCreateSz(&v40, *(LPCSTR *)(v4 + 104));
      TlgCreateWsz(&v41, *(LPCWSTR *)(v4 + 112));
      TlgWrite(v6, &unk_18039CB4B, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x10u, &pData);
    }
  }
  else
  {
    if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, v11, &Context) && v11[0] )
    {
      Context = qword_1804387B0;
      qword_1804387B0[0] = &ImmersiveIconsLogging::`vftable';
      qword_1804387C8 = (struct _TlgProvider_t *)&`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1804387B0, qword_1804387C8, v7);
      InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, qword_1804387B0);
    }
    v8 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
    if ( *(_DWORD *)v8 > 5u && TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0x400000000000uLL) )
    {
      v10 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v17 = &v10;
      v18 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      p_CurrentThreadId = &CurrentThreadId;
      v20 = 4LL;
      TlgWrite(v8, &unk_18039CAFD, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 4u, &v16);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((OverlayModeTelemetry::ExitCompactOverlayModeForView *)((char *)this + 8));
}
