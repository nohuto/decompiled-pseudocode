/*
 * XREFs of s_pbmReportHostedAppStateChange @ 0x1800141B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1Completer@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x1800099F0 (--1Completer@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x180060F5C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall s_pbmReportHostedAppStateChange(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  struct _TP_TIMER *v9; // rcx
  void *v10; // rbx
  __int64 v11; // rdi
  struct _TP_TIMER *ThreadpoolTimer; // r10
  unsigned int v13; // ebx
  __int64 v15; // rdx
  void *v16; // r8
  WINBOOL fPending; // [rsp+38h] [rbp-31h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-29h] BYREF
  struct _FILETIME pftDueTime; // [rsp+48h] [rbp-21h] BYREF
  int v20; // [rsp+50h] [rbp-19h]
  __int64 v21; // [rsp+58h] [rbp-11h]
  PTP_TIMER pv[2]; // [rsp+60h] [rbp-9h] BYREF
  DWORD CurrentThreadId; // [rsp+70h] [rbp+7h]
  const wchar_t *v24; // [rsp+78h] [rbp+Fh]
  void *v25; // [rsp+80h] [rbp+17h]
  char v26; // [rsp+88h] [rbp+1Fh]
  int v27; // [rsp+8Ch] [rbp+23h]

  v21 = -2LL;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    pftDueTime = (struct _FILETIME)&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper;
    Context = &qword_18018A2A0;
    qword_18018A2A0 = &AudioSrvTelemetryProvider::`vftable';
    qword_18018A2B8 = (TraceLoggingHProvider)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    v20 = 0;
    wil::details::static_lazy<AudioSrvTelemetryProvider>::Completer::~Completer((unsigned int *)&pftDueTime, v15, v16);
  }
  v9 = (struct _TP_TIMER *)*((_QWORD *)Context + 1);
  v10 = g_AudioHealthMonitor;
  v11 = g_AudioSrvWatchDogTimerInMs;
  pv[0] = 0LL;
  pv[1] = v9;
  CurrentThreadId = GetCurrentThreadId();
  v24 = L"s_pbmReportHostedAppStateChange";
  v25 = v10;
  v26 = 0;
  v27 = 0;
  if ( (unsigned int)v11 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime = (struct _FILETIME)(-10000 * v11 / 3);
      SetThreadpoolTimer(ThreadpoolTimer, &pftDueTime, (unsigned int)v11 / 3, 0);
    }
  }
  if ( (unsigned int)IsPbmReportHostedAppStateChangeSupported() )
    v13 = PbmReportHostedAppStateChange(a1, a2, a3, a4, a5);
  else
    v13 = 0;
  if ( pv[0] )
  {
    SetThreadpoolTimer(pv[0], 0LL, 0, 0);
    WaitForThreadpoolTimerCallbacks(pv[0], 1);
    CloseThreadpoolTimer(pv[0]);
    pv[0] = 0LL;
  }
  if ( v26 && v25 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v25 + 8LL))(v25);
  return v13;
}
