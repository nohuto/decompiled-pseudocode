/*
 * XREFs of ?Stop@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800750CC
 * Callers:
 *     ?OnViewPropertiesChanging@CortanaDesktopExperienceView@@AEAAJXZ @ 0x180064B10 (-OnViewPropertiesChanging@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?ShowWithStart@CortanaDesktopExperienceView@@UEAAJE@Z @ 0x180065F90 (-ShowWithStart@CortanaDesktopExperienceView@@UEAAJE@Z.c)
 *     ?_GetCortanaEntryPointAndArgs@CortanaSharedExperienceManager@@AEAAJPEBGIPEAPEAUHSTRING__@@1@Z @ 0x1800675A0 (-_GetCortanaEntryPointAndArgs@CortanaSharedExperienceManager@@AEAAJPEBGIPEAPEAUHSTRING__@@1@Z.c)
 *     ?Prelaunch@CortanaSharedExperienceManager@@UEAAJE@Z @ 0x18015D340 (-Prelaunch@CortanaSharedExperienceManager@@UEAAJE@Z.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18001833C (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgWrite @ 0x18005AB68 (_TlgWrite.c)
 *     ?ReportStopActivity@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x180074F70 (-ReportStopActivity@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03U_TlgReflectorTag_Param0I.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

void __fastcall wil::ActivityBase<CortanaProactiveLogging,1,0,4,_TlgReflectorTag_Param0IsProviderType>::Stop(
        CortanaProactiveTelemetry::CortanaExperienceManager_ShowWithStart *this)
{
  RTL_SRWLOCK *v2; // rsi
  PSRWLOCK *p_SRWLock; // rax
  char v4; // bl
  __int64 v5; // rax
  int v6; // r14d
  int v7; // ebx
  int v8; // r14d
  const struct _TlgProvider_t *Ptr; // rbx
  DWORD CurrentThreadId; // eax
  PSRWLOCK SRWLock; // [rsp+30h] [rbp-29h] BYREF
  PSRWLOCK v12; // [rsp+38h] [rbp-21h] BYREF
  WINBOOL fPending; // [rsp+40h] [rbp-19h] BYREF
  int v14; // [rsp+44h] [rbp-15h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-9h] BYREF
  int *v16; // [rsp+70h] [rbp+17h]
  int v17; // [rsp+78h] [rbp+1Fh]
  int v18; // [rsp+7Ch] [rbp+23h]
  PSRWLOCK *v19; // [rsp+80h] [rbp+27h]
  int v20; // [rsp+88h] [rbp+2Fh]
  int v21; // [rsp+8Ch] [rbp+33h]

  LODWORD(v12) = 0;
  v2 = (RTL_SRWLOCK *)*((_QWORD *)this + 38);
  if ( v2 )
  {
    v2 += 31;
    AcquireSRWLockExclusive(v2);
    p_SRWLock = &v12;
    v12 = v2;
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
  if ( (v4 & 1) != 0 && v12 )
    ReleaseSRWLockExclusive(v12);
  v5 = *((_QWORD *)this + 6);
  v6 = *(_DWORD *)(v5 + 72);
  if ( v6 < 1 )
    __fastfail(7u);
  v7 = *(_DWORD *)(v5 + 76);
  if ( v7 >= 0 )
  {
    *(_DWORD *)(v5 + 76) = 0;
    v7 = 0;
  }
  v8 = v6 - 1;
  *(_DWORD *)(v5 + 72) = v8;
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  if ( v8 )
  {
    SRWLock = 0LL;
    if ( InitOnceBeginInitialize(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, &fPending, (LPVOID *)&SRWLock)
      && fPending )
    {
      SRWLock = (PSRWLOCK)&qword_180438828;
      qword_180438828 = &LockScreenServiceLogging::`vftable';
      qword_180438840 = (struct _TlgProvider_t *)&`CortanaProactiveLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_0a4c5659e8368aeb314f53434332ab54_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_180438828, qword_180438840);
      InitOnceComplete(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, &qword_180438828);
    }
    Ptr = (const struct _TlgProvider_t *)SRWLock[1].Ptr;
    if ( *(_DWORD *)Ptr > 5u )
    {
      v14 = 0;
      v18 = 0;
      v16 = &v14;
      v17 = 4;
      CurrentThreadId = GetCurrentThreadId();
      v21 = 0;
      LODWORD(v12) = CurrentThreadId;
      v19 = &v12;
      v20 = 4;
      TlgWrite(Ptr, &unk_18038A92E, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 4u, &pData);
    }
  }
  else
  {
    wil::ActivityBase<CortanaProactiveLogging,1,0,4,_TlgReflectorTag_Param0IsProviderType>::ReportStopActivity(this, v7);
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((CortanaProactiveTelemetry::CortanaExperienceManager_ShowWithStart *)((char *)this + 8));
}
