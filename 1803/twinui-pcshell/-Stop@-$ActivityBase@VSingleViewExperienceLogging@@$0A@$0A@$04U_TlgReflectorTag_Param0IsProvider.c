/*
 * XREFs of ?Stop@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800192F8
 * Callers:
 *     ?OnEventQueued@CSingleViewShellExperience@@AEAAJPEAUIShellExperienceViewStateChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x18006A7C0 (-OnEventQueued@CSingleViewShellExperience@@AEAAJPEAUIShellExperienceViewStateChangedEventArgs@Ex.c)
 *     ?LaunchCompleted@CSingleViewShellExperience@@QEAAXXZ @ 0x18006BEBC (-LaunchCompleted@CSingleViewShellExperience@@QEAAXXZ.c)
 *     _lambda_5b180c0ca92e82d68f6c8a12cad9fd8b_::operator() @ 0x180088BAC (_lambda_5b180c0ca92e82d68f6c8a12cad9fd8b_--operator().c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18001833C (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?ReportStopActivity@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x180019230 (-ReportStopActivity@-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Pa.c)
 *     _TlgWrite @ 0x18005AB68 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

void __fastcall wil::ActivityBase<SingleViewExperienceLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(
        __int64 a1)
{
  RTL_SRWLOCK *v2; // rsi
  PSRWLOCK *p_SRWLock; // rax
  char v4; // bl
  __int64 v5; // rax
  int v6; // ebx
  int v7; // ebx
  const struct _TlgProvider_t *Ptr; // rbx
  DWORD CurrentThreadId; // eax
  PSRWLOCK SRWLock; // [rsp+38h] [rbp-19h] BYREF
  PSRWLOCK v11; // [rsp+40h] [rbp-11h] BYREF
  WINBOOL fPending; // [rsp+48h] [rbp-9h] BYREF
  int v13; // [rsp+4Ch] [rbp-5h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp+7h] BYREF
  int *v15; // [rsp+78h] [rbp+27h]
  int v16; // [rsp+80h] [rbp+2Fh]
  int v17; // [rsp+84h] [rbp+33h]
  PSRWLOCK *v18; // [rsp+88h] [rbp+37h]
  int v19; // [rsp+90h] [rbp+3Fh]
  int v20; // [rsp+94h] [rbp+43h]

  LODWORD(v11) = 0;
  v2 = *(RTL_SRWLOCK **)(a1 + 304);
  if ( v2 )
  {
    v2 += 31;
    AcquireSRWLockExclusive(v2);
    p_SRWLock = &v11;
    v11 = v2;
    v4 = 1;
  }
  else
  {
    SRWLock = 0LL;
    p_SRWLock = &SRWLock;
    v4 = 2;
  }
  *p_SRWLock = 0LL;
  if ( (v4 & 2) != 0 )
  {
    v4 &= ~2u;
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
  }
  if ( (v4 & 1) != 0 && v11 )
    ReleaseSRWLockExclusive(v11);
  v5 = *(_QWORD *)(a1 + 48);
  v6 = *(_DWORD *)(v5 + 72);
  if ( v6 < 1 )
    __fastfail(7u);
  if ( *(int *)(v5 + 76) >= 0 )
    *(_DWORD *)(v5 + 76) = 0;
  v7 = v6 - 1;
  *(_DWORD *)(v5 + 72) = v7;
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  if ( v7 )
  {
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
    if ( *(_DWORD *)Ptr > 5u )
    {
      v13 = 0;
      v17 = 0;
      v15 = &v13;
      v16 = 4;
      CurrentThreadId = GetCurrentThreadId();
      v20 = 0;
      LODWORD(v11) = CurrentThreadId;
      v18 = &v11;
      v19 = 4;
      TlgWrite(Ptr, &unk_18038A92E, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), 0LL, 4u, &pData);
    }
  }
  else
  {
    wil::ActivityBase<SingleViewExperienceLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ReportStopActivity((SingleViewExperienceTelemetry::Reactivate *)a1);
  }
  if ( *(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
