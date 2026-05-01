/*
 * XREFs of ?StopActivity@FSMEnterFullScreenForView@FullScreenManagerTelemetry@@MEAAXXZ @ 0x1801518D0
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
 *     ??0TraceLoggingProvider@wil@@IEAA@XZ @ 0x180104258 (--0TraceLoggingProvider@wil@@IEAA@XZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ?zInternalStop@?$ActivityBase@VImmersiveIconsLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1802CFC80 (-zInternalStop@-$ActivityBase@VImmersiveIconsLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProvid.c)
 */

void __fastcall FullScreenManagerTelemetry::FSMEnterFullScreenForView::StopActivity(
        FullScreenManagerTelemetry::FSMEnterFullScreenForView *this)
{
  int *v1; // rsi
  int v3; // eax
  int *v4; // rsi
  void *v5; // r8
  const CHAR *v6; // rdx
  const CHAR *v7; // rdx
  const WCHAR *v8; // rdx
  const CHAR *v9; // rdx
  const CHAR *v10; // rdx
  const CHAR *v11; // rdx
  TraceLoggingHProvider v12; // r10
  void *v13; // r8
  const struct _TlgProvider_t *v14; // rdi
  int v15; // ecx
  DWORD CurrentThreadId; // eax
  DWORD v17; // [rsp+38h] [rbp-D0h] BYREF
  int v18; // [rsp+3Ch] [rbp-CCh] BYREF
  WINBOOL v19[2]; // [rsp+40h] [rbp-C8h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-C0h] BYREF
  WINBOOL fPending; // [rsp+50h] [rbp-B8h] BYREF
  int v22; // [rsp+54h] [rbp-B4h] BYREF
  int v23; // [rsp+58h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR v24; // [rsp+68h] [rbp-A0h] BYREF
  int *v25; // [rsp+88h] [rbp-80h]
  __int64 v26; // [rsp+90h] [rbp-78h]
  DWORD *v27; // [rsp+98h] [rbp-70h]
  __int64 v28; // [rsp+A0h] [rbp-68h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A8h] [rbp-60h] BYREF
  int *v30; // [rsp+C8h] [rbp-40h]
  __int64 v31; // [rsp+D0h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+D8h] [rbp-30h] BYREF
  int *v33; // [rsp+E8h] [rbp-20h]
  __int64 v34; // [rsp+F0h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR v35; // [rsp+F8h] [rbp-10h] BYREF
  int *v36; // [rsp+108h] [rbp+0h]
  __int64 v37; // [rsp+110h] [rbp+8h]
  struct _EVENT_DATA_DESCRIPTOR v38; // [rsp+118h] [rbp+10h] BYREF
  DWORD *v39; // [rsp+128h] [rbp+20h]
  __int64 v40; // [rsp+130h] [rbp+28h]
  struct _EVENT_DATA_DESCRIPTOR v41; // [rsp+138h] [rbp+30h] BYREF
  int *v42; // [rsp+148h] [rbp+40h]
  __int64 v43; // [rsp+150h] [rbp+48h]
  struct _EVENT_DATA_DESCRIPTOR v44; // [rsp+158h] [rbp+50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v45; // [rsp+168h] [rbp+60h] BYREF
  WINBOOL *v46; // [rsp+178h] [rbp+70h]
  __int64 v47; // [rsp+180h] [rbp+78h]
  struct _EVENT_DATA_DESCRIPTOR v48; // [rsp+188h] [rbp+80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v49; // [rsp+198h] [rbp+90h] BYREF

  v1 = (int *)*((_QWORD *)this + 6);
  v3 = v1[19];
  if ( v3 < 0 && v3 == v1[21] )
    v4 = v1 + 20;
  else
    v4 = 0LL;
  wil::ActivityBase<ImmersiveIconsLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::zInternalStop();
  Context = 0LL;
  if ( v4 )
  {
    if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
    {
      Context = qword_1804387B0;
      wil::TraceLoggingProvider::TraceLoggingProvider((wil::TraceLoggingProvider *)qword_1804387B0);
      qword_1804387B0[0] = &ImmersiveIconsLogging::`vftable';
      qword_1804387C8 = (struct _TlgProvider_t *)&`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1804387B0, qword_1804387C8, v5);
      InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, qword_1804387B0);
    }
    if ( **((_DWORD **)Context + 1) > 5u && TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0x400000000000uLL) )
    {
      v6 = (const CHAR *)*((_QWORD *)v4 + 6);
      v22 = v4[1];
      v30 = &v22;
      v31 = 4LL;
      TlgCreateSz(&pDesc, v6);
      v7 = (const CHAR *)*((_QWORD *)v4 + 15);
      v33 = v4 + 14;
      v34 = 4LL;
      TlgCreateSz(&v35, v7);
      v8 = (const WCHAR *)*((_QWORD *)v4 + 2);
      v23 = *v4;
      v36 = &v23;
      v37 = 4LL;
      TlgCreateWsz(&v38, v8);
      v9 = (const CHAR *)*((_QWORD *)v4 + 8);
      v17 = v4[6];
      v39 = &v17;
      v40 = 4LL;
      TlgCreateSz(&v41, v9);
      v10 = (const CHAR *)*((_QWORD *)v4 + 10);
      v18 = v4[18];
      v42 = &v18;
      v43 = 4LL;
      TlgCreateSz(&v44, v10);
      TlgCreateWsz(&v45, *((LPCWSTR *)v4 + 11));
      v11 = (const CHAR *)*((_QWORD *)v4 + 13);
      v19[0] = v4[24];
      v46 = v19;
      v47 = 4LL;
      TlgCreateSz(&v48, v11);
      TlgCreateWsz(&v49, *((LPCWSTR *)v4 + 14));
      TlgWrite(v12, &unk_18038A7CA, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x10u, &pData);
    }
  }
  else
  {
    if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, v19, &Context) && v19[0] )
    {
      Context = qword_1804387B0;
      wil::TraceLoggingProvider::TraceLoggingProvider((wil::TraceLoggingProvider *)qword_1804387B0);
      qword_1804387B0[0] = &ImmersiveIconsLogging::`vftable';
      qword_1804387C8 = (struct _TlgProvider_t *)&`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1804387B0, qword_1804387C8, v13);
      InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, qword_1804387B0);
    }
    v14 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
    if ( *(_DWORD *)v14 > 5u && TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0x400000000000uLL) )
    {
      v15 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v25 = &v18;
      v18 = v15;
      v26 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      v28 = 4LL;
      v17 = CurrentThreadId;
      v27 = &v17;
      TlgWrite(v14, &unk_18038A780, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 4u, &v24);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((FullScreenManagerTelemetry::FSMEnterFullScreenForView *)((char *)this + 8));
}
