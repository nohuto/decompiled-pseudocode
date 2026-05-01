/*
 * XREFs of ?StopActivity@CortanaExperienceManager_ShowWithStart@CortanaProactiveTelemetry@@MEAAXXZ @ 0x1800746D0
 * Callers:
 *     ?ReportStopActivity@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x180074F70 (-ReportStopActivity@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03U_TlgReflectorTag_Param0I.c)
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

void __fastcall CortanaProactiveTelemetry::CortanaExperienceManager_ShowWithStart::StopActivity(
        CortanaProactiveTelemetry::CortanaExperienceManager_ShowWithStart *this)
{
  int *v1; // rsi
  int v3; // eax
  int *v4; // rsi
  __int64 v5; // rsi
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
  WINBOOL v18; // [rsp+30h] [rbp-D0h] BYREF
  int v19; // [rsp+34h] [rbp-CCh] BYREF
  int v20; // [rsp+38h] [rbp-C8h] BYREF
  int v21; // [rsp+3Ch] [rbp-C4h] BYREF
  int v22; // [rsp+40h] [rbp-C0h] BYREF
  int v23; // [rsp+44h] [rbp-BCh] BYREF
  int v24; // [rsp+48h] [rbp-B8h] BYREF
  int v25; // [rsp+4Ch] [rbp-B4h] BYREF
  WINBOOL fPending; // [rsp+50h] [rbp-B0h] BYREF
  int v27; // [rsp+54h] [rbp-ACh] BYREF
  DWORD CurrentThreadId; // [rsp+58h] [rbp-A8h] BYREF
  LPVOID v29; // [rsp+60h] [rbp-A0h] BYREF
  LPVOID Context; // [rsp+68h] [rbp-98h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+80h] [rbp-80h] BYREF
  void *v33; // [rsp+90h] [rbp-70h]
  int v34; // [rsp+98h] [rbp-68h]
  int v35; // [rsp+9Ch] [rbp-64h]
  int *v36; // [rsp+A0h] [rbp-60h]
  __int64 v37; // [rsp+A8h] [rbp-58h]
  DWORD *p_CurrentThreadId; // [rsp+B0h] [rbp-50h]
  __int64 v39; // [rsp+B8h] [rbp-48h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+C0h] [rbp-40h] BYREF
  int *v41; // [rsp+E0h] [rbp-20h]
  __int64 v42; // [rsp+E8h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+F0h] [rbp-10h] BYREF
  int *v44; // [rsp+100h] [rbp+0h]
  __int64 v45; // [rsp+108h] [rbp+8h]
  struct _EVENT_DATA_DESCRIPTOR v46; // [rsp+110h] [rbp+10h] BYREF
  int *v47; // [rsp+120h] [rbp+20h]
  __int64 v48; // [rsp+128h] [rbp+28h]
  struct _EVENT_DATA_DESCRIPTOR v49; // [rsp+130h] [rbp+30h] BYREF
  int *v50; // [rsp+140h] [rbp+40h]
  __int64 v51; // [rsp+148h] [rbp+48h]
  struct _EVENT_DATA_DESCRIPTOR v52; // [rsp+150h] [rbp+50h] BYREF
  int *v53; // [rsp+160h] [rbp+60h]
  __int64 v54; // [rsp+168h] [rbp+68h]
  struct _EVENT_DATA_DESCRIPTOR v55; // [rsp+170h] [rbp+70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v56; // [rsp+180h] [rbp+80h] BYREF
  int *v57; // [rsp+190h] [rbp+90h]
  __int64 v58; // [rsp+198h] [rbp+98h]
  struct _EVENT_DATA_DESCRIPTOR v59; // [rsp+1A0h] [rbp+A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v60; // [rsp+1B0h] [rbp+B0h] BYREF
  int *v61; // [rsp+1C0h] [rbp+C0h]
  __int64 v62; // [rsp+1C8h] [rbp+C8h]
  int *v63; // [rsp+1D0h] [rbp+D0h]
  __int64 v64; // [rsp+1D8h] [rbp+D8h]
  struct _EVENT_DATA_DESCRIPTOR v65; // [rsp+1E0h] [rbp+E0h] BYREF

  v1 = (int *)*((_QWORD *)this + 6);
  v3 = v1[19];
  if ( v3 < 0 && v3 == v1[21] )
    v4 = v1 + 20;
  else
    v4 = 0LL;
  wil::ActivityBase<CortanaProactiveLogging,1,0,4,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
  if ( v4 )
  {
    v29 = 0LL;
    if ( InitOnceBeginInitialize(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, &v18, &v29) && v18 )
    {
      v29 = &qword_180438828;
      qword_180438828 = &LockScreenServiceLogging::`vftable';
      qword_180438840 = (struct _TlgProvider_t *)&`CortanaProactiveLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_0a4c5659e8368aeb314f53434332ab54_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_180438828, qword_180438840);
      InitOnceComplete(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, &qword_180438828);
    }
    if ( **((_DWORD **)v29 + 1) > 4u )
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
      TlgWrite(v17, &unk_180390C8A, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x13u, &pData);
    }
  }
  else
  {
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
    {
      Context = &qword_180438828;
      qword_180438828 = &LockScreenServiceLogging::`vftable';
      qword_180438840 = (struct _TlgProvider_t *)&`CortanaProactiveLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_0a4c5659e8368aeb314f53434332ab54_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_180438828, qword_180438840);
      InitOnceComplete(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, &qword_180438828);
    }
    v5 = *((_QWORD *)Context + 1);
    if ( *(_DWORD *)v5 > 4u )
    {
      v6 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v36 = &v27;
      v27 = v6;
      v37 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      p_CurrentThreadId = &CurrentThreadId;
      v39 = 4LL;
      v7 = (const GUID *)(*((_QWORD *)this + 6) + 8LL);
      *(_DWORD *)&EventDescriptor.Level = 516;
      UserData.Ptr = *(_QWORD *)(v5 + 8);
      *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180390C33 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      v8 = *(_QWORD *)(v5 + 32);
      EventDescriptor.Keyword = 0LL;
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      v33 = &unk_180390C3E;
      UserData.Reserved = 2;
      v34 = 75;
      v35 = 1;
      EventWriteTransfer(v8, &EventDescriptor, v7, 0LL, 4u, &UserData);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((CortanaProactiveTelemetry::CortanaExperienceManager_ShowWithStart *)((char *)this + 8));
}
