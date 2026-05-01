/*
 * XREFs of ?StopActivity@LaunchCompleted@SingleViewExperienceTelemetry@@MEAAXXZ @ 0x180070D60
 * Callers:
 *     ?ReportStopActivity@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x180019230 (-ReportStopActivity@-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Pa.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18001833C (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?LockExclusive@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180019194 (-LockExclusive@-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0I.c)
 *     _TlgCreateWsz @ 0x180058BCC (_TlgCreateWsz.c)
 *     _TlgCreateSz @ 0x180058D78 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x18005AB68 (_TlgWrite.c)
 *     ?zInternalStop@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18006E38C (-zInternalStop@-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0I.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

void __fastcall SingleViewExperienceTelemetry::LaunchCompleted::StopActivity(
        SingleViewExperienceTelemetry::LaunchCompleted *this)
{
  int *v1; // rsi
  int v3; // eax
  int *v4; // rsi
  RTL_SRWLOCK *v5; // rcx
  const struct _TlgProvider_t *v6; // rsi
  const CHAR *v7; // rdx
  const CHAR *v8; // rdx
  const WCHAR *v9; // rdx
  const CHAR *v10; // rdx
  const CHAR *v11; // rdx
  const CHAR *v12; // rdx
  int v13; // ecx
  const CHAR *v14; // rdx
  TraceLoggingHProvider v15; // r10
  int v16; // ecx
  DWORD CurrentThreadId; // eax
  LPVOID Context; // [rsp+30h] [rbp-D0h] BYREF
  DWORD v19; // [rsp+38h] [rbp-C8h] BYREF
  int v20; // [rsp+3Ch] [rbp-C4h] BYREF
  WINBOOL fPending; // [rsp+40h] [rbp-C0h] BYREF
  WINBOOL v22; // [rsp+44h] [rbp-BCh] BYREF
  int v23; // [rsp+48h] [rbp-B8h] BYREF
  int v24; // [rsp+4Ch] [rbp-B4h] BYREF
  int v25; // [rsp+50h] [rbp-B0h] BYREF
  int v26; // [rsp+54h] [rbp-ACh] BYREF
  EVENT_DATA_DESCRIPTOR v27; // [rsp+60h] [rbp-A0h] BYREF
  int *v28; // [rsp+80h] [rbp-80h]
  __int64 v29; // [rsp+88h] [rbp-78h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp-70h] BYREF
  int *v31; // [rsp+A0h] [rbp-60h]
  __int64 v32; // [rsp+A8h] [rbp-58h]
  struct _EVENT_DATA_DESCRIPTOR v33; // [rsp+B0h] [rbp-50h] BYREF
  int *v34; // [rsp+C0h] [rbp-40h]
  __int64 v35; // [rsp+C8h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR v36; // [rsp+D0h] [rbp-30h] BYREF
  int *v37; // [rsp+E0h] [rbp-20h]
  __int64 v38; // [rsp+E8h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR v39; // [rsp+F0h] [rbp-10h] BYREF
  int *v40; // [rsp+100h] [rbp+0h]
  __int64 v41; // [rsp+108h] [rbp+8h]
  struct _EVENT_DATA_DESCRIPTOR v42; // [rsp+110h] [rbp+10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v43; // [rsp+120h] [rbp+20h] BYREF
  DWORD *v44; // [rsp+130h] [rbp+30h]
  __int64 v45; // [rsp+138h] [rbp+38h]
  struct _EVENT_DATA_DESCRIPTOR v46; // [rsp+140h] [rbp+40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v47; // [rsp+150h] [rbp+50h] BYREF
  int *v48; // [rsp+160h] [rbp+60h]
  __int64 v49; // [rsp+168h] [rbp+68h]
  WINBOOL *p_fPending; // [rsp+170h] [rbp+70h]
  __int64 v51; // [rsp+178h] [rbp+78h]
  struct _EVENT_DATA_DESCRIPTOR v52; // [rsp+180h] [rbp+80h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+190h] [rbp+90h] BYREF
  int *v54; // [rsp+1B0h] [rbp+B0h]
  __int64 v55; // [rsp+1B8h] [rbp+B8h]
  DWORD *v56; // [rsp+1C0h] [rbp+C0h]
  __int64 v57; // [rsp+1C8h] [rbp+C8h]

  v1 = (int *)*((_QWORD *)this + 6);
  v3 = v1[19];
  if ( v3 < 0 && v3 == v1[21] )
    v4 = v1 + 20;
  else
    v4 = 0LL;
  if ( v4 )
  {
    wil::ActivityBase<SingleViewExperienceLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &v22, &Context) && v22 )
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
      v7 = (const CHAR *)*((_QWORD *)v4 + 6);
      v23 = v4[1];
      v28 = &v23;
      v29 = 4LL;
      TlgCreateSz(&pDesc, v7);
      v8 = (const CHAR *)*((_QWORD *)v4 + 15);
      v31 = v4 + 14;
      v32 = 4LL;
      TlgCreateSz(&v33, v8);
      v9 = (const WCHAR *)*((_QWORD *)v4 + 2);
      v24 = *v4;
      v34 = &v24;
      v35 = 4LL;
      TlgCreateWsz(&v36, v9);
      v10 = (const CHAR *)*((_QWORD *)v4 + 8);
      v25 = v4[6];
      v37 = &v25;
      v38 = 4LL;
      TlgCreateSz(&v39, v10);
      v11 = (const CHAR *)*((_QWORD *)v4 + 10);
      v26 = v4[18];
      v40 = &v26;
      v41 = 4LL;
      TlgCreateSz(&v42, v11);
      TlgCreateWsz(&v43, *((LPCWSTR *)v4 + 11));
      v12 = (const CHAR *)*((_QWORD *)v4 + 13);
      v19 = v4[24];
      v44 = &v19;
      v45 = 4LL;
      TlgCreateSz(&v46, v12);
      TlgCreateWsz(&v47, *((LPCWSTR *)v4 + 14));
      v13 = v4[2];
      v14 = (const CHAR *)*((_QWORD *)v4 + 5);
      v48 = &v20;
      fPending = v4[15];
      v20 = v13;
      p_fPending = &fPending;
      v49 = 4LL;
      v51 = 4LL;
      TlgCreateSz(&v52, v14);
      TlgWrite(v15, &unk_1803A0707, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x13u, &v27);
    }
  }
  else
  {
    wil::ActivityBase<SingleViewExperienceLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
      (__int64)this,
      (RTL_SRWLOCK **)&Context);
    v5 = (RTL_SRWLOCK *)Context;
    **((_DWORD **)this + 6) = 2;
    if ( v5 )
      ReleaseSRWLockExclusive(v5);
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
      && fPending )
    {
      Context = qword_180438800;
      qword_180438800[0] = &LockScreenServiceLogging::`vftable';
      qword_180438818 = (struct _TlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438800, qword_180438818);
      InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_180438800);
    }
    v6 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
    if ( *(_DWORD *)v6 > 5u )
    {
      v16 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v54 = &v20;
      v20 = v16;
      v55 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      v57 = 4LL;
      v19 = CurrentThreadId;
      v56 = &v19;
      TlgWrite(v6, &unk_1803A0831, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 4u, &pData);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((SingleViewExperienceTelemetry::LaunchCompleted *)((char *)this + 8));
}
