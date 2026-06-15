/*
 * XREFs of AudioServerStartStream @ 0x180023310
 * Callers:
 *     <none>
 * Callees:
 *     ??1Completer@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x1800099F0 (--1Completer@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     ?StartStream@CVADServer@@UEAAJ_KW4VadStreamStateChangeReason@@@Z @ 0x180023500 (-StartStream@CVADServer@@UEAAJ_KW4VadStreamStateChangeReason@@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     atexit @ 0x180060F5C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AudioServerStartStream(__int64 a1, __int64 a2)
{
  GUID v4; // xmm0
  struct _TP_TIMER *v5; // rcx
  void *v6; // rdi
  __int64 v7; // rsi
  struct _TP_TIMER *ThreadpoolTimer; // r10
  __int64 (__fastcall *v9)(__int64, __int64, __int64); // rax
  int started; // eax
  unsigned int v11; // ebx
  __int64 v13; // rdx
  void *v14; // r8
  WINBOOL fPending; // [rsp+20h] [rbp-49h] BYREF
  LPVOID Context; // [rsp+28h] [rbp-41h] BYREF
  PTP_TIMER pv[2]; // [rsp+30h] [rbp-39h] BYREF
  DWORD CurrentThreadId; // [rsp+40h] [rbp-29h]
  const wchar_t *v19; // [rsp+48h] [rbp-21h]
  void *v20; // [rsp+50h] [rbp-19h]
  char v21; // [rsp+58h] [rbp-11h]
  int v22; // [rsp+5Ch] [rbp-Dh]
  __int64 v23; // [rsp+60h] [rbp-9h]
  struct _FILETIME pftDueTime[2]; // [rsp+68h] [rbp-1h] BYREF
  GUID v25; // [rsp+78h] [rbp+Fh]
  GUID v26; // [rsp+88h] [rbp+1Fh] BYREF

  v23 = -2LL;
  if ( a1 )
    v4 = *(GUID *)(a1 + 280);
  else
    v4 = GUID_00000000_0000_0000_0000_000000000000;
  *(GUID *)&pftDueTime[0].dwLowDateTime = v4;
  v25 = v4;
  v26 = v4;
  EtwEventActivityIdControl(4LL, &v26);
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    pftDueTime[0] = (struct _FILETIME)&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper;
    Context = &qword_18018A2A0;
    qword_18018A2A0 = &AudioSrvTelemetryProvider::`vftable';
    qword_18018A2B8 = (TraceLoggingHProvider)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    pftDueTime[1].dwLowDateTime = 0;
    wil::details::static_lazy<AudioSrvTelemetryProvider>::Completer::~Completer((unsigned int *)pftDueTime, v13, v14);
  }
  v5 = (struct _TP_TIMER *)*((_QWORD *)Context + 1);
  v6 = g_AudioHealthMonitor;
  v7 = g_AudioSrvWatchDogTimerInMs;
  pv[0] = 0LL;
  pv[1] = v5;
  CurrentThreadId = GetCurrentThreadId();
  v19 = L"AudioServerStartStream";
  v20 = v6;
  v21 = 0;
  v22 = 0;
  if ( (unsigned int)v7 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime[0] = (struct _FILETIME)(-10000 * v7 / 3);
      SetThreadpoolTimer(ThreadpoolTimer, pftDueTime, (unsigned int)v7 / 3, 0);
    }
  }
  v9 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 64LL);
  if ( v9 == CVADServer::StartStream )
    started = CVADServer::StartStream(a1, a2, 2LL);
  else
    started = v9(a1, a2, 2LL);
  v11 = started;
  if ( started < 0 )
    AudSrvTraceLoggingErrorHelper("AudioServerStartStream", 0xCDBu, started);
  if ( pv[0] )
  {
    SetThreadpoolTimer(pv[0], 0LL, 0, 0);
    WaitForThreadpoolTimerCallbacks(pv[0], 1);
    CloseThreadpoolTimer(pv[0]);
    pv[0] = 0LL;
  }
  if ( v21 && v20 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v20 + 8LL))(v20);
  EtwEventActivityIdControl(4LL, &v26);
  return v11;
}
