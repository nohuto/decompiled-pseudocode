/*
 * XREFs of ?StopActivity@LauncherInvokeActivity@CommonStartTelemetry@@MEAAXXZ @ 0x180079D40
 * Callers:
 *     ?Stop@?$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18007A3DC (-Stop@-$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0.c)
 *     ?Destroy@?$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18007A67C (-Destroy@-$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Par.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18001833C (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgCreateWsz @ 0x180058BCC (_TlgCreateWsz.c)
 *     _TlgCreateSz @ 0x180058D78 (_TlgCreateSz.c)
 *     _TlgKeywordOn @ 0x18005AB44 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x18005AB68 (_TlgWrite.c)
 *     ?zInternalStop@?$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18007A5A4 (-zInternalStop@-$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorT.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

void __fastcall CommonStartTelemetry::LauncherInvokeActivity::StopActivity(
        CommonStartTelemetry::LauncherInvokeActivity *this)
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
  TraceLoggingHProvider v15; // r10
  WINBOOL v16; // [rsp+38h] [rbp-D0h] BYREF
  int v17; // [rsp+3Ch] [rbp-CCh] BYREF
  int v18; // [rsp+40h] [rbp-C8h] BYREF
  int v19; // [rsp+44h] [rbp-C4h] BYREF
  int v20; // [rsp+48h] [rbp-C0h] BYREF
  int v21; // [rsp+4Ch] [rbp-BCh] BYREF
  WINBOOL fPending; // [rsp+50h] [rbp-B8h] BYREF
  int v23; // [rsp+54h] [rbp-B4h] BYREF
  __int64 v24; // [rsp+58h] [rbp-B0h] BYREF
  LPVOID v25; // [rsp+60h] [rbp-A8h] BYREF
  LPVOID Context; // [rsp+68h] [rbp-A0h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+70h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+88h] [rbp-80h] BYREF
  void *v29; // [rsp+98h] [rbp-70h]
  int v30; // [rsp+A0h] [rbp-68h]
  int v31; // [rsp+A4h] [rbp-64h]
  int *v32; // [rsp+A8h] [rbp-60h]
  __int64 v33; // [rsp+B0h] [rbp-58h]
  __int64 *v34; // [rsp+B8h] [rbp-50h]
  __int64 v35; // [rsp+C0h] [rbp-48h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+C8h] [rbp-40h] BYREF
  int *v37; // [rsp+E8h] [rbp-20h]
  __int64 v38; // [rsp+F0h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+F8h] [rbp-10h] BYREF
  int *v40; // [rsp+108h] [rbp+0h]
  __int64 v41; // [rsp+110h] [rbp+8h]
  struct _EVENT_DATA_DESCRIPTOR v42; // [rsp+118h] [rbp+10h] BYREF
  int *v43; // [rsp+128h] [rbp+20h]
  __int64 v44; // [rsp+130h] [rbp+28h]
  struct _EVENT_DATA_DESCRIPTOR v45; // [rsp+138h] [rbp+30h] BYREF
  int *v46; // [rsp+148h] [rbp+40h]
  __int64 v47; // [rsp+150h] [rbp+48h]
  struct _EVENT_DATA_DESCRIPTOR v48; // [rsp+158h] [rbp+50h] BYREF
  int *v49; // [rsp+168h] [rbp+60h]
  __int64 v50; // [rsp+170h] [rbp+68h]
  struct _EVENT_DATA_DESCRIPTOR v51; // [rsp+178h] [rbp+70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v52; // [rsp+188h] [rbp+80h] BYREF
  int *v53; // [rsp+198h] [rbp+90h]
  __int64 v54; // [rsp+1A0h] [rbp+98h]
  struct _EVENT_DATA_DESCRIPTOR v55; // [rsp+1A8h] [rbp+A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v56; // [rsp+1B8h] [rbp+B0h] BYREF

  v1 = (int *)*((_QWORD *)this + 6);
  v3 = v1[19];
  if ( v3 < 0 && v3 == v1[21] )
    v4 = v1 + 20;
  else
    v4 = 0LL;
  wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::zInternalStop();
  if ( v4 )
  {
    v25 = 0LL;
    if ( InitOnceBeginInitialize(&`CommonStartTelemetryLogging::Instance'::`2'::wrapper, 0, &v16, &v25) && v16 )
    {
      v25 = qword_1804389D0;
      qword_1804389D0[0] = &LockScreenServiceLogging::`vftable';
      qword_1804389E8 = (struct _TlgProvider_t *)&`CommonStartTelemetryLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_d4015babfde9ac14d130539030d425b5_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1804389D0, qword_1804389E8);
      InitOnceComplete(&`CommonStartTelemetryLogging::Instance'::`2'::wrapper, 0, qword_1804389D0);
    }
    if ( **((_DWORD **)v25 + 1) > 5u && TlgKeywordOn(*((TraceLoggingHProvider *)v25 + 1), 0x400000000000uLL) )
    {
      v9 = (const CHAR *)*((_QWORD *)v4 + 6);
      v17 = v4[1];
      v37 = &v17;
      v38 = 4LL;
      TlgCreateSz(&pDesc, v9);
      v10 = (const CHAR *)*((_QWORD *)v4 + 15);
      v40 = v4 + 14;
      v41 = 4LL;
      TlgCreateSz(&v42, v10);
      v11 = (const WCHAR *)*((_QWORD *)v4 + 2);
      v18 = *v4;
      v43 = &v18;
      v44 = 4LL;
      TlgCreateWsz(&v45, v11);
      v12 = (const CHAR *)*((_QWORD *)v4 + 8);
      v19 = v4[6];
      v46 = &v19;
      v47 = 4LL;
      TlgCreateSz(&v48, v12);
      v13 = (const CHAR *)*((_QWORD *)v4 + 10);
      v20 = v4[18];
      v49 = &v20;
      v50 = 4LL;
      TlgCreateSz(&v51, v13);
      TlgCreateWsz(&v52, *((LPCWSTR *)v4 + 11));
      v14 = (const CHAR *)*((_QWORD *)v4 + 13);
      v21 = v4[24];
      v53 = &v21;
      v54 = 4LL;
      TlgCreateSz(&v55, v14);
      TlgCreateWsz(&v56, *((LPCWSTR *)v4 + 14));
      TlgWrite(v15, &unk_180398E3D, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x10u, &pData);
    }
  }
  else
  {
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`CommonStartTelemetryLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
      && fPending )
    {
      Context = qword_1804389D0;
      qword_1804389D0[0] = &LockScreenServiceLogging::`vftable';
      qword_1804389E8 = (struct _TlgProvider_t *)&`CommonStartTelemetryLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_d4015babfde9ac14d130539030d425b5_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1804389D0, qword_1804389E8);
      InitOnceComplete(&`CommonStartTelemetryLogging::Instance'::`2'::wrapper, 0, qword_1804389D0);
    }
    v5 = *((_QWORD *)Context + 1);
    if ( *(_DWORD *)v5 > 5u
      && (*(_QWORD *)(v5 + 16) & 0x400000000000LL) != 0
      && (*(_QWORD *)(v5 + 24) & 0x400000000000LL) == *(_QWORD *)(v5 + 24) )
    {
      v6 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v32 = &v23;
      v23 = v6;
      v33 = 4LL;
      LODWORD(v24) = GetCurrentThreadId();
      v34 = &v24;
      v35 = 4LL;
      v7 = (const GUID *)(*((_QWORD *)this + 6) + 8LL);
      *(_DWORD *)&EventDescriptor.Level = 517;
      UserData.Ptr = *(_QWORD *)(v5 + 8);
      *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180398F4B - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      v8 = *(_QWORD *)(v5 + 32);
      EventDescriptor.Keyword = 0x400000000000LL;
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      v29 = &unk_180398F56;
      UserData.Reserved = 2;
      v30 = 59;
      v31 = 1;
      EventWriteTransfer(v8, &EventDescriptor, v7, 0LL, 4u, &UserData);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((CommonStartTelemetry::LauncherInvokeActivity *)((char *)this + 8));
}
