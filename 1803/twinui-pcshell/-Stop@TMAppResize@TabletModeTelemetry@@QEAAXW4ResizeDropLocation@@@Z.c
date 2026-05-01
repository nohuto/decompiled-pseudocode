/*
 * XREFs of ?Stop@TMAppResize@TabletModeTelemetry@@QEAAXW4ResizeDropLocation@@@Z @ 0x1802E0158
 * Callers:
 *     ?CancelResize@AppResizeView@@AEAAXXZ @ 0x1802DF148 (-CancelResize@AppResizeView@@AEAAXXZ.c)
 *     ?CommitResize@AppResizeView@@AEAAJAEBUCPoint@Geometry@@@Z @ 0x1802DF1D0 (-CommitResize@AppResizeView@@AEAAJAEBUCPoint@Geometry@@@Z.c)
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

void __fastcall TabletModeTelemetry::TMAppResize::Stop(__int64 a1, WINBOOL a2)
{
  int *v2; // rsi
  int v5; // eax
  int *v6; // rsi
  void *v7; // r8
  const CHAR *v8; // rdx
  const CHAR *v9; // rdx
  const WCHAR *v10; // rdx
  const CHAR *v11; // rdx
  const CHAR *v12; // rdx
  const CHAR *v13; // rdx
  TraceLoggingHProvider v14; // r10
  void *v15; // r8
  const struct _TlgProvider_t *v16; // rdi
  int v17; // ecx
  DWORD CurrentThreadId; // eax
  WINBOOL v19; // [rsp+30h] [rbp-D0h] BYREF
  DWORD v20; // [rsp+34h] [rbp-CCh] BYREF
  int v21; // [rsp+38h] [rbp-C8h] BYREF
  WINBOOL v22; // [rsp+3Ch] [rbp-C4h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-C0h] BYREF
  WINBOOL fPending; // [rsp+48h] [rbp-B8h] BYREF
  int v25; // [rsp+4Ch] [rbp-B4h] BYREF
  int v26; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR v27; // [rsp+60h] [rbp-A0h] BYREF
  int *v28; // [rsp+80h] [rbp-80h]
  __int64 v29; // [rsp+88h] [rbp-78h]
  DWORD *v30; // [rsp+90h] [rbp-70h]
  __int64 v31; // [rsp+98h] [rbp-68h]
  WINBOOL *v32; // [rsp+A0h] [rbp-60h]
  __int64 v33; // [rsp+A8h] [rbp-58h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+B0h] [rbp-50h] BYREF
  int *v35; // [rsp+D0h] [rbp-30h]
  __int64 v36; // [rsp+D8h] [rbp-28h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+E0h] [rbp-20h] BYREF
  int *v38; // [rsp+F0h] [rbp-10h]
  __int64 v39; // [rsp+F8h] [rbp-8h]
  struct _EVENT_DATA_DESCRIPTOR v40; // [rsp+100h] [rbp+0h] BYREF
  int *v41; // [rsp+110h] [rbp+10h]
  __int64 v42; // [rsp+118h] [rbp+18h]
  struct _EVENT_DATA_DESCRIPTOR v43; // [rsp+120h] [rbp+20h] BYREF
  WINBOOL *v44; // [rsp+130h] [rbp+30h]
  __int64 v45; // [rsp+138h] [rbp+38h]
  struct _EVENT_DATA_DESCRIPTOR v46; // [rsp+140h] [rbp+40h] BYREF
  DWORD *v47; // [rsp+150h] [rbp+50h]
  __int64 v48; // [rsp+158h] [rbp+58h]
  struct _EVENT_DATA_DESCRIPTOR v49; // [rsp+160h] [rbp+60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v50; // [rsp+170h] [rbp+70h] BYREF
  int *v51; // [rsp+180h] [rbp+80h]
  __int64 v52; // [rsp+188h] [rbp+88h]
  struct _EVENT_DATA_DESCRIPTOR v53; // [rsp+190h] [rbp+90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v54; // [rsp+1A0h] [rbp+A0h] BYREF
  WINBOOL *v55; // [rsp+1B0h] [rbp+B0h]
  __int64 v56; // [rsp+1B8h] [rbp+B8h]

  v2 = *(int **)(a1 + 48);
  v5 = v2[19];
  if ( v5 < 0 && v5 == v2[21] )
    v6 = v2 + 20;
  else
    v6 = 0LL;
  wil::ActivityBase<ImmersiveIconsLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(a1);
  Context = 0LL;
  if ( v6 )
  {
    if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
    {
      Context = qword_1804387B0;
      wil::TraceLoggingProvider::TraceLoggingProvider((wil::TraceLoggingProvider *)qword_1804387B0);
      qword_1804387B0[0] = &ImmersiveIconsLogging::`vftable';
      qword_1804387C8 = (struct _TlgProvider_t *)&`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1804387B0, qword_1804387C8, v7);
      InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, qword_1804387B0);
    }
    if ( **((_DWORD **)Context + 1) > 5u && TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0x400000000000uLL) )
    {
      v8 = (const CHAR *)*((_QWORD *)v6 + 6);
      v25 = v6[1];
      v35 = &v25;
      v36 = 4LL;
      TlgCreateSz(&pDesc, v8);
      v9 = (const CHAR *)*((_QWORD *)v6 + 15);
      v38 = v6 + 14;
      v39 = 4LL;
      TlgCreateSz(&v40, v9);
      v10 = (const WCHAR *)*((_QWORD *)v6 + 2);
      v26 = *v6;
      v41 = &v26;
      v42 = 4LL;
      TlgCreateWsz(&v43, v10);
      v11 = (const CHAR *)*((_QWORD *)v6 + 8);
      v19 = v6[6];
      v44 = &v19;
      v45 = 4LL;
      TlgCreateSz(&v46, v11);
      v12 = (const CHAR *)*((_QWORD *)v6 + 10);
      v20 = v6[18];
      v47 = &v20;
      v48 = 4LL;
      TlgCreateSz(&v49, v12);
      TlgCreateWsz(&v50, *((LPCWSTR *)v6 + 11));
      v13 = (const CHAR *)*((_QWORD *)v6 + 13);
      v21 = v6[24];
      v51 = &v21;
      v52 = 4LL;
      TlgCreateSz(&v53, v13);
      TlgCreateWsz(&v54, *((LPCWSTR *)v6 + 14));
      v22 = a2;
      v55 = &v22;
      v56 = 4LL;
      TlgWrite(v14, &unk_18039E575, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), 0LL, 0x11u, &pData);
    }
  }
  else
  {
    if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &v22, &Context) && v22 )
    {
      Context = qword_1804387B0;
      wil::TraceLoggingProvider::TraceLoggingProvider((wil::TraceLoggingProvider *)qword_1804387B0);
      qword_1804387B0[0] = &ImmersiveIconsLogging::`vftable';
      qword_1804387C8 = (struct _TlgProvider_t *)&`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1804387B0, qword_1804387C8, v15);
      InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, qword_1804387B0);
    }
    v16 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
    if ( *(_DWORD *)v16 > 5u && TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0x400000000000uLL) )
    {
      v17 = *(_DWORD *)(*(_QWORD *)(a1 + 48) + 76LL);
      v28 = &v21;
      v21 = v17;
      v29 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      v31 = 4LL;
      v20 = CurrentThreadId;
      v19 = a2;
      v30 = &v20;
      v32 = &v19;
      v33 = 4LL;
      TlgWrite(v16, &unk_18039E52B, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), 0LL, 5u, &v27);
    }
  }
  if ( *(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
