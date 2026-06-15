/*
 * XREFs of s_tsRegisterAudioProtocolNotification @ 0x180016930
 * Callers:
 *     <none>
 * Callees:
 *     ??1Completer@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x1800099F0 (--1Completer@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x180060F5C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall s_tsRegisterAudioProtocolNotification(__int64 a1, __int64 a2)
{
  struct _TP_TIMER *v4; // rcx
  void *v5; // rbx
  __int64 v6; // rdi
  struct _TP_TIMER *ThreadpoolTimer; // r10
  unsigned int v8; // ebx
  __int64 v10; // rdx
  void *v11; // r8
  struct _FILETIME pftDueTime; // [rsp+20h] [rbp-50h] BYREF
  int v13; // [rsp+28h] [rbp-48h]
  __int64 v14; // [rsp+30h] [rbp-40h]
  PTP_TIMER pv[2]; // [rsp+38h] [rbp-38h] BYREF
  DWORD CurrentThreadId; // [rsp+48h] [rbp-28h]
  const wchar_t *v17; // [rsp+50h] [rbp-20h]
  void *v18; // [rsp+58h] [rbp-18h]
  char v19; // [rsp+60h] [rbp-10h]
  int v20; // [rsp+64h] [rbp-Ch]
  WINBOOL fPending; // [rsp+B0h] [rbp+40h] BYREF
  LPVOID Context; // [rsp+B8h] [rbp+48h] BYREF

  v14 = -2LL;
  if ( !(unsigned int)IsTSRegisterAudioProtocolNotificationSupported() )
    return 1LL;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    pftDueTime = (struct _FILETIME)&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper;
    Context = &qword_18018A2A0;
    qword_18018A2A0 = &AudioSrvTelemetryProvider::`vftable';
    qword_18018A2B8 = (TraceLoggingHProvider)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    v13 = 0;
    wil::details::static_lazy<AudioSrvTelemetryProvider>::Completer::~Completer((unsigned int *)&pftDueTime, v10, v11);
  }
  v4 = (struct _TP_TIMER *)*((_QWORD *)Context + 1);
  v5 = g_AudioHealthMonitor;
  v6 = g_AudioSrvWatchDogTimerInMs;
  pv[0] = 0LL;
  pv[1] = v4;
  CurrentThreadId = GetCurrentThreadId();
  v17 = L"s_tsRegisterAudioProtocolNotification";
  v18 = v5;
  v19 = 0;
  v20 = 0;
  if ( (unsigned int)v6 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime = (struct _FILETIME)(-10000 * v6 / 3);
      SetThreadpoolTimer(ThreadpoolTimer, &pftDueTime, (unsigned int)v6 / 3, 0);
    }
  }
  v8 = TS_RegisterAudioProtocolNotification(a1, a2);
  if ( pv[0] )
  {
    SetThreadpoolTimer(pv[0], 0LL, 0, 0);
    WaitForThreadpoolTimerCallbacks(pv[0], 1);
    CloseThreadpoolTimer(pv[0]);
    pv[0] = 0LL;
  }
  if ( v19 )
  {
    if ( v18 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v18 + 8LL))(v18);
  }
  return v8;
}
