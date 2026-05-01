/*
 * XREFs of ?Stop@?$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180076184
 * Callers:
 *     ?PositionMenu@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@W4PositionMenuFlags@1@@Z @ 0x180076B2C (-PositionMenu@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@W4PositionMenuFlags@.c)
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18000FA24 (-LockExclusive@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsP.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18001833C (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgWrite @ 0x18005AB68 (_TlgWrite.c)
 *     ?ReportStopActivity@?$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x1800760F0 (-ReportStopActivity@-$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04U_TlgReflectorTag_Para.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

void __fastcall wil::ActivityBase<StartMenuExperienceLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(
        __int64 a1)
{
  __int64 v2; // rax
  int v3; // esi
  int v4; // edi
  RTL_SRWLOCK *v5; // rcx
  int v6; // esi
  const struct _TlgProvider_t *Ptr; // rdi
  DWORD CurrentThreadId; // eax
  PSRWLOCK SRWLock; // [rsp+38h] [rbp-19h] BYREF
  WINBOOL fPending; // [rsp+40h] [rbp-11h] BYREF
  int v11; // [rsp+44h] [rbp-Dh] BYREF
  DWORD v12; // [rsp+48h] [rbp-9h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp+7h] BYREF
  int *v14; // [rsp+78h] [rbp+27h]
  int v15; // [rsp+80h] [rbp+2Fh]
  int v16; // [rsp+84h] [rbp+33h]
  DWORD *v17; // [rsp+88h] [rbp+37h]
  int v18; // [rsp+90h] [rbp+3Fh]
  int v19; // [rsp+94h] [rbp+43h]

  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(a1, &SRWLock);
  v2 = *(_QWORD *)(a1 + 48);
  v3 = *(_DWORD *)(v2 + 72);
  if ( v3 < 1 )
    __fastfail(7u);
  v4 = *(_DWORD *)(v2 + 76);
  if ( v4 >= 0 )
  {
    *(_DWORD *)(v2 + 76) = 0;
    v4 = 0;
  }
  v5 = SRWLock;
  v6 = v3 - 1;
  *(_DWORD *)(v2 + 72) = v6;
  if ( v5 )
    ReleaseSRWLockExclusive(v5);
  if ( v6 )
  {
    SRWLock = 0LL;
    if ( InitOnceBeginInitialize(
           &`StartMenuExperienceLogging::Instance'::`2'::wrapper,
           0,
           &fPending,
           (LPVOID *)&SRWLock)
      && fPending )
    {
      SRWLock = (PSRWLOCK)qword_180438878;
      qword_180438878[0] = &LockScreenServiceLogging::`vftable';
      qword_180438890 = (struct _TlgProvider_t *)&`StartMenuExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_b070bc67e2c9c03cf4cc93f221b7b97d_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438878, qword_180438890);
      InitOnceComplete(&`StartMenuExperienceLogging::Instance'::`2'::wrapper, 0, qword_180438878);
    }
    Ptr = (const struct _TlgProvider_t *)SRWLock[1].Ptr;
    if ( *(_DWORD *)Ptr > 5u )
    {
      v11 = 0;
      v16 = 0;
      v14 = &v11;
      v15 = 4;
      CurrentThreadId = GetCurrentThreadId();
      v19 = 0;
      v12 = CurrentThreadId;
      v17 = &v12;
      v18 = 4;
      TlgWrite(Ptr, &unk_18038A92E, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), 0LL, 4u, &pData);
    }
  }
  else
  {
    wil::ActivityBase<StartMenuExperienceLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::ReportStopActivity(
      (StartMenuExperienceTelemetry::StartMenuReposition *)a1,
      v4);
  }
  if ( *(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
