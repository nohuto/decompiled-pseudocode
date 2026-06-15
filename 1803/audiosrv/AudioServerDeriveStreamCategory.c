/*
 * XREFs of AudioServerDeriveStreamCategory @ 0x180016300
 * Callers:
 *     <none>
 * Callees:
 *     ??1Completer@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x1800099F0 (--1Completer@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     atexit @ 0x180060F5C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AudioServerDeriveStreamCategory(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  struct _TP_TIMER *v8; // rcx
  void *v9; // rbx
  __int64 v10; // rdi
  struct _TP_TIMER *ThreadpoolTimer; // r10
  int v12; // ebx
  __int64 v14; // rdx
  void *v15; // r8
  WINBOOL fPending; // [rsp+38h] [rbp-29h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-21h] BYREF
  struct _FILETIME pftDueTime; // [rsp+48h] [rbp-19h] BYREF
  int v19; // [rsp+50h] [rbp-11h]
  __int64 v20; // [rsp+58h] [rbp-9h]
  PTP_TIMER pv[2]; // [rsp+60h] [rbp-1h] BYREF
  DWORD CurrentThreadId; // [rsp+70h] [rbp+Fh]
  const wchar_t *v23; // [rsp+78h] [rbp+17h]
  void *v24; // [rsp+80h] [rbp+1Fh]
  char v25; // [rsp+88h] [rbp+27h]
  int v26; // [rsp+8Ch] [rbp+2Bh]

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
  v23 = L"AudioServerDeriveStreamCategory";
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
  if ( g_PolicyManager )
  {
    v12 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64, _QWORD, _QWORD, __int64))(*(_QWORD *)g_PolicyManager + 104LL))(
            g_PolicyManager,
            a1,
            a2,
            a3,
            a4);
    if ( v12 >= 0 )
      goto LABEL_9;
  }
  else
  {
    v12 = -2147418113;
  }
  AudSrvTraceLoggingErrorHelper("AudioServerDeriveStreamCategory", 0x124Au, v12);
LABEL_9:
  if ( pv[0] )
  {
    SetThreadpoolTimer(pv[0], 0LL, 0, 0);
    WaitForThreadpoolTimerCallbacks(pv[0], 1);
    CloseThreadpoolTimer(pv[0]);
    pv[0] = 0LL;
  }
  if ( v25 && v24 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v24 + 8LL))(v24);
  return (unsigned int)v12;
}
