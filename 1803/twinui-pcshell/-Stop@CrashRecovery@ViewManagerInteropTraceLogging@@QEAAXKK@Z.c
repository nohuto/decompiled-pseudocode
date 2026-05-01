/*
 * XREFs of ?Stop@CrashRecovery@ViewManagerInteropTraceLogging@@QEAAXKK@Z @ 0x1801CD810
 * Callers:
 *     ?_PerformCrashRecovery@ViewEventDispatcher@@AEAAJXZ @ 0x1801D0764 (-_PerformCrashRecovery@ViewEventDispatcher@@AEAAJXZ.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18001833C (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgCreateWsz @ 0x180058BCC (_TlgCreateWsz.c)
 *     _TlgCreateSz @ 0x180058D78 (_TlgCreateSz.c)
 *     ?zInternalStop@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180059028 (-zInternalStop@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03U_TlgReflectorTag_Param0IsProv.c)
 *     _TlgWrite @ 0x18005AB68 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

void __fastcall ViewManagerInteropTraceLogging::CrashRecovery::Stop(
        ViewManagerInteropTraceLogging::CrashRecovery *this,
        int a2,
        int a3)
{
  int *v3; // rsi
  int v5; // eax
  int *v6; // rsi
  void *v7; // r8
  const CHAR *v8; // rdx
  const CHAR *v9; // rdx
  const WCHAR *v10; // rdx
  const CHAR *v11; // rdx
  const CHAR *v12; // rdx
  const CHAR *v13; // rdx
  int v14; // ecx
  const CHAR *v15; // rdx
  TraceLoggingHProvider v16; // r10
  void *v17; // r8
  const struct _TlgProvider_t *v18; // rsi
  int v19; // ecx
  DWORD CurrentThreadId; // eax
  DWORD v21; // [rsp+30h] [rbp-D0h] BYREF
  int v22; // [rsp+34h] [rbp-CCh] BYREF
  WINBOOL v23; // [rsp+38h] [rbp-C8h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-C0h] BYREF
  WINBOOL fPending; // [rsp+48h] [rbp-B8h] BYREF
  int v26; // [rsp+4Ch] [rbp-B4h] BYREF
  int v27; // [rsp+50h] [rbp-B0h] BYREF
  int v28; // [rsp+54h] [rbp-ACh] BYREF
  int v29; // [rsp+58h] [rbp-A8h] BYREF
  EVENT_DATA_DESCRIPTOR v30; // [rsp+60h] [rbp-A0h] BYREF
  int *v31; // [rsp+80h] [rbp-80h]
  __int64 v32; // [rsp+88h] [rbp-78h]
  DWORD *v33; // [rsp+90h] [rbp-70h]
  __int64 v34; // [rsp+98h] [rbp-68h]
  int *v35; // [rsp+A0h] [rbp-60h]
  __int64 v36; // [rsp+A8h] [rbp-58h]
  int *v37; // [rsp+B0h] [rbp-50h]
  __int64 v38; // [rsp+B8h] [rbp-48h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+C0h] [rbp-40h] BYREF
  int *v40; // [rsp+E0h] [rbp-20h]
  __int64 v41; // [rsp+E8h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+F0h] [rbp-10h] BYREF
  int *v43; // [rsp+100h] [rbp+0h]
  __int64 v44; // [rsp+108h] [rbp+8h]
  struct _EVENT_DATA_DESCRIPTOR v45; // [rsp+110h] [rbp+10h] BYREF
  int *v46; // [rsp+120h] [rbp+20h]
  __int64 v47; // [rsp+128h] [rbp+28h]
  struct _EVENT_DATA_DESCRIPTOR v48; // [rsp+130h] [rbp+30h] BYREF
  int *v49; // [rsp+140h] [rbp+40h]
  __int64 v50; // [rsp+148h] [rbp+48h]
  struct _EVENT_DATA_DESCRIPTOR v51; // [rsp+150h] [rbp+50h] BYREF
  int *v52; // [rsp+160h] [rbp+60h]
  __int64 v53; // [rsp+168h] [rbp+68h]
  struct _EVENT_DATA_DESCRIPTOR v54; // [rsp+170h] [rbp+70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v55; // [rsp+180h] [rbp+80h] BYREF
  DWORD *v56; // [rsp+190h] [rbp+90h]
  __int64 v57; // [rsp+198h] [rbp+98h]
  struct _EVENT_DATA_DESCRIPTOR v58; // [rsp+1A0h] [rbp+A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v59; // [rsp+1B0h] [rbp+B0h] BYREF
  int *v60; // [rsp+1C0h] [rbp+C0h]
  __int64 v61; // [rsp+1C8h] [rbp+C8h]
  WINBOOL *v62; // [rsp+1D0h] [rbp+D0h]
  __int64 v63; // [rsp+1D8h] [rbp+D8h]
  struct _EVENT_DATA_DESCRIPTOR v64; // [rsp+1E0h] [rbp+E0h] BYREF
  int *v65; // [rsp+1F0h] [rbp+F0h]
  __int64 v66; // [rsp+1F8h] [rbp+F8h]
  int *v67; // [rsp+200h] [rbp+100h]
  __int64 v68; // [rsp+208h] [rbp+108h]
  int v69; // [rsp+258h] [rbp+158h] BYREF
  int v70; // [rsp+260h] [rbp+160h] BYREF

  v70 = a3;
  v69 = a2;
  v3 = (int *)*((_QWORD *)this + 6);
  v5 = v3[19];
  if ( v5 < 0 && v5 == v3[21] )
    v6 = v3 + 20;
  else
    v6 = 0LL;
  wil::ActivityBase<CortanaProactiveLogging,1,0,4,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
  Context = 0LL;
  if ( v6 )
  {
    if ( InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
      && fPending )
    {
      Context = qword_180438940;
      qword_180438940[0] = &LockScreenServiceLogging::`vftable';
      qword_180438958 = (struct _TlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438940, qword_180438958, v7);
      InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, qword_180438940);
    }
    if ( **((_DWORD **)Context + 1) > 5u )
    {
      v8 = (const CHAR *)*((_QWORD *)v6 + 6);
      v26 = v6[1];
      v40 = &v26;
      v41 = 4LL;
      TlgCreateSz(&pDesc, v8);
      v9 = (const CHAR *)*((_QWORD *)v6 + 15);
      v43 = v6 + 14;
      v44 = 4LL;
      TlgCreateSz(&v45, v9);
      v10 = (const WCHAR *)*((_QWORD *)v6 + 2);
      v27 = *v6;
      v46 = &v27;
      v47 = 4LL;
      TlgCreateWsz(&v48, v10);
      v11 = (const CHAR *)*((_QWORD *)v6 + 8);
      v28 = v6[6];
      v49 = &v28;
      v50 = 4LL;
      TlgCreateSz(&v51, v11);
      v12 = (const CHAR *)*((_QWORD *)v6 + 10);
      v29 = v6[18];
      v52 = &v29;
      v53 = 4LL;
      TlgCreateSz(&v54, v12);
      TlgCreateWsz(&v55, *((LPCWSTR *)v6 + 11));
      v13 = (const CHAR *)*((_QWORD *)v6 + 13);
      v21 = v6[24];
      v56 = &v21;
      v57 = 4LL;
      TlgCreateSz(&v58, v13);
      TlgCreateWsz(&v59, *((LPCWSTR *)v6 + 14));
      v14 = v6[2];
      v15 = (const CHAR *)*((_QWORD *)v6 + 5);
      v60 = &v22;
      v23 = v6[15];
      v22 = v14;
      v62 = &v23;
      v61 = 4LL;
      v63 = 4LL;
      TlgCreateSz(&v64, v15);
      v66 = 4LL;
      v67 = &v70;
      v65 = &v69;
      v68 = 4LL;
      TlgWrite(v16, &unk_180394467, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x15u, &pData);
    }
  }
  else
  {
    if ( InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &v23, &Context) && v23 )
    {
      Context = qword_180438940;
      qword_180438940[0] = &LockScreenServiceLogging::`vftable';
      qword_180438958 = (struct _TlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438940, qword_180438958, v17);
      InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, qword_180438940);
    }
    v18 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
    if ( *(_DWORD *)v18 > 5u )
    {
      v19 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v31 = &v22;
      v22 = v19;
      v32 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      v34 = 4LL;
      v21 = CurrentThreadId;
      v36 = 4LL;
      v33 = &v21;
      v35 = &v69;
      v37 = &v70;
      v38 = 4LL;
      TlgWrite(v18, &unk_180394408, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 6u, &v30);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((ViewManagerInteropTraceLogging::CrashRecovery *)((char *)this + 8));
}
