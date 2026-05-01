/*
 * XREFs of ?Stop@?$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180017C70
 * Callers:
 *     _lambda_4181134c5161f261fff3e61f273c9fd8_::operator() @ 0x18001E090 (_lambda_4181134c5161f261fff3e61f273c9fd8_--operator().c)
 * Callees:
 *     ?StopActivity@RaiseApplicationViewChange@ApplicationViewTraceLogging@ApplicationViewManagement@@MEAAXXZ @ 0x1800180D0 (-StopActivity@RaiseApplicationViewChange@ApplicationViewTraceLogging@ApplicationViewManagement@@.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18001833C (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgWrite @ 0x18005AB68 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

void __fastcall wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(
        ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange *this)
{
  RTL_SRWLOCK *v2; // rdi
  RTL_SRWLOCK *v3; // rdi
  PSRWLOCK *p_SRWLock; // rax
  char v5; // si
  __int64 v6; // rdx
  int v7; // eax
  int v8; // eax
  bool v9; // si
  void (__fastcall *v10)(ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange *__hidden); // rax
  const struct _TlgProvider_t *Ptr; // rdi
  PSRWLOCK SRWLock; // [rsp+30h] [rbp-78h] BYREF
  PSRWLOCK v13; // [rsp+38h] [rbp-70h] BYREF
  WINBOOL fPending; // [rsp+40h] [rbp-68h] BYREF
  int v15; // [rsp+44h] [rbp-64h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-58h] BYREF
  int *v17; // [rsp+70h] [rbp-38h]
  __int64 v18; // [rsp+78h] [rbp-30h]
  PSRWLOCK *v19; // [rsp+80h] [rbp-28h]
  __int64 v20; // [rsp+88h] [rbp-20h]

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
    v5 = 2;
    v3 = 0LL;
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
  v9 = v8 == 0;
  if ( v3 )
    ReleaseSRWLockExclusive(v3);
  if ( v9 )
  {
    v10 = *(void (__fastcall **)(ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange *__hidden))(*(_QWORD *)this + 8LL);
    if ( v10 == ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange::StopActivity )
      ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange::StopActivity(this);
    else
      v10(this);
  }
  else
  {
    SRWLock = 0LL;
    if ( InitOnceBeginInitialize(
           &`ApplicationViewManagementLogging::Instance'::`2'::wrapper,
           0,
           &fPending,
           (LPVOID *)&SRWLock)
      && fPending )
    {
      SRWLock = (PSRWLOCK)qword_180438758;
      qword_180438758[0] = &LockScreenServiceLogging::`vftable';
      qword_180438770 = (struct _TlgProvider_t *)&`ApplicationViewManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_9a0e71fa5596e2c383ee2a905b77935f_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438758, qword_180438770);
      InitOnceComplete(&`ApplicationViewManagementLogging::Instance'::`2'::wrapper, 0, qword_180438758);
    }
    Ptr = (const struct _TlgProvider_t *)SRWLock[1].Ptr;
    if ( *(_DWORD *)Ptr > 5u )
    {
      v15 = 0;
      v17 = &v15;
      v18 = 4LL;
      LODWORD(v13) = GetCurrentThreadId();
      v19 = &v13;
      v20 = 4LL;
      TlgWrite(Ptr, &unk_18038A92E, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 4u, &pData);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange *)((char *)this + 8));
}
