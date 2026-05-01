/*
 * XREFs of ?StopActivity@DismissActionCenter@NotificationCenterTelemetry@NotificationCenterUITelemetry@@MEAAXXZ @ 0x18007F540
 * Callers:
 *     ?Stop@?$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18007F37C (-Stop@-$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0Is.c)
 *     ?Destroy@?$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18007F4BC (-Destroy@-$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18001833C (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgCreateWsz @ 0x180058BCC (_TlgCreateWsz.c)
 *     _TlgCreateSz @ 0x180058D78 (_TlgCreateSz.c)
 *     ?zInternalStop@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180059028 (-zInternalStop@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03U_TlgReflectorTag_Param0IsProv.c)
 *     _TlgKeywordOn @ 0x18005AB44 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x18005AB68 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

void __fastcall NotificationCenterUITelemetry::NotificationCenterTelemetry::DismissActionCenter::StopActivity(
        NotificationCenterUITelemetry::NotificationCenterTelemetry::DismissActionCenter *this)
{
  int *v1; // rsi
  int v3; // eax
  int *v4; // rsi
  const struct _TlgProvider_t *v5; // rdi
  const CHAR *v6; // rdx
  const CHAR *v7; // rdx
  const WCHAR *v8; // rdx
  const CHAR *v9; // rdx
  const CHAR *v10; // rdx
  const CHAR *v11; // rdx
  TraceLoggingHProvider v12; // r10
  int v13; // ecx
  DWORD CurrentThreadId; // eax
  DWORD v15; // [rsp+38h] [rbp-D0h] BYREF
  int v16; // [rsp+3Ch] [rbp-CCh] BYREF
  WINBOOL fPending[2]; // [rsp+40h] [rbp-C8h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-C0h] BYREF
  WINBOOL v19; // [rsp+50h] [rbp-B8h] BYREF
  int v20; // [rsp+54h] [rbp-B4h] BYREF
  int v21; // [rsp+58h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-A0h] BYREF
  int *v23; // [rsp+88h] [rbp-80h]
  __int64 v24; // [rsp+90h] [rbp-78h]
  DWORD *v25; // [rsp+98h] [rbp-70h]
  __int64 v26; // [rsp+A0h] [rbp-68h]
  EVENT_DATA_DESCRIPTOR v27; // [rsp+A8h] [rbp-60h] BYREF
  int *v28; // [rsp+C8h] [rbp-40h]
  __int64 v29; // [rsp+D0h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+D8h] [rbp-30h] BYREF
  int *v31; // [rsp+E8h] [rbp-20h]
  __int64 v32; // [rsp+F0h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR v33; // [rsp+F8h] [rbp-10h] BYREF
  int *v34; // [rsp+108h] [rbp+0h]
  __int64 v35; // [rsp+110h] [rbp+8h]
  struct _EVENT_DATA_DESCRIPTOR v36; // [rsp+118h] [rbp+10h] BYREF
  DWORD *v37; // [rsp+128h] [rbp+20h]
  __int64 v38; // [rsp+130h] [rbp+28h]
  struct _EVENT_DATA_DESCRIPTOR v39; // [rsp+138h] [rbp+30h] BYREF
  int *v40; // [rsp+148h] [rbp+40h]
  __int64 v41; // [rsp+150h] [rbp+48h]
  struct _EVENT_DATA_DESCRIPTOR v42; // [rsp+158h] [rbp+50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v43; // [rsp+168h] [rbp+60h] BYREF
  WINBOOL *v44; // [rsp+178h] [rbp+70h]
  __int64 v45; // [rsp+180h] [rbp+78h]
  struct _EVENT_DATA_DESCRIPTOR v46; // [rsp+188h] [rbp+80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v47; // [rsp+198h] [rbp+90h] BYREF

  v1 = (int *)*((_QWORD *)this + 6);
  v3 = v1[19];
  if ( v3 < 0 && v3 == v1[21] )
    v4 = v1 + 20;
  else
    v4 = 0LL;
  wil::ActivityBase<CortanaProactiveLogging,1,0,4,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
  Context = 0LL;
  if ( v4 )
  {
    if ( InitOnceBeginInitialize(&`NotificationCenterLogging::Instance'::`2'::wrapper, 0, &v19, &Context) && v19 )
    {
      Context = qword_1804387D8;
      qword_1804387D8[0] = &LockScreenServiceLogging::`vftable';
      qword_1804387F0 = (struct _TlgProvider_t *)&`NotificationCenterLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_f4c52185d8a4a8e42bb1421645a7adf9_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1804387D8, qword_1804387F0);
      InitOnceComplete(&`NotificationCenterLogging::Instance'::`2'::wrapper, 0, qword_1804387D8);
    }
    if ( **((_DWORD **)Context + 1) > 5u && TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0x400000000000uLL) )
    {
      v6 = (const CHAR *)*((_QWORD *)v4 + 6);
      v20 = v4[1];
      v28 = &v20;
      v29 = 4LL;
      TlgCreateSz(&pDesc, v6);
      v7 = (const CHAR *)*((_QWORD *)v4 + 15);
      v31 = v4 + 14;
      v32 = 4LL;
      TlgCreateSz(&v33, v7);
      v8 = (const WCHAR *)*((_QWORD *)v4 + 2);
      v21 = *v4;
      v34 = &v21;
      v35 = 4LL;
      TlgCreateWsz(&v36, v8);
      v9 = (const CHAR *)*((_QWORD *)v4 + 8);
      v15 = v4[6];
      v37 = &v15;
      v38 = 4LL;
      TlgCreateSz(&v39, v9);
      v10 = (const CHAR *)*((_QWORD *)v4 + 10);
      v16 = v4[18];
      v40 = &v16;
      v41 = 4LL;
      TlgCreateSz(&v42, v10);
      TlgCreateWsz(&v43, *((LPCWSTR *)v4 + 11));
      v11 = (const CHAR *)*((_QWORD *)v4 + 13);
      fPending[0] = v4[24];
      v44 = fPending;
      v45 = 4LL;
      TlgCreateSz(&v46, v11);
      TlgCreateWsz(&v47, *((LPCWSTR *)v4 + 14));
      TlgWrite(v12, &unk_18038BC74, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x10u, &v27);
    }
  }
  else
  {
    if ( InitOnceBeginInitialize(&`NotificationCenterLogging::Instance'::`2'::wrapper, 0, fPending, &Context)
      && fPending[0] )
    {
      Context = qword_1804387D8;
      qword_1804387D8[0] = &LockScreenServiceLogging::`vftable';
      qword_1804387F0 = (struct _TlgProvider_t *)&`NotificationCenterLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_f4c52185d8a4a8e42bb1421645a7adf9_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1804387D8, qword_1804387F0);
      InitOnceComplete(&`NotificationCenterLogging::Instance'::`2'::wrapper, 0, qword_1804387D8);
    }
    v5 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
    if ( *(_DWORD *)v5 > 5u && TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0x400000000000uLL) )
    {
      v13 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v23 = &v16;
      v16 = v13;
      v24 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      v26 = 4LL;
      v15 = CurrentThreadId;
      v25 = &v15;
      TlgWrite(v5, &unk_18038BC30, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 4u, &pData);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((NotificationCenterUITelemetry::NotificationCenterTelemetry::DismissActionCenter *)((char *)this + 8));
}
