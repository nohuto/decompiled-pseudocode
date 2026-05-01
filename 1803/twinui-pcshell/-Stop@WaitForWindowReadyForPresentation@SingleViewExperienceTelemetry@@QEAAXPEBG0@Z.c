/*
 * XREFs of ?Stop@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z @ 0x18006F894
 * Callers:
 *     ?WaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x18006A25C (-WaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z.c)
 *     _lambda_16dbbe28c6f74937ed7301029aac4a5a_::operator() @ 0x18006EEE0 (_lambda_16dbbe28c6f74937ed7301029aac4a5a_--operator().c)
 *     wil::details::ScopeExitFn__lambda_6914baa2bbb41478f35591fe55a15932___::_ScopeExitFn__lambda_6914baa2bbb41478f35591fe55a15932___ @ 0x1800FB2A8 (wil--details--ScopeExitFn__lambda_6914baa2bbb41478f35591fe55a15932___--_ScopeExitFn__lambda_6914.c)
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

void __fastcall SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation::Stop(
        SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3)
{
  int *v3; // rsi
  int v7; // eax
  int *v8; // rsi
  RTL_SRWLOCK *v9; // rcx
  const struct _TlgProvider_t *Ptr; // rdi
  const CHAR *v11; // rdx
  const CHAR *v12; // rdx
  const WCHAR *v13; // rdx
  const CHAR *v14; // rdx
  const CHAR *v15; // rdx
  const CHAR *v16; // rdx
  TraceLoggingHProvider v17; // r10
  int v18; // ecx
  DWORD CurrentThreadId; // eax
  PSRWLOCK SRWLock; // [rsp+30h] [rbp-D0h] BYREF
  DWORD v21; // [rsp+38h] [rbp-C8h] BYREF
  int v22; // [rsp+3Ch] [rbp-C4h] BYREF
  WINBOOL fPending; // [rsp+40h] [rbp-C0h] BYREF
  WINBOOL v24; // [rsp+44h] [rbp-BCh] BYREF
  int v25; // [rsp+48h] [rbp-B8h] BYREF
  int v26; // [rsp+4Ch] [rbp-B4h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-B0h] BYREF
  int *v28; // [rsp+70h] [rbp-90h]
  __int64 v29; // [rsp+78h] [rbp-88h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-80h] BYREF
  int *v31; // [rsp+90h] [rbp-70h]
  __int64 v32; // [rsp+98h] [rbp-68h]
  struct _EVENT_DATA_DESCRIPTOR v33; // [rsp+A0h] [rbp-60h] BYREF
  int *v34; // [rsp+B0h] [rbp-50h]
  __int64 v35; // [rsp+B8h] [rbp-48h]
  struct _EVENT_DATA_DESCRIPTOR v36; // [rsp+C0h] [rbp-40h] BYREF
  DWORD *v37; // [rsp+D0h] [rbp-30h]
  __int64 v38; // [rsp+D8h] [rbp-28h]
  struct _EVENT_DATA_DESCRIPTOR v39; // [rsp+E0h] [rbp-20h] BYREF
  int *v40; // [rsp+F0h] [rbp-10h]
  __int64 v41; // [rsp+F8h] [rbp-8h]
  struct _EVENT_DATA_DESCRIPTOR v42; // [rsp+100h] [rbp+0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v43; // [rsp+110h] [rbp+10h] BYREF
  WINBOOL *p_fPending; // [rsp+120h] [rbp+20h]
  __int64 v45; // [rsp+128h] [rbp+28h]
  struct _EVENT_DATA_DESCRIPTOR v46; // [rsp+130h] [rbp+30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v47; // [rsp+140h] [rbp+40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v48; // [rsp+150h] [rbp+50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v49; // [rsp+160h] [rbp+60h] BYREF
  EVENT_DATA_DESCRIPTOR v50; // [rsp+170h] [rbp+70h] BYREF
  int *v51; // [rsp+190h] [rbp+90h]
  __int64 v52; // [rsp+198h] [rbp+98h]
  DWORD *v53; // [rsp+1A0h] [rbp+A0h]
  __int64 v54; // [rsp+1A8h] [rbp+A8h]
  struct _EVENT_DATA_DESCRIPTOR v55; // [rsp+1B0h] [rbp+B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v56; // [rsp+1C0h] [rbp+C0h] BYREF

  v3 = (int *)*((_QWORD *)this + 6);
  v7 = v3[19];
  if ( v7 < 0 && v7 == v3[21] )
    v8 = v3 + 20;
  else
    v8 = 0LL;
  if ( v8 )
  {
    wil::ActivityBase<SingleViewExperienceLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    SRWLock = 0LL;
    if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &v24, (LPVOID *)&SRWLock)
      && v24 )
    {
      SRWLock = (PSRWLOCK)qword_180438800;
      qword_180438800[0] = &LockScreenServiceLogging::`vftable';
      qword_180438818 = (struct _TlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438800, qword_180438818);
      InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_180438800);
    }
    if ( *(_DWORD *)SRWLock[1].Ptr > 5u && TlgKeywordOn((TraceLoggingHProvider)SRWLock[1].Ptr, 0x200000000000uLL) )
    {
      v11 = (const CHAR *)*((_QWORD *)v8 + 6);
      v25 = v8[1];
      v28 = &v25;
      v29 = 4LL;
      TlgCreateSz(&pDesc, v11);
      v12 = (const CHAR *)*((_QWORD *)v8 + 15);
      v31 = v8 + 14;
      v32 = 4LL;
      TlgCreateSz(&v33, v12);
      v13 = (const WCHAR *)*((_QWORD *)v8 + 2);
      v26 = *v8;
      v34 = &v26;
      v35 = 4LL;
      TlgCreateWsz(&v36, v13);
      v14 = (const CHAR *)*((_QWORD *)v8 + 8);
      v21 = v8[6];
      v37 = &v21;
      v38 = 4LL;
      TlgCreateSz(&v39, v14);
      v15 = (const CHAR *)*((_QWORD *)v8 + 10);
      v22 = v8[18];
      v40 = &v22;
      v41 = 4LL;
      TlgCreateSz(&v42, v15);
      TlgCreateWsz(&v43, *((LPCWSTR *)v8 + 11));
      v16 = (const CHAR *)*((_QWORD *)v8 + 13);
      fPending = v8[24];
      p_fPending = &fPending;
      v45 = 4LL;
      TlgCreateSz(&v46, v16);
      TlgCreateWsz(&v47, *((LPCWSTR *)v8 + 14));
      TlgCreateWsz(&v48, a2);
      TlgCreateWsz(&v49, a3);
      TlgWrite(v17, &unk_18039FDB2, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x12u, &pData);
    }
  }
  else
  {
    wil::ActivityBase<SingleViewExperienceLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
      (__int64)this,
      &SRWLock);
    v9 = SRWLock;
    **((_DWORD **)this + 6) = 2;
    if ( v9 )
      ReleaseSRWLockExclusive(v9);
    SRWLock = 0LL;
    if ( InitOnceBeginInitialize(
           &`SingleViewExperienceLogging::Instance'::`2'::wrapper,
           0,
           &fPending,
           (LPVOID *)&SRWLock)
      && fPending )
    {
      SRWLock = (PSRWLOCK)qword_180438800;
      qword_180438800[0] = &LockScreenServiceLogging::`vftable';
      qword_180438818 = (struct _TlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438800, qword_180438818);
      InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_180438800);
    }
    Ptr = (const struct _TlgProvider_t *)SRWLock[1].Ptr;
    if ( *(_DWORD *)Ptr > 5u && TlgKeywordOn((TraceLoggingHProvider)SRWLock[1].Ptr, 0x200000000000uLL) )
    {
      v18 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v51 = &v22;
      v22 = v18;
      v52 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      v54 = 4LL;
      v21 = CurrentThreadId;
      v53 = &v21;
      TlgCreateWsz(&v55, a2);
      TlgCreateWsz(&v56, a3);
      TlgWrite(Ptr, &unk_18039FD4D, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 6u, &v50);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation *)((char *)this + 8));
}
