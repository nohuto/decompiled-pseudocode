/*
 * XREFs of ?Stop@ShowWindowAttempted@TabletModeTraceLogging@@QEAAXK@Z @ 0x1802CC1EC
 * Callers:
 *     ?ShowWindowAttempted@TabletModePositioner@@UEAAXPEAUHWND__@@IPEAK@Z @ 0x1802CAB60 (-ShowWindowAttempted@TabletModePositioner@@UEAAXPEAUHWND__@@IPEAK@Z.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18001833C (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgCreateWsz @ 0x180058BCC (_TlgCreateWsz.c)
 *     _TlgCreateSz @ 0x180058D78 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x18005AB68 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     ??0TraceLoggingProvider@wil@@IEAA@XZ @ 0x180104258 (--0TraceLoggingProvider@wil@@IEAA@XZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ?zInternalStop@?$ActivityBase@VImmersiveIconsLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1802CFC80 (-zInternalStop@-$ActivityBase@VImmersiveIconsLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProvid.c)
 */

void __fastcall TabletModeTraceLogging::ShowWindowAttempted::Stop(
        TabletModeTraceLogging::ShowWindowAttempted *this,
        int a2)
{
  int *v2; // rsi
  int v4; // eax
  int *v5; // rsi
  void *v6; // r8
  const CHAR *v7; // rdx
  const CHAR *v8; // rdx
  const WCHAR *v9; // rdx
  const CHAR *v10; // rdx
  const CHAR *v11; // rdx
  const CHAR *v12; // rdx
  int v13; // ecx
  const CHAR *v14; // rdx
  TraceLoggingHProvider v15; // r10
  void *v16; // r8
  const struct _TlgProvider_t *v17; // rsi
  int v18; // ecx
  DWORD CurrentThreadId; // eax
  DWORD v20; // [rsp+38h] [rbp-D0h] BYREF
  int v21; // [rsp+3Ch] [rbp-CCh] BYREF
  WINBOOL v22[2]; // [rsp+40h] [rbp-C8h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-C0h] BYREF
  WINBOOL fPending; // [rsp+50h] [rbp-B8h] BYREF
  int v25; // [rsp+54h] [rbp-B4h] BYREF
  int v26; // [rsp+58h] [rbp-B0h] BYREF
  int v27; // [rsp+5Ch] [rbp-ACh] BYREF
  int v28; // [rsp+60h] [rbp-A8h] BYREF
  EVENT_DATA_DESCRIPTOR v29; // [rsp+68h] [rbp-A0h] BYREF
  int *v30; // [rsp+88h] [rbp-80h]
  __int64 v31; // [rsp+90h] [rbp-78h]
  DWORD *v32; // [rsp+98h] [rbp-70h]
  __int64 v33; // [rsp+A0h] [rbp-68h]
  int *v34; // [rsp+A8h] [rbp-60h]
  __int64 v35; // [rsp+B0h] [rbp-58h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+B8h] [rbp-50h] BYREF
  int *v37; // [rsp+D8h] [rbp-30h]
  __int64 v38; // [rsp+E0h] [rbp-28h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+E8h] [rbp-20h] BYREF
  int *v40; // [rsp+F8h] [rbp-10h]
  __int64 v41; // [rsp+100h] [rbp-8h]
  struct _EVENT_DATA_DESCRIPTOR v42; // [rsp+108h] [rbp+0h] BYREF
  int *v43; // [rsp+118h] [rbp+10h]
  __int64 v44; // [rsp+120h] [rbp+18h]
  struct _EVENT_DATA_DESCRIPTOR v45; // [rsp+128h] [rbp+20h] BYREF
  int *v46; // [rsp+138h] [rbp+30h]
  __int64 v47; // [rsp+140h] [rbp+38h]
  struct _EVENT_DATA_DESCRIPTOR v48; // [rsp+148h] [rbp+40h] BYREF
  int *v49; // [rsp+158h] [rbp+50h]
  __int64 v50; // [rsp+160h] [rbp+58h]
  struct _EVENT_DATA_DESCRIPTOR v51; // [rsp+168h] [rbp+60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v52; // [rsp+178h] [rbp+70h] BYREF
  DWORD *v53; // [rsp+188h] [rbp+80h]
  __int64 v54; // [rsp+190h] [rbp+88h]
  struct _EVENT_DATA_DESCRIPTOR v55; // [rsp+198h] [rbp+90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v56; // [rsp+1A8h] [rbp+A0h] BYREF
  int *v57; // [rsp+1B8h] [rbp+B0h]
  __int64 v58; // [rsp+1C0h] [rbp+B8h]
  WINBOOL *v59; // [rsp+1C8h] [rbp+C0h]
  __int64 v60; // [rsp+1D0h] [rbp+C8h]
  struct _EVENT_DATA_DESCRIPTOR v61; // [rsp+1D8h] [rbp+D0h] BYREF
  int *v62; // [rsp+1E8h] [rbp+E0h]
  __int64 v63; // [rsp+1F0h] [rbp+E8h]
  int v64; // [rsp+230h] [rbp+128h] BYREF

  v64 = a2;
  v2 = (int *)*((_QWORD *)this + 6);
  v4 = v2[19];
  if ( v4 < 0 && v4 == v2[21] )
    v5 = v2 + 20;
  else
    v5 = 0LL;
  wil::ActivityBase<ImmersiveIconsLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::zInternalStop();
  Context = 0LL;
  if ( v5 )
  {
    if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
    {
      Context = qword_1804387B0;
      wil::TraceLoggingProvider::TraceLoggingProvider((wil::TraceLoggingProvider *)qword_1804387B0);
      qword_1804387B0[0] = &ImmersiveIconsLogging::`vftable';
      qword_1804387C8 = (struct _TlgProvider_t *)&`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1804387B0, qword_1804387C8, v6);
      InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, qword_1804387B0);
    }
    if ( **((_DWORD **)Context + 1) > 5u )
    {
      v7 = (const CHAR *)*((_QWORD *)v5 + 6);
      v25 = v5[1];
      v37 = &v25;
      v38 = 4LL;
      TlgCreateSz(&pDesc, v7);
      v8 = (const CHAR *)*((_QWORD *)v5 + 15);
      v40 = v5 + 14;
      v41 = 4LL;
      TlgCreateSz(&v42, v8);
      v9 = (const WCHAR *)*((_QWORD *)v5 + 2);
      v26 = *v5;
      v43 = &v26;
      v44 = 4LL;
      TlgCreateWsz(&v45, v9);
      v10 = (const CHAR *)*((_QWORD *)v5 + 8);
      v27 = v5[6];
      v46 = &v27;
      v47 = 4LL;
      TlgCreateSz(&v48, v10);
      v11 = (const CHAR *)*((_QWORD *)v5 + 10);
      v28 = v5[18];
      v49 = &v28;
      v50 = 4LL;
      TlgCreateSz(&v51, v11);
      TlgCreateWsz(&v52, *((LPCWSTR *)v5 + 11));
      v12 = (const CHAR *)*((_QWORD *)v5 + 13);
      v20 = v5[24];
      v53 = &v20;
      v54 = 4LL;
      TlgCreateSz(&v55, v12);
      TlgCreateWsz(&v56, *((LPCWSTR *)v5 + 14));
      v13 = v5[2];
      v14 = (const CHAR *)*((_QWORD *)v5 + 5);
      v57 = &v21;
      v22[0] = v5[15];
      v21 = v13;
      v59 = v22;
      v58 = 4LL;
      v60 = 4LL;
      TlgCreateSz(&v61, v14);
      v63 = 4LL;
      v62 = &v64;
      TlgWrite(v15, &unk_18039D723, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x14u, &pData);
    }
  }
  else
  {
    if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, v22, &Context) && v22[0] )
    {
      Context = qword_1804387B0;
      wil::TraceLoggingProvider::TraceLoggingProvider((wil::TraceLoggingProvider *)qword_1804387B0);
      qword_1804387B0[0] = &ImmersiveIconsLogging::`vftable';
      qword_1804387C8 = (struct _TlgProvider_t *)&`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1804387B0, qword_1804387C8, v16);
      InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, qword_1804387B0);
    }
    v17 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
    if ( *(_DWORD *)v17 > 5u )
    {
      v18 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v30 = &v21;
      v21 = v18;
      v31 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      v33 = 4LL;
      v20 = CurrentThreadId;
      v35 = 4LL;
      v32 = &v20;
      v34 = &v64;
      TlgWrite(v17, &unk_18039D86C, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 5u, &v29);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((TabletModeTraceLogging::ShowWindowAttempted *)((char *)this + 8));
}
