/*
 * XREFs of ?StopActivity@OnEventQueued@SingleViewExperienceTelemetry@@MEAAXXZ @ 0x18008BBB0
 * Callers:
 *     ?ReportStopActivity@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x180019230 (-ReportStopActivity@-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Pa.c)
 * Callees:
 *     _TlgCreateWsz @ 0x180058BCC (_TlgCreateWsz.c)
 *     _TlgCreateSz @ 0x180058D78 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x18005AB68 (_TlgWrite.c)
 *     ?zInternalStop@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18006E38C (-zInternalStop@-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0I.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18010894C (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

void __fastcall SingleViewExperienceTelemetry::OnEventQueued::StopActivity(
        SingleViewExperienceTelemetry::OnEventQueued *this)
{
  int *v2; // rsi
  int v3; // eax
  int *v4; // rsi
  RTL_SRWLOCK *v5; // rsi
  char v6; // di
  RTL_SRWLOCK *v7; // rsi
  _QWORD *p_Context; // rax
  const struct _TlgProvider_t *v9; // rsi
  char *v10; // rbx
  __int64 *v11; // rcx
  __int64 v12; // rax
  const CHAR *v13; // rdx
  const CHAR *v14; // rdx
  const WCHAR *v15; // rdx
  const CHAR *v16; // rdx
  const CHAR *v17; // rdx
  const CHAR *v18; // rdx
  int v19; // ecx
  const CHAR *v20; // rdx
  TraceLoggingHProvider v21; // r10
  int v22; // ecx
  DWORD CurrentThreadId; // eax
  UINT32 cData; // [rsp+20h] [rbp-E0h]
  LPVOID Context; // [rsp+30h] [rbp-D0h] BYREF
  DWORD v26; // [rsp+38h] [rbp-C8h] BYREF
  int v27; // [rsp+3Ch] [rbp-C4h] BYREF
  WINBOOL fPending[2]; // [rsp+40h] [rbp-C0h] BYREF
  WINBOOL v29; // [rsp+48h] [rbp-B8h] BYREF
  int v30; // [rsp+4Ch] [rbp-B4h] BYREF
  int v31; // [rsp+50h] [rbp-B0h] BYREF
  int v32; // [rsp+54h] [rbp-ACh] BYREF
  int v33; // [rsp+58h] [rbp-A8h] BYREF
  EVENT_DATA_DESCRIPTOR v34; // [rsp+60h] [rbp-A0h] BYREF
  int *v35; // [rsp+80h] [rbp-80h]
  __int64 v36; // [rsp+88h] [rbp-78h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp-70h] BYREF
  int *v38; // [rsp+A0h] [rbp-60h]
  __int64 v39; // [rsp+A8h] [rbp-58h]
  struct _EVENT_DATA_DESCRIPTOR v40; // [rsp+B0h] [rbp-50h] BYREF
  int *v41; // [rsp+C0h] [rbp-40h]
  __int64 v42; // [rsp+C8h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR v43; // [rsp+D0h] [rbp-30h] BYREF
  int *v44; // [rsp+E0h] [rbp-20h]
  __int64 v45; // [rsp+E8h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR v46; // [rsp+F0h] [rbp-10h] BYREF
  int *v47; // [rsp+100h] [rbp+0h]
  __int64 v48; // [rsp+108h] [rbp+8h]
  struct _EVENT_DATA_DESCRIPTOR v49; // [rsp+110h] [rbp+10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v50; // [rsp+120h] [rbp+20h] BYREF
  DWORD *v51; // [rsp+130h] [rbp+30h]
  __int64 v52; // [rsp+138h] [rbp+38h]
  struct _EVENT_DATA_DESCRIPTOR v53; // [rsp+140h] [rbp+40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v54; // [rsp+150h] [rbp+50h] BYREF
  int *v55; // [rsp+160h] [rbp+60h]
  __int64 v56; // [rsp+168h] [rbp+68h]
  WINBOOL *v57; // [rsp+170h] [rbp+70h]
  __int64 v58; // [rsp+178h] [rbp+78h]
  struct _EVENT_DATA_DESCRIPTOR v59; // [rsp+180h] [rbp+80h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+190h] [rbp+90h] BYREF
  int *v61; // [rsp+1B0h] [rbp+B0h]
  __int64 v62; // [rsp+1B8h] [rbp+B8h]
  DWORD *v63; // [rsp+1C0h] [rbp+C0h]
  __int64 v64; // [rsp+1C8h] [rbp+C8h]
  wil::details::in1diag3 *retaddr; // [rsp+1F8h] [rbp+F8h]

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
    if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &v29, &Context) && v29 )
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
      v13 = (const CHAR *)*((_QWORD *)v4 + 6);
      v30 = v4[1];
      v35 = &v30;
      v36 = 4LL;
      TlgCreateSz(&pDesc, v13);
      v14 = (const CHAR *)*((_QWORD *)v4 + 15);
      v38 = v4 + 14;
      v39 = 4LL;
      TlgCreateSz(&v40, v14);
      v15 = (const WCHAR *)*((_QWORD *)v4 + 2);
      v31 = *v4;
      v41 = &v31;
      v42 = 4LL;
      TlgCreateWsz(&v43, v15);
      v16 = (const CHAR *)*((_QWORD *)v4 + 8);
      v32 = v4[6];
      v44 = &v32;
      v45 = 4LL;
      TlgCreateSz(&v46, v16);
      v17 = (const CHAR *)*((_QWORD *)v4 + 10);
      v33 = v4[18];
      v47 = &v33;
      v48 = 4LL;
      TlgCreateSz(&v49, v17);
      TlgCreateWsz(&v50, *((LPCWSTR *)v4 + 11));
      v18 = (const CHAR *)*((_QWORD *)v4 + 13);
      v26 = v4[24];
      v51 = &v26;
      v52 = 4LL;
      TlgCreateSz(&v53, v18);
      TlgCreateWsz(&v54, *((LPCWSTR *)v4 + 14));
      v19 = v4[2];
      v20 = (const CHAR *)*((_QWORD *)v4 + 5);
      v55 = &v27;
      fPending[0] = v4[15];
      v27 = v19;
      v57 = fPending;
      v56 = 4LL;
      v58 = 4LL;
      TlgCreateSz(&v59, v20);
      TlgWrite(v21, &unk_1803A028B, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x13u, &v34);
    }
  }
  else
  {
    v5 = (RTL_SRWLOCK *)*((_QWORD *)this + 38);
    if ( v5 )
    {
      v7 = v5 + 31;
      AcquireSRWLockExclusive(v7);
      p_Context = fPending;
      *(_QWORD *)fPending = v7;
      v6 = 1;
    }
    else
    {
      v6 = 2;
      Context = 0LL;
      v7 = 0LL;
      p_Context = &Context;
    }
    *p_Context = 0LL;
    if ( (v6 & 2) != 0 )
    {
      v6 &= ~2u;
      if ( Context )
        ReleaseSRWLockExclusive((PSRWLOCK)Context);
    }
    if ( (v6 & 1) != 0 && *(_QWORD *)fPending )
      ReleaseSRWLockExclusive(*(PSRWLOCK *)fPending);
    **((_DWORD **)this + 6) = 2;
    if ( v7 )
      ReleaseSRWLockExclusive(v7);
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
      v22 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v61 = &v27;
      v27 = v22;
      v62 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      v64 = 4LL;
      v26 = CurrentThreadId;
      v63 = &v26;
      TlgWrite(v9, &unk_1803A03B3, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 4u, &pData);
    }
  }
  if ( *((_DWORD *)this + 8) )
  {
    v10 = (char *)this + 8;
    if ( *((_DWORD *)v10 + 6) != GetCurrentThreadId() )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x3B1,
        (unsigned int)"internal\\sdk\\inc\\wil\\result.h",
        (const char *)0x8007029CLL,
        cData);
    v11 = *(__int64 **)v10;
    *((_DWORD *)v10 + 6) = 0;
    while ( 1 )
    {
      v12 = *v11;
      if ( !*v11 )
        break;
      if ( (char *)v12 == v10 )
      {
        *v11 = *((_QWORD *)v10 + 2);
        break;
      }
      v11 = (__int64 *)(v12 + 16);
      *(_QWORD *)v10 = v12 + 16;
    }
    *(_QWORD *)v10 = 0LL;
  }
}
