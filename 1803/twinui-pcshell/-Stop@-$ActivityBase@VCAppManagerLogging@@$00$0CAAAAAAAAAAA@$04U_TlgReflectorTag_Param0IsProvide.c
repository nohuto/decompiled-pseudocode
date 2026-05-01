/*
 * XREFs of ?Stop@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180010804
 * Callers:
 *     _lambda_0d74f069fa796de4b01adcedcd59308d_::operator() @ 0x18000EA38 (_lambda_0d74f069fa796de4b01adcedcd59308d_--operator().c)
 *     ?OnCommand@CApplicationFrameService@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@@Z @ 0x180081810 (-OnCommand@CApplicationFrameService@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@@Z.c)
 *     ?_HandleCloseRequested@CApplicationManager@@AEAAXAEBUHSHELL_DATA@1@PEAUIImmersiveApplication@@@Z @ 0x18010FDD0 (-_HandleCloseRequested@CApplicationManager@@AEAAXAEBUHSHELL_DATA@1@PEAUIImmersiveApplication@@@Z.c)
 *     ?_ShowAsViewModeWorker@CAppViewManager@@AEAAJPEAUIViewEventArgsForShowAsViewMode@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180127238 (-_ShowAsViewModeWorker@CAppViewManager@@AEAAJPEAUIViewEventArgsForShowAsViewMode@ViewManagerInte.c)
 * Callees:
 *     ?StopActivity@SetSystemVisual@CFramePresentationTelemetry@@MEAAXXZ @ 0x18000E8F0 (-StopActivity@SetSystemVisual@CFramePresentationTelemetry@@MEAAXXZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18001833C (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgKeywordOn @ 0x18005AB44 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x18005AB68 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

void __fastcall wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Stop(
        CFramePresentationTelemetry::SetSystemVisual *this)
{
  RTL_SRWLOCK *v2; // rsi
  RTL_SRWLOCK *v3; // rsi
  PSRWLOCK *p_SRWLock; // rax
  char v5; // di
  __int64 v6; // rax
  int v7; // edi
  int v8; // edi
  void (__fastcall *v9)(CFramePresentationTelemetry::SetSystemVisual *); // rax
  const struct _TlgProvider_t *Ptr; // rdi
  DWORD CurrentThreadId; // eax
  PSRWLOCK SRWLock; // [rsp+38h] [rbp-19h] BYREF
  PSRWLOCK v13; // [rsp+40h] [rbp-11h] BYREF
  WINBOOL fPending; // [rsp+48h] [rbp-9h] BYREF
  int v15; // [rsp+4Ch] [rbp-5h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp+7h] BYREF
  int *v17; // [rsp+78h] [rbp+27h]
  int v18; // [rsp+80h] [rbp+2Fh]
  int v19; // [rsp+84h] [rbp+33h]
  PSRWLOCK *v20; // [rsp+88h] [rbp+37h]
  int v21; // [rsp+90h] [rbp+3Fh]
  int v22; // [rsp+94h] [rbp+43h]

  LODWORD(v13) = 0;
  v2 = (RTL_SRWLOCK *)*((_QWORD *)this + 38);
  if ( v2 )
  {
    v3 = v2 + 31;
    AcquireSRWLockExclusive(v3);
    p_SRWLock = &v13;
    v13 = v3;
    v5 = 1;
  }
  else
  {
    SRWLock = 0LL;
    p_SRWLock = &SRWLock;
    v3 = 0LL;
    v5 = 2;
  }
  *p_SRWLock = 0LL;
  if ( (v5 & 2) != 0 )
  {
    v5 &= ~2u;
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
  }
  if ( (v5 & 1) != 0 && v13 )
    ReleaseSRWLockExclusive(v13);
  v6 = *((_QWORD *)this + 6);
  v7 = *(_DWORD *)(v6 + 72);
  if ( v7 < 1 )
    __fastfail(7u);
  if ( *(int *)(v6 + 76) >= 0 )
    *(_DWORD *)(v6 + 76) = 0;
  v8 = v7 - 1;
  *(_DWORD *)(v6 + 72) = v8;
  if ( v3 )
    ReleaseSRWLockExclusive(v3);
  if ( v8 )
  {
    SRWLock = 0LL;
    if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &fPending, (LPVOID *)&SRWLock)
      && fPending )
    {
      SRWLock = (PSRWLOCK)qword_180438670;
      qword_180438670[0] = &LockScreenServiceLogging::`vftable';
      qword_180438688 = (struct _TlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438670, qword_180438688);
      InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_180438670);
    }
    Ptr = (const struct _TlgProvider_t *)SRWLock[1].Ptr;
    if ( *(_DWORD *)Ptr > 5u && TlgKeywordOn((TraceLoggingHProvider)SRWLock[1].Ptr, 0x200000000000uLL) )
    {
      v15 = 0;
      v19 = 0;
      v17 = &v15;
      v18 = 4;
      CurrentThreadId = GetCurrentThreadId();
      v22 = 0;
      LODWORD(v13) = CurrentThreadId;
      v20 = &v13;
      v21 = 4;
      TlgWrite(Ptr, &unk_18038A251, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 4u, &pData);
    }
  }
  else
  {
    v9 = *(void (__fastcall **)(CFramePresentationTelemetry::SetSystemVisual *))(*(_QWORD *)this + 8LL);
    if ( v9 == CFramePresentationTelemetry::SetSystemVisual::StopActivity )
      CFramePresentationTelemetry::SetSystemVisual::StopActivity(this);
    else
      v9(this);
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((CFramePresentationTelemetry::SetSystemVisual *)((char *)this + 8));
}
