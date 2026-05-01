/*
 * XREFs of ?StopActivity@EM_ViewUncloakingActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@MEAAXXZ @ 0x18007EBA0
 * Callers:
 *     ?ReportStopActivity@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x18007C9F0 (-ReportStopActivity@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Para.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18001833C (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgCreateWsz @ 0x180058BCC (_TlgCreateWsz.c)
 *     _TlgCreateSz @ 0x180058D78 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x18005AB68 (_TlgWrite.c)
 *     ?zInternalStop@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18007CC5C (-zInternalStop@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsP.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

void __fastcall NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ViewUncloakingActivity::StopActivity(
        NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ViewUncloakingActivity *this)
{
  int *v1; // rsi
  int v3; // eax
  int *v4; // rsi
  const struct _TlgProvider_t *v5; // rsi
  int v6; // ecx
  DWORD CurrentThreadId; // eax
  const CHAR *v8; // rdx
  const CHAR *v9; // rdx
  const WCHAR *v10; // rdx
  const CHAR *v11; // rdx
  const CHAR *v12; // rdx
  const CHAR *v13; // rdx
  int v14; // ecx
  const CHAR *v15; // rdx
  TraceLoggingHProvider v16; // r10
  DWORD v17; // [rsp+30h] [rbp-D0h] BYREF
  int v18; // [rsp+34h] [rbp-CCh] BYREF
  WINBOOL fPending; // [rsp+38h] [rbp-C8h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-C0h] BYREF
  WINBOOL v21; // [rsp+48h] [rbp-B8h] BYREF
  int v22; // [rsp+4Ch] [rbp-B4h] BYREF
  int v23; // [rsp+50h] [rbp-B0h] BYREF
  int v24; // [rsp+54h] [rbp-ACh] BYREF
  int v25; // [rsp+58h] [rbp-A8h] BYREF
  EVENT_DATA_DESCRIPTOR v26; // [rsp+60h] [rbp-A0h] BYREF
  int *v27; // [rsp+80h] [rbp-80h]
  __int64 v28; // [rsp+88h] [rbp-78h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp-70h] BYREF
  int *v30; // [rsp+A0h] [rbp-60h]
  __int64 v31; // [rsp+A8h] [rbp-58h]
  struct _EVENT_DATA_DESCRIPTOR v32; // [rsp+B0h] [rbp-50h] BYREF
  int *v33; // [rsp+C0h] [rbp-40h]
  __int64 v34; // [rsp+C8h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR v35; // [rsp+D0h] [rbp-30h] BYREF
  int *v36; // [rsp+E0h] [rbp-20h]
  __int64 v37; // [rsp+E8h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR v38; // [rsp+F0h] [rbp-10h] BYREF
  int *v39; // [rsp+100h] [rbp+0h]
  __int64 v40; // [rsp+108h] [rbp+8h]
  struct _EVENT_DATA_DESCRIPTOR v41; // [rsp+110h] [rbp+10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v42; // [rsp+120h] [rbp+20h] BYREF
  DWORD *v43; // [rsp+130h] [rbp+30h]
  __int64 v44; // [rsp+138h] [rbp+38h]
  struct _EVENT_DATA_DESCRIPTOR v45; // [rsp+140h] [rbp+40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v46; // [rsp+150h] [rbp+50h] BYREF
  int *v47; // [rsp+160h] [rbp+60h]
  __int64 v48; // [rsp+168h] [rbp+68h]
  WINBOOL *p_fPending; // [rsp+170h] [rbp+70h]
  __int64 v50; // [rsp+178h] [rbp+78h]
  struct _EVENT_DATA_DESCRIPTOR v51; // [rsp+180h] [rbp+80h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+190h] [rbp+90h] BYREF
  int *v53; // [rsp+1B0h] [rbp+B0h]
  __int64 v54; // [rsp+1B8h] [rbp+B8h]
  DWORD *v55; // [rsp+1C0h] [rbp+C0h]
  __int64 v56; // [rsp+1C8h] [rbp+C8h]

  v1 = (int *)*((_QWORD *)this + 6);
  v3 = v1[19];
  if ( v3 < 0 && v3 == v1[21] )
    v4 = v1 + 20;
  else
    v4 = 0LL;
  wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
  Context = 0LL;
  if ( v4 )
  {
    if ( InitOnceBeginInitialize(&`NotificationCenterLogging::Instance'::`2'::wrapper, 0, &v21, &Context) && v21 )
    {
      Context = qword_1804387D8;
      qword_1804387D8[0] = &LockScreenServiceLogging::`vftable';
      qword_1804387F0 = (struct _TlgProvider_t *)&`NotificationCenterLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_f4c52185d8a4a8e42bb1421645a7adf9_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1804387D8, qword_1804387F0);
      InitOnceComplete(&`NotificationCenterLogging::Instance'::`2'::wrapper, 0, qword_1804387D8);
    }
    if ( **((_DWORD **)Context + 1) > 5u )
    {
      v8 = (const CHAR *)*((_QWORD *)v4 + 6);
      v22 = v4[1];
      v27 = &v22;
      v28 = 4LL;
      TlgCreateSz(&pDesc, v8);
      v9 = (const CHAR *)*((_QWORD *)v4 + 15);
      v30 = v4 + 14;
      v31 = 4LL;
      TlgCreateSz(&v32, v9);
      v10 = (const WCHAR *)*((_QWORD *)v4 + 2);
      v23 = *v4;
      v33 = &v23;
      v34 = 4LL;
      TlgCreateWsz(&v35, v10);
      v11 = (const CHAR *)*((_QWORD *)v4 + 8);
      v24 = v4[6];
      v36 = &v24;
      v37 = 4LL;
      TlgCreateSz(&v38, v11);
      v12 = (const CHAR *)*((_QWORD *)v4 + 10);
      v25 = v4[18];
      v39 = &v25;
      v40 = 4LL;
      TlgCreateSz(&v41, v12);
      TlgCreateWsz(&v42, *((LPCWSTR *)v4 + 11));
      v13 = (const CHAR *)*((_QWORD *)v4 + 13);
      v17 = v4[24];
      v43 = &v17;
      v44 = 4LL;
      TlgCreateSz(&v45, v13);
      TlgCreateWsz(&v46, *((LPCWSTR *)v4 + 14));
      v14 = v4[2];
      v15 = (const CHAR *)*((_QWORD *)v4 + 5);
      v47 = &v18;
      fPending = v4[15];
      v18 = v14;
      p_fPending = &fPending;
      v48 = 4LL;
      v50 = 4LL;
      TlgCreateSz(&v51, v15);
      TlgWrite(v16, &unk_18038AFD9, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x13u, &v26);
    }
  }
  else
  {
    if ( InitOnceBeginInitialize(&`NotificationCenterLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
      && fPending )
    {
      Context = qword_1804387D8;
      qword_1804387D8[0] = &LockScreenServiceLogging::`vftable';
      qword_1804387F0 = (struct _TlgProvider_t *)&`NotificationCenterLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_f4c52185d8a4a8e42bb1421645a7adf9_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1804387D8, qword_1804387F0);
      InitOnceComplete(&`NotificationCenterLogging::Instance'::`2'::wrapper, 0, qword_1804387D8);
    }
    v5 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
    if ( *(_DWORD *)v5 > 5u )
    {
      v6 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v53 = &v18;
      v18 = v6;
      v54 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      v56 = 4LL;
      v17 = CurrentThreadId;
      v55 = &v17;
      TlgWrite(v5, &unk_18038B10D, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 4u, &pData);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ViewUncloakingActivity *)((char *)this + 8));
}
