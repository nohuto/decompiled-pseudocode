/*
 * XREFs of ?Stop@OnClientWindowReadinessProcessed@SingleViewExperienceTelemetry@@QEAAXI@Z @ 0x18006F698
 * Callers:
 *     ?OnClientWindowReadyForPresentationChanged@CSingleViewShellExperience@@AEAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@3456@@Z @ 0x180069600 (-OnClientWindowReadyForPresentationChanged@CSingleViewShellExperience@@AEAAJPEAUIClientWindowSta.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18001833C (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?LockExclusive@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180019194 (-LockExclusive@-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0I.c)
 *     _TlgCreateWsz @ 0x180058BCC (_TlgCreateWsz.c)
 *     _TlgCreateSz @ 0x180058D78 (_TlgCreateSz.c)
 *     _TlgKeywordOn @ 0x18005AB44 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x18005AB68 (_TlgWrite.c)
 *     ?zInternalStop@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18006E38C (-zInternalStop@-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0I.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

void __fastcall SingleViewExperienceTelemetry::OnClientWindowReadinessProcessed::Stop(
        SingleViewExperienceTelemetry::OnClientWindowReadinessProcessed *this,
        int a2)
{
  int *v2; // rsi
  int v4; // eax
  int *v5; // rsi
  RTL_SRWLOCK *v6; // rcx
  const struct _TlgProvider_t *v7; // rdi
  const CHAR *v8; // rdx
  const CHAR *v9; // rdx
  const WCHAR *v10; // rdx
  const CHAR *v11; // rdx
  const CHAR *v12; // rdx
  const CHAR *v13; // rdx
  TraceLoggingHProvider v14; // r10
  int v15; // ecx
  DWORD CurrentThreadId; // eax
  LPVOID Context; // [rsp+30h] [rbp-D0h] BYREF
  DWORD v18; // [rsp+38h] [rbp-C8h] BYREF
  int v19; // [rsp+3Ch] [rbp-C4h] BYREF
  WINBOOL fPending; // [rsp+40h] [rbp-C0h] BYREF
  WINBOOL v21; // [rsp+44h] [rbp-BCh] BYREF
  int v22; // [rsp+48h] [rbp-B8h] BYREF
  int v23; // [rsp+4Ch] [rbp-B4h] BYREF
  EVENT_DATA_DESCRIPTOR v24; // [rsp+50h] [rbp-B0h] BYREF
  int *v25; // [rsp+70h] [rbp-90h]
  __int64 v26; // [rsp+78h] [rbp-88h]
  DWORD *v27; // [rsp+80h] [rbp-80h]
  __int64 v28; // [rsp+88h] [rbp-78h]
  int *v29; // [rsp+90h] [rbp-70h]
  __int64 v30; // [rsp+98h] [rbp-68h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A0h] [rbp-60h] BYREF
  int *v32; // [rsp+C0h] [rbp-40h]
  __int64 v33; // [rsp+C8h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+D0h] [rbp-30h] BYREF
  int *v35; // [rsp+E0h] [rbp-20h]
  __int64 v36; // [rsp+E8h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR v37; // [rsp+F0h] [rbp-10h] BYREF
  int *v38; // [rsp+100h] [rbp+0h]
  __int64 v39; // [rsp+108h] [rbp+8h]
  struct _EVENT_DATA_DESCRIPTOR v40; // [rsp+110h] [rbp+10h] BYREF
  DWORD *v41; // [rsp+120h] [rbp+20h]
  __int64 v42; // [rsp+128h] [rbp+28h]
  struct _EVENT_DATA_DESCRIPTOR v43; // [rsp+130h] [rbp+30h] BYREF
  int *v44; // [rsp+140h] [rbp+40h]
  __int64 v45; // [rsp+148h] [rbp+48h]
  struct _EVENT_DATA_DESCRIPTOR v46; // [rsp+150h] [rbp+50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v47; // [rsp+160h] [rbp+60h] BYREF
  WINBOOL *p_fPending; // [rsp+170h] [rbp+70h]
  __int64 v49; // [rsp+178h] [rbp+78h]
  struct _EVENT_DATA_DESCRIPTOR v50; // [rsp+180h] [rbp+80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v51; // [rsp+190h] [rbp+90h] BYREF
  int *v52; // [rsp+1A0h] [rbp+A0h]
  __int64 v53; // [rsp+1A8h] [rbp+A8h]
  int v54; // [rsp+1F8h] [rbp+F8h] BYREF

  v54 = a2;
  v2 = (int *)*((_QWORD *)this + 6);
  v4 = v2[19];
  if ( v4 < 0 && v4 == v2[21] )
    v5 = v2 + 20;
  else
    v5 = 0LL;
  if ( v5 )
  {
    wil::ActivityBase<SingleViewExperienceLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &v21, &Context) && v21 )
    {
      Context = qword_180438800;
      qword_180438800[0] = &LockScreenServiceLogging::`vftable';
      qword_180438818 = (struct _TlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438800, qword_180438818);
      InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_180438800);
    }
    if ( **((_DWORD **)Context + 1) > 5u && TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0x200000000000uLL) )
    {
      v8 = (const CHAR *)*((_QWORD *)v5 + 6);
      v22 = v5[1];
      v32 = &v22;
      v33 = 4LL;
      TlgCreateSz(&pDesc, v8);
      v9 = (const CHAR *)*((_QWORD *)v5 + 15);
      v35 = v5 + 14;
      v36 = 4LL;
      TlgCreateSz(&v37, v9);
      v10 = (const WCHAR *)*((_QWORD *)v5 + 2);
      v23 = *v5;
      v38 = &v23;
      v39 = 4LL;
      TlgCreateWsz(&v40, v10);
      v11 = (const CHAR *)*((_QWORD *)v5 + 8);
      v18 = v5[6];
      v41 = &v18;
      v42 = 4LL;
      TlgCreateSz(&v43, v11);
      v12 = (const CHAR *)*((_QWORD *)v5 + 10);
      v19 = v5[18];
      v44 = &v19;
      v45 = 4LL;
      TlgCreateSz(&v46, v12);
      TlgCreateWsz(&v47, *((LPCWSTR *)v5 + 11));
      v13 = (const CHAR *)*((_QWORD *)v5 + 13);
      fPending = v5[24];
      p_fPending = &fPending;
      v49 = 4LL;
      TlgCreateSz(&v50, v13);
      TlgCreateWsz(&v51, *((LPCWSTR *)v5 + 14));
      v53 = 4LL;
      v52 = &v54;
      TlgWrite(v14, &unk_1803A0162, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x11u, &pData);
    }
  }
  else
  {
    wil::ActivityBase<SingleViewExperienceLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
      (__int64)this,
      (RTL_SRWLOCK **)&Context);
    v6 = (RTL_SRWLOCK *)Context;
    **((_DWORD **)this + 6) = 2;
    if ( v6 )
      ReleaseSRWLockExclusive(v6);
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
    v7 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
    if ( *(_DWORD *)v7 > 5u && TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0x200000000000uLL) )
    {
      v15 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v25 = &v19;
      v19 = v15;
      v26 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      v28 = 4LL;
      v18 = CurrentThreadId;
      v30 = 4LL;
      v27 = &v18;
      v29 = &v54;
      TlgWrite(v7, &unk_1803A055A, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 5u, &v24);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((SingleViewExperienceTelemetry::OnClientWindowReadinessProcessed *)((char *)this + 8));
}
