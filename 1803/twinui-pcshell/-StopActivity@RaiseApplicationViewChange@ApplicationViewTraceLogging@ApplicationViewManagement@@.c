/*
 * XREFs of ?StopActivity@RaiseApplicationViewChange@ApplicationViewTraceLogging@ApplicationViewManagement@@MEAAXXZ @ 0x1800180D0
 * Callers:
 *     ?Stop@?$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180017C70 (-Stop@-$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsPro.c)
 *     ?ReportStopActivity@?$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x180017D88 (-ReportStopActivity@-$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04U_TlgReflectorT.c)
 *     ?Destroy@?$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180017E60 (-Destroy@-$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0Is.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18001833C (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgCreateWsz @ 0x180058BCC (_TlgCreateWsz.c)
 *     _TlgCreateSz @ 0x180058D78 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x18005AB68 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     ?zInternalStop@?$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1800F6804 (-zInternalStop@-$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsP.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

void __fastcall ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange::StopActivity(
        ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange *this)
{
  int *v2; // rax
  int v3; // ecx
  RTL_SRWLOCK *v4; // rdi
  RTL_SRWLOCK *v5; // rdi
  _QWORD *p_fPending; // rax
  char v7; // si
  const struct _TlgProvider_t *v8; // rdi
  int *v9; // rsi
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
  LPVOID Context; // [rsp+38h] [rbp-D0h] BYREF
  DWORD v22; // [rsp+40h] [rbp-C8h] BYREF
  int v23; // [rsp+44h] [rbp-C4h] BYREF
  PSRWLOCK fPending; // [rsp+48h] [rbp-C0h] BYREF
  WINBOOL v25; // [rsp+50h] [rbp-B8h] BYREF
  int v26; // [rsp+54h] [rbp-B4h] BYREF
  int v27; // [rsp+58h] [rbp-B0h] BYREF
  int v28; // [rsp+5Ch] [rbp-ACh] BYREF
  int v29; // [rsp+60h] [rbp-A8h] BYREF
  EVENT_DATA_DESCRIPTOR v30; // [rsp+68h] [rbp-A0h] BYREF
  int *v31; // [rsp+88h] [rbp-80h]
  __int64 v32; // [rsp+90h] [rbp-78h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+98h] [rbp-70h] BYREF
  int *v34; // [rsp+A8h] [rbp-60h]
  __int64 v35; // [rsp+B0h] [rbp-58h]
  struct _EVENT_DATA_DESCRIPTOR v36; // [rsp+B8h] [rbp-50h] BYREF
  int *v37; // [rsp+C8h] [rbp-40h]
  __int64 v38; // [rsp+D0h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR v39; // [rsp+D8h] [rbp-30h] BYREF
  int *v40; // [rsp+E8h] [rbp-20h]
  __int64 v41; // [rsp+F0h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR v42; // [rsp+F8h] [rbp-10h] BYREF
  int *v43; // [rsp+108h] [rbp+0h]
  __int64 v44; // [rsp+110h] [rbp+8h]
  struct _EVENT_DATA_DESCRIPTOR v45; // [rsp+118h] [rbp+10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v46; // [rsp+128h] [rbp+20h] BYREF
  DWORD *v47; // [rsp+138h] [rbp+30h]
  __int64 v48; // [rsp+140h] [rbp+38h]
  struct _EVENT_DATA_DESCRIPTOR v49; // [rsp+148h] [rbp+40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v50; // [rsp+158h] [rbp+50h] BYREF
  int *v51; // [rsp+168h] [rbp+60h]
  __int64 v52; // [rsp+170h] [rbp+68h]
  PSRWLOCK *v53; // [rsp+178h] [rbp+70h]
  __int64 v54; // [rsp+180h] [rbp+78h]
  struct _EVENT_DATA_DESCRIPTOR v55; // [rsp+188h] [rbp+80h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+198h] [rbp+90h] BYREF
  int *v57; // [rsp+1B8h] [rbp+B0h]
  __int64 v58; // [rsp+1C0h] [rbp+B8h]
  DWORD *v59; // [rsp+1C8h] [rbp+C0h]
  __int64 v60; // [rsp+1D0h] [rbp+C8h]

  LODWORD(fPending) = 0;
  v2 = (int *)*((_QWORD *)this + 6);
  v3 = v2[19];
  if ( v3 >= 0 || v3 != v2[21] || (v9 = v2 + 20, v2 == (int *)-80LL) )
  {
    v4 = (RTL_SRWLOCK *)*((_QWORD *)this + 38);
    if ( v4 )
    {
      v5 = v4 + 31;
      AcquireSRWLockExclusive(v5);
      p_fPending = &fPending;
      fPending = v5;
      v7 = 1;
    }
    else
    {
      Context = 0LL;
      p_fPending = &Context;
      v7 = 2;
      v5 = 0LL;
    }
    *p_fPending = 0LL;
    if ( (v7 & 2) != 0 )
    {
      v7 &= ~2u;
      if ( Context )
        ReleaseSRWLockExclusive((PSRWLOCK)Context);
    }
    if ( (v7 & 1) != 0 && fPending )
      ReleaseSRWLockExclusive(fPending);
    **((_DWORD **)this + 6) = 2;
    if ( v5 )
      ReleaseSRWLockExclusive(v5);
    Context = 0LL;
    if ( InitOnceBeginInitialize(
           &`ApplicationViewManagementLogging::Instance'::`2'::wrapper,
           0,
           (PBOOL)&fPending,
           &Context)
      && (_DWORD)fPending )
    {
      Context = qword_180438758;
      qword_180438758[0] = &LockScreenServiceLogging::`vftable';
      qword_180438770 = (struct _TlgProvider_t *)&`ApplicationViewManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_9a0e71fa5596e2c383ee2a905b77935f_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438758, qword_180438770);
      InitOnceComplete(&`ApplicationViewManagementLogging::Instance'::`2'::wrapper, 0, qword_180438758);
    }
    v8 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
    if ( *(_DWORD *)v8 > 5u )
    {
      v19 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v57 = &v23;
      v23 = v19;
      v58 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      v60 = 4LL;
      v22 = CurrentThreadId;
      v59 = &v22;
      TlgWrite(v8, &unk_180389BE7, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 4u, &pData);
    }
  }
  else
  {
    wil::ActivityBase<StartMenuExperienceLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(this);
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`ApplicationViewManagementLogging::Instance'::`2'::wrapper, 0, &v25, &Context) && v25 )
    {
      Context = qword_180438758;
      qword_180438758[0] = &LockScreenServiceLogging::`vftable';
      qword_180438770 = (struct _TlgProvider_t *)&`ApplicationViewManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_9a0e71fa5596e2c383ee2a905b77935f_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438758, qword_180438770);
      InitOnceComplete(&`ApplicationViewManagementLogging::Instance'::`2'::wrapper, 0, qword_180438758);
    }
    if ( **((_DWORD **)Context + 1) > 5u )
    {
      v10 = (const CHAR *)*((_QWORD *)v9 + 6);
      v26 = v9[1];
      v31 = &v26;
      v32 = 4LL;
      TlgCreateSz(&pDesc, v10);
      v11 = (const CHAR *)*((_QWORD *)v9 + 15);
      v34 = v9 + 14;
      v35 = 4LL;
      TlgCreateSz(&v36, v11);
      v12 = (const WCHAR *)*((_QWORD *)v9 + 2);
      v27 = *v9;
      v37 = &v27;
      v38 = 4LL;
      TlgCreateWsz(&v39, v12);
      v13 = (const CHAR *)*((_QWORD *)v9 + 8);
      v28 = v9[6];
      v40 = &v28;
      v41 = 4LL;
      TlgCreateSz(&v42, v13);
      v14 = (const CHAR *)*((_QWORD *)v9 + 10);
      v29 = v9[18];
      v43 = &v29;
      v44 = 4LL;
      TlgCreateSz(&v45, v14);
      TlgCreateWsz(&v46, *((LPCWSTR *)v9 + 11));
      v15 = (const CHAR *)*((_QWORD *)v9 + 13);
      v22 = v9[24];
      v47 = &v22;
      v48 = 4LL;
      TlgCreateSz(&v49, v15);
      TlgCreateWsz(&v50, *((LPCWSTR *)v9 + 14));
      v16 = v9[2];
      v17 = (const CHAR *)*((_QWORD *)v9 + 5);
      v51 = &v23;
      LODWORD(fPending) = v9[15];
      v23 = v16;
      v53 = &fPending;
      v52 = 4LL;
      v54 = 4LL;
      TlgCreateSz(&v55, v17);
      TlgWrite(v18, &unk_180389AB2, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x13u, &v30);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange *)((char *)this + 8));
}
