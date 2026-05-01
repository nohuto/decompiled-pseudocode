/*
 * XREFs of ?StopActivity@EM_RaiseApplicationEventActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@MEAAXXZ @ 0x18007D540
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

void __fastcall NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_RaiseApplicationEventActivity::StopActivity(
        NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_RaiseApplicationEventActivity *this)
{
  int *v1; // rsi
  int v3; // eax
  int *v4; // rsi
  __int64 v5; // rdi
  int v6; // ecx
  const GUID *v7; // r8
  REGHANDLE v8; // rcx
  const CHAR *v9; // rdx
  const CHAR *v10; // rdx
  const WCHAR *v11; // rdx
  const CHAR *v12; // rdx
  const CHAR *v13; // rdx
  const CHAR *v14; // rdx
  int v15; // ecx
  const CHAR *v16; // rdx
  TraceLoggingHProvider v17; // r10
  WINBOOL v18; // [rsp+38h] [rbp-D0h] BYREF
  int v19; // [rsp+3Ch] [rbp-CCh] BYREF
  int v20; // [rsp+40h] [rbp-C8h] BYREF
  int v21; // [rsp+44h] [rbp-C4h] BYREF
  int v22; // [rsp+48h] [rbp-C0h] BYREF
  int v23; // [rsp+4Ch] [rbp-BCh] BYREF
  int v24; // [rsp+50h] [rbp-B8h] BYREF
  int v25; // [rsp+54h] [rbp-B4h] BYREF
  WINBOOL fPending; // [rsp+58h] [rbp-B0h] BYREF
  int v27; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 v28; // [rsp+60h] [rbp-A8h] BYREF
  LPVOID v29; // [rsp+68h] [rbp-A0h] BYREF
  LPVOID Context; // [rsp+70h] [rbp-98h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+78h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+88h] [rbp-80h] BYREF
  void *v33; // [rsp+98h] [rbp-70h]
  int v34; // [rsp+A0h] [rbp-68h]
  int v35; // [rsp+A4h] [rbp-64h]
  int *v36; // [rsp+A8h] [rbp-60h]
  __int64 v37; // [rsp+B0h] [rbp-58h]
  __int64 *v38; // [rsp+B8h] [rbp-50h]
  __int64 v39; // [rsp+C0h] [rbp-48h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+C8h] [rbp-40h] BYREF
  int *v41; // [rsp+E8h] [rbp-20h]
  __int64 v42; // [rsp+F0h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+F8h] [rbp-10h] BYREF
  int *v44; // [rsp+108h] [rbp+0h]
  __int64 v45; // [rsp+110h] [rbp+8h]
  struct _EVENT_DATA_DESCRIPTOR v46; // [rsp+118h] [rbp+10h] BYREF
  int *v47; // [rsp+128h] [rbp+20h]
  __int64 v48; // [rsp+130h] [rbp+28h]
  struct _EVENT_DATA_DESCRIPTOR v49; // [rsp+138h] [rbp+30h] BYREF
  int *v50; // [rsp+148h] [rbp+40h]
  __int64 v51; // [rsp+150h] [rbp+48h]
  struct _EVENT_DATA_DESCRIPTOR v52; // [rsp+158h] [rbp+50h] BYREF
  int *v53; // [rsp+168h] [rbp+60h]
  __int64 v54; // [rsp+170h] [rbp+68h]
  struct _EVENT_DATA_DESCRIPTOR v55; // [rsp+178h] [rbp+70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v56; // [rsp+188h] [rbp+80h] BYREF
  int *v57; // [rsp+198h] [rbp+90h]
  __int64 v58; // [rsp+1A0h] [rbp+98h]
  struct _EVENT_DATA_DESCRIPTOR v59; // [rsp+1A8h] [rbp+A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v60; // [rsp+1B8h] [rbp+B0h] BYREF
  int *v61; // [rsp+1C8h] [rbp+C0h]
  __int64 v62; // [rsp+1D0h] [rbp+C8h]
  int *v63; // [rsp+1D8h] [rbp+D0h]
  __int64 v64; // [rsp+1E0h] [rbp+D8h]
  struct _EVENT_DATA_DESCRIPTOR v65; // [rsp+1E8h] [rbp+E0h] BYREF

  v1 = (int *)*((_QWORD *)this + 6);
  v3 = v1[19];
  if ( v3 < 0 && v3 == v1[21] )
    v4 = v1 + 20;
  else
    v4 = 0LL;
  wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
  if ( v4 )
  {
    v29 = 0LL;
    if ( InitOnceBeginInitialize(&`NotificationCenterLogging::Instance'::`2'::wrapper, 0, &v18, &v29) && v18 )
    {
      v29 = qword_1804387D8;
      qword_1804387D8[0] = &LockScreenServiceLogging::`vftable';
      qword_1804387F0 = (struct _TlgProvider_t *)&`NotificationCenterLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_f4c52185d8a4a8e42bb1421645a7adf9_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1804387D8, qword_1804387F0);
      InitOnceComplete(&`NotificationCenterLogging::Instance'::`2'::wrapper, 0, qword_1804387D8);
    }
    if ( **((_DWORD **)v29 + 1) > 5u )
    {
      v9 = (const CHAR *)*((_QWORD *)v4 + 6);
      v19 = v4[1];
      v41 = &v19;
      v42 = 4LL;
      TlgCreateSz(&pDesc, v9);
      v10 = (const CHAR *)*((_QWORD *)v4 + 15);
      v44 = v4 + 14;
      v45 = 4LL;
      TlgCreateSz(&v46, v10);
      v11 = (const WCHAR *)*((_QWORD *)v4 + 2);
      v20 = *v4;
      v47 = &v20;
      v48 = 4LL;
      TlgCreateWsz(&v49, v11);
      v12 = (const CHAR *)*((_QWORD *)v4 + 8);
      v21 = v4[6];
      v50 = &v21;
      v51 = 4LL;
      TlgCreateSz(&v52, v12);
      v13 = (const CHAR *)*((_QWORD *)v4 + 10);
      v22 = v4[18];
      v53 = &v22;
      v54 = 4LL;
      TlgCreateSz(&v55, v13);
      TlgCreateWsz(&v56, *((LPCWSTR *)v4 + 11));
      v14 = (const CHAR *)*((_QWORD *)v4 + 13);
      v23 = v4[24];
      v57 = &v23;
      v58 = 4LL;
      TlgCreateSz(&v59, v14);
      TlgCreateWsz(&v60, *((LPCWSTR *)v4 + 14));
      v15 = v4[2];
      v16 = (const CHAR *)*((_QWORD *)v4 + 5);
      v61 = &v24;
      v25 = v4[15];
      v24 = v15;
      v63 = &v25;
      v62 = 4LL;
      v64 = 4LL;
      TlgCreateSz(&v65, v16);
      TlgWrite(v17, &unk_18038BA4F, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x13u, &pData);
    }
  }
  else
  {
    Context = 0LL;
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
    v5 = *((_QWORD *)Context + 1);
    if ( *(_DWORD *)v5 > 5u )
    {
      v6 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v36 = &v27;
      v27 = v6;
      v37 = 4LL;
      LODWORD(v28) = GetCurrentThreadId();
      v38 = &v28;
      v39 = 4LL;
      v7 = (const GUID *)(*((_QWORD *)this + 6) + 8LL);
      *(_DWORD *)&EventDescriptor.Level = 517;
      UserData.Ptr = *(_QWORD *)(v5 + 8);
      *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_18038B9FE - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      v8 = *(_QWORD *)(v5 + 32);
      EventDescriptor.Keyword = 0LL;
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      v33 = &unk_18038BA09;
      UserData.Reserved = 2;
      v34 = 69;
      v35 = 1;
      EventWriteTransfer(v8, &EventDescriptor, v7, 0LL, 4u, &UserData);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_RaiseApplicationEventActivity *)((char *)this + 8));
}
