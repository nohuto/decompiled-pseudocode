/*
 * XREFs of s_pbmCastingAppStateChanged @ 0x180014D20
 * Callers:
 *     <none>
 * Callees:
 *     ??1Completer@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x1800099F0 (--1Completer@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x180060F5C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall s_pbmCastingAppStateChanged(__int64 a1, unsigned int a2)
{
  int v4; // ebx
  struct _TP_TIMER *v5; // rcx
  void *v6; // rdi
  __int64 v7; // rsi
  struct _TP_TIMER *ThreadpoolTimer; // r10
  __int64 v10; // rdx
  void *v11; // r8
  __int64 v12; // r8
  LPVOID v13; // rcx
  struct _FILETIME pftDueTime; // [rsp+20h] [rbp-50h] BYREF
  int v15; // [rsp+28h] [rbp-48h]
  __int64 v16; // [rsp+30h] [rbp-40h]
  PTP_TIMER pv[2]; // [rsp+38h] [rbp-38h] BYREF
  DWORD CurrentThreadId; // [rsp+48h] [rbp-28h]
  const wchar_t *v19; // [rsp+50h] [rbp-20h]
  void *v20; // [rsp+58h] [rbp-18h]
  char v21; // [rsp+60h] [rbp-10h]
  int v22; // [rsp+64h] [rbp-Ch]
  __int64 fPending; // [rsp+B0h] [rbp+40h] BYREF
  LPVOID Context; // [rsp+B8h] [rbp+48h] BYREF

  v16 = -2LL;
  v4 = 0;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, (PBOOL)&fPending, &Context)
    && (_DWORD)fPending )
  {
    pftDueTime = (struct _FILETIME)&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper;
    Context = &qword_18018A2A0;
    qword_18018A2A0 = &AudioSrvTelemetryProvider::`vftable';
    qword_18018A2B8 = (TraceLoggingHProvider)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    v15 = 0;
    wil::details::static_lazy<AudioSrvTelemetryProvider>::Completer::~Completer((unsigned int *)&pftDueTime, v10, v11);
  }
  v5 = (struct _TP_TIMER *)*((_QWORD *)Context + 1);
  v6 = g_AudioHealthMonitor;
  v7 = g_AudioSrvWatchDogTimerInMs;
  pv[0] = 0LL;
  pv[1] = v5;
  CurrentThreadId = GetCurrentThreadId();
  v19 = L"s_pbmCastingAppStateChanged";
  v20 = v6;
  v21 = 0;
  v22 = 0;
  if ( (unsigned int)v7 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime = (struct _FILETIME)(-10000 * v7 / 3);
      SetThreadpoolTimer(ThreadpoolTimer, &pftDueTime, (unsigned int)v7 / 3, 0);
    }
  }
  if ( (unsigned int)IsPbmCastingAppStateChangedSupported() )
  {
    v4 = PbmCastingAppStateChanged(a1, a2);
    goto LABEL_9;
  }
  if ( !g_PolicyManager )
    goto LABEL_9;
  Context = 0LL;
  if ( (**(int (__fastcall ***)(struct IAudioPolicyManager *, GUID *, LPVOID *))g_PolicyManager)(
         g_PolicyManager,
         &GUID_4daceb65_66e6_401c_bbb5_03e1343d4a0c,
         &Context) < 0 )
  {
LABEL_22:
    v13 = Context;
    if ( !Context )
      goto LABEL_9;
    goto LABEL_23;
  }
  fPending = 0LL;
  v4 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64, __int64 *))(*(_QWORD *)g_PolicyManager + 32LL))(
         g_PolicyManager,
         a1,
         &fPending);
  if ( v4 >= 0 )
  {
    LOBYTE(v12) = a2 == 0;
    v4 = (*(__int64 (__fastcall **)(LPVOID, __int64, __int64))(*(_QWORD *)Context + 32LL))(Context, fPending, v12);
    if ( fPending )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)fPending + 16LL))(fPending);
    goto LABEL_22;
  }
  if ( fPending )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)fPending + 16LL))(fPending);
  v13 = Context;
  if ( Context )
LABEL_23:
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v13 + 16LL))(v13);
LABEL_9:
  if ( pv[0] )
  {
    SetThreadpoolTimer(pv[0], 0LL, 0, 0);
    WaitForThreadpoolTimerCallbacks(pv[0], 1);
    CloseThreadpoolTimer(pv[0]);
    pv[0] = 0LL;
  }
  if ( v21 && v20 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v20 + 8LL))(v20);
  return (unsigned int)v4;
}
