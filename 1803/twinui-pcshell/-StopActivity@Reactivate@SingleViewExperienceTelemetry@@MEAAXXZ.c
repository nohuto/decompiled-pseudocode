/*
 * XREFs of ?StopActivity@Reactivate@SingleViewExperienceTelemetry@@MEAAXXZ @ 0x18008AD30
 * Callers:
 *     ?ReportStopActivity@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x180019230 (-ReportStopActivity@-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Pa.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18001833C (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgCreateWsz @ 0x180058BCC (_TlgCreateWsz.c)
 *     _TlgCreateSz @ 0x180058D78 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x18005AB68 (_TlgWrite.c)
 *     ?zInternalStop@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18006E38C (-zInternalStop@-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0I.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

void __fastcall SingleViewExperienceTelemetry::Reactivate::StopActivity(
        SingleViewExperienceTelemetry::Reactivate *this)
{
  int *v2; // rsi
  int v3; // eax
  int *v4; // rsi
  RTL_SRWLOCK *v5; // rsi
  RTL_SRWLOCK *v6; // rsi
  _QWORD *p_Context; // rax
  char v8; // di
  const struct _TlgProvider_t *v9; // rsi
  const CHAR *v10; // rdx
  const CHAR *v11; // rdx
  const WCHAR *v12; // rdx
  const CHAR *v13; // rdx
  const CHAR *v14; // rdx
  const CHAR *v15; // rdx
  int v16; // ecx
  const CHAR *v17; // rdx
  TraceLoggingHProvider v18; // r10
  int v19; // ecx
  DWORD CurrentThreadId; // eax
  LPVOID Context; // [rsp+30h] [rbp-D0h] BYREF
  DWORD v22; // [rsp+38h] [rbp-C8h] BYREF
  int v23; // [rsp+3Ch] [rbp-C4h] BYREF
  WINBOOL fPending[2]; // [rsp+40h] [rbp-C0h] BYREF
  WINBOOL v25; // [rsp+48h] [rbp-B8h] BYREF
  int v26; // [rsp+4Ch] [rbp-B4h] BYREF
  int v27; // [rsp+50h] [rbp-B0h] BYREF
  int v28; // [rsp+54h] [rbp-ACh] BYREF
  int v29; // [rsp+58h] [rbp-A8h] BYREF
  EVENT_DATA_DESCRIPTOR v30; // [rsp+60h] [rbp-A0h] BYREF
  int *v31; // [rsp+80h] [rbp-80h]
  __int64 v32; // [rsp+88h] [rbp-78h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp-70h] BYREF
  int *v34; // [rsp+A0h] [rbp-60h]
  __int64 v35; // [rsp+A8h] [rbp-58h]
  struct _EVENT_DATA_DESCRIPTOR v36; // [rsp+B0h] [rbp-50h] BYREF
  int *v37; // [rsp+C0h] [rbp-40h]
  __int64 v38; // [rsp+C8h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR v39; // [rsp+D0h] [rbp-30h] BYREF
  int *v40; // [rsp+E0h] [rbp-20h]
  __int64 v41; // [rsp+E8h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR v42; // [rsp+F0h] [rbp-10h] BYREF
  int *v43; // [rsp+100h] [rbp+0h]
  __int64 v44; // [rsp+108h] [rbp+8h]
  struct _EVENT_DATA_DESCRIPTOR v45; // [rsp+110h] [rbp+10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v46; // [rsp+120h] [rbp+20h] BYREF
  DWORD *v47; // [rsp+130h] [rbp+30h]
  __int64 v48; // [rsp+138h] [rbp+38h]
  struct _EVENT_DATA_DESCRIPTOR v49; // [rsp+140h] [rbp+40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v50; // [rsp+150h] [rbp+50h] BYREF
  int *v51; // [rsp+160h] [rbp+60h]
  __int64 v52; // [rsp+168h] [rbp+68h]
  WINBOOL *v53; // [rsp+170h] [rbp+70h]
  __int64 v54; // [rsp+178h] [rbp+78h]
  struct _EVENT_DATA_DESCRIPTOR v55; // [rsp+180h] [rbp+80h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+190h] [rbp+90h] BYREF
  int *v57; // [rsp+1B0h] [rbp+B0h]
  __int64 v58; // [rsp+1B8h] [rbp+B8h]
  DWORD *v59; // [rsp+1C0h] [rbp+C0h]
  __int64 v60; // [rsp+1C8h] [rbp+C8h]

  fPending[0] = 0;
  v2 = (int *)*((_QWORD *)this + 6);
  v3 = v2[19];
  if ( v3 < 0 && v3 == v2[21] )
    v4 = v2 + 20;
  else
    v4 = 0LL;
  if ( v4 )
  {
    wil::ActivityBase<SingleViewExperienceLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &v25, &Context) && v25 )
    {
      Context = qword_180438800;
      qword_180438800[0] = &LockScreenServiceLogging::`vftable';
      qword_180438818 = (struct _TlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438800, qword_180438818);
      InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_180438800);
    }
    if ( **((_DWORD **)Context + 1) > 5u )
    {
      v10 = (const CHAR *)*((_QWORD *)v4 + 6);
      v26 = v4[1];
      v31 = &v26;
      v32 = 4LL;
      TlgCreateSz(&pDesc, v10);
      v11 = (const CHAR *)*((_QWORD *)v4 + 15);
      v34 = v4 + 14;
      v35 = 4LL;
      TlgCreateSz(&v36, v11);
      v12 = (const WCHAR *)*((_QWORD *)v4 + 2);
      v27 = *v4;
      v37 = &v27;
      v38 = 4LL;
      TlgCreateWsz(&v39, v12);
      v13 = (const CHAR *)*((_QWORD *)v4 + 8);
      v28 = v4[6];
      v40 = &v28;
      v41 = 4LL;
      TlgCreateSz(&v42, v13);
      v14 = (const CHAR *)*((_QWORD *)v4 + 10);
      v29 = v4[18];
      v43 = &v29;
      v44 = 4LL;
      TlgCreateSz(&v45, v14);
      TlgCreateWsz(&v46, *((LPCWSTR *)v4 + 11));
      v15 = (const CHAR *)*((_QWORD *)v4 + 13);
      v22 = v4[24];
      v47 = &v22;
      v48 = 4LL;
      TlgCreateSz(&v49, v15);
      TlgCreateWsz(&v50, *((LPCWSTR *)v4 + 14));
      v16 = v4[2];
      v17 = (const CHAR *)*((_QWORD *)v4 + 5);
      v51 = &v23;
      fPending[0] = v4[15];
      v23 = v16;
      v53 = fPending;
      v52 = 4LL;
      v54 = 4LL;
      TlgCreateSz(&v55, v17);
      TlgWrite(v18, &unk_1803A09F6, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x13u, &v30);
    }
  }
  else
  {
    v5 = (RTL_SRWLOCK *)*((_QWORD *)this + 38);
    if ( v5 )
    {
      v6 = v5 + 31;
      AcquireSRWLockExclusive(v6);
      p_Context = fPending;
      *(_QWORD *)fPending = v6;
      v8 = 1;
    }
    else
    {
      Context = 0LL;
      p_Context = &Context;
      v8 = 2;
      v6 = 0LL;
    }
    *p_Context = 0LL;
    if ( (v8 & 2) != 0 )
    {
      v8 &= ~2u;
      if ( Context )
        ReleaseSRWLockExclusive((PSRWLOCK)Context);
    }
    if ( (v8 & 1) != 0 && *(_QWORD *)fPending )
      ReleaseSRWLockExclusive(*(PSRWLOCK *)fPending);
    **((_DWORD **)this + 6) = 2;
    if ( v6 )
      ReleaseSRWLockExclusive(v6);
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, fPending, &Context)
      && fPending[0] )
    {
      Context = qword_180438800;
      qword_180438800[0] = &LockScreenServiceLogging::`vftable';
      qword_180438818 = (struct _TlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438800, qword_180438818);
      InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_180438800);
    }
    v9 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
    if ( *(_DWORD *)v9 > 5u )
    {
      v19 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v57 = &v23;
      v23 = v19;
      v58 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      v60 = 4LL;
      v22 = CurrentThreadId;
      v59 = &v22;
      TlgWrite(v9, &unk_1803A0B1B, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 4u, &pData);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((SingleViewExperienceTelemetry::Reactivate *)((char *)this + 8));
}
