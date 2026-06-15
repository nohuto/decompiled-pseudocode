/*
 * XREFs of s_pbmReportAppInteractivityChange @ 0x180015290
 * Callers:
 *     <none>
 * Callees:
 *     ??1Completer@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x1800099F0 (--1Completer@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x180060F5C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall s_pbmReportAppInteractivityChange(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  struct _TP_TIMER *v8; // rcx
  void *v9; // rbx
  __int64 v10; // rdi
  struct _TP_TIMER *ThreadpoolTimer; // r10
  unsigned int v12; // ebx
  __int64 v14; // rdx
  void *v15; // r8
  WINBOOL fPending; // [rsp+20h] [rbp-60h] BYREF
  LPVOID Context; // [rsp+28h] [rbp-58h] BYREF
  struct _FILETIME pftDueTime; // [rsp+30h] [rbp-50h] BYREF
  int v19; // [rsp+38h] [rbp-48h]
  __int64 v20; // [rsp+40h] [rbp-40h]
  PTP_TIMER pv[2]; // [rsp+48h] [rbp-38h] BYREF
  DWORD CurrentThreadId; // [rsp+58h] [rbp-28h]
  const wchar_t *v23; // [rsp+60h] [rbp-20h]
  void *v24; // [rsp+68h] [rbp-18h]
  char v25; // [rsp+70h] [rbp-10h]
  int v26; // [rsp+74h] [rbp-Ch]

  v20 = -2LL;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    pftDueTime = (struct _FILETIME)&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper;
    Context = &qword_18018A2A0;
    qword_18018A2A0 = &AudioSrvTelemetryProvider::`vftable';
    qword_18018A2B8 = (TraceLoggingHProvider)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    v19 = 0;
    wil::details::static_lazy<AudioSrvTelemetryProvider>::Completer::~Completer((unsigned int *)&pftDueTime, v14, v15);
  }
  v8 = (struct _TP_TIMER *)*((_QWORD *)Context + 1);
  v9 = g_AudioHealthMonitor;
  v10 = g_AudioSrvWatchDogTimerInMs;
  pv[0] = 0LL;
  pv[1] = v8;
  CurrentThreadId = GetCurrentThreadId();
  v23 = L"s_pbmReportAppInteractivityChange";
  v24 = v9;
  v25 = 0;
  v26 = 0;
  if ( (unsigned int)v10 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime = (struct _FILETIME)(-10000 * v10 / 3);
      SetThreadpoolTimer(ThreadpoolTimer, &pftDueTime, (unsigned int)v10 / 3, 0);
    }
  }
  if ( (unsigned int)IsPbmReportAppInteractivityChangeSupported() )
    v12 = PbmReportAppInteractivityChange(a1, a2, a3, a4);
  else
    v12 = 0;
  if ( pv[0] )
  {
    SetThreadpoolTimer(pv[0], 0LL, 0, 0);
    WaitForThreadpoolTimerCallbacks(pv[0], 1);
    CloseThreadpoolTimer(pv[0]);
    pv[0] = 0LL;
  }
  if ( v25 && v24 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v24 + 8LL))(v24);
  return v12;
}
