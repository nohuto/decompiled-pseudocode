/*
 * XREFs of AudioServerGetAllVolumes @ 0x180003B40
 * Callers:
 *     <none>
 * Callees:
 *     ?GetAllVolumes@CVADServer@@UEAAJIPEAM@Z @ 0x180003E00 (-GetAllVolumes@CVADServer@@UEAAJIPEAM@Z.c)
 *     ??1Completer@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x1800099F0 (--1Completer@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     atexit @ 0x180060F5C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AudioServerGetAllVolumes(CVADServer *this, unsigned int a2, float *a3)
{
  GUID v6; // xmm0
  struct _TP_TIMER *v7; // rcx
  void *v8; // rbx
  __int64 v9; // rsi
  struct _TP_TIMER *ThreadpoolTimer; // r10
  __int64 (__fastcall *v11)(CVADServer *__hidden, unsigned int, float *); // rax
  int AllVolumes; // eax
  unsigned int v13; // ebx
  WINBOOL fPending; // [rsp+28h] [rbp-49h] BYREF
  LPVOID Context; // [rsp+30h] [rbp-41h] BYREF
  PTP_TIMER pv[2]; // [rsp+38h] [rbp-39h] BYREF
  DWORD CurrentThreadId; // [rsp+48h] [rbp-29h]
  const wchar_t *v19; // [rsp+50h] [rbp-21h]
  void *v20; // [rsp+58h] [rbp-19h]
  char v21; // [rsp+60h] [rbp-11h]
  int v22; // [rsp+64h] [rbp-Dh]
  __int64 v23; // [rsp+68h] [rbp-9h]
  _FILETIME pftDueTime[2]; // [rsp+70h] [rbp-1h] BYREF
  GUID v25; // [rsp+80h] [rbp+Fh]
  GUID v26; // [rsp+90h] [rbp+1Fh] BYREF

  v23 = -2LL;
  if ( this )
    v6 = *(GUID *)((char *)this + 280);
  else
    v6 = GUID_00000000_0000_0000_0000_000000000000;
  *(GUID *)&pftDueTime[0].dwLowDateTime = v6;
  v25 = v6;
  v26 = v6;
  EtwEventActivityIdControl(4LL, &v26);
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    pftDueTime[0] = (_FILETIME)&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper;
    Context = &qword_18018A2A0;
    qword_18018A2A0 = &AudioSrvTelemetryProvider::`vftable';
    qword_18018A2B8 = (TraceLoggingHProvider)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    pftDueTime[1].dwLowDateTime = 0;
    wil::details::static_lazy<AudioSrvTelemetryProvider>::Completer::~Completer(pftDueTime);
  }
  v7 = (struct _TP_TIMER *)*((_QWORD *)Context + 1);
  v8 = g_AudioHealthMonitor;
  v9 = g_AudioSrvWatchDogTimerInMs;
  pv[0] = 0LL;
  pv[1] = v7;
  CurrentThreadId = GetCurrentThreadId();
  v19 = L"AudioServerGetAllVolumes";
  v20 = v8;
  v21 = 0;
  v22 = 0;
  if ( (unsigned int)v9 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime[0] = (_FILETIME)(-10000 * v9 / 3);
      SetThreadpoolTimer(ThreadpoolTimer, pftDueTime, (unsigned int)v9 / 3, 0);
    }
  }
  v11 = *(__int64 (__fastcall **)(CVADServer *__hidden, unsigned int, float *))(*(_QWORD *)this + 216LL);
  if ( v11 == CVADServer::GetAllVolumes )
    AllVolumes = CVADServer::GetAllVolumes(this, a2, a3);
  else
    AllVolumes = v11(this, a2, a3);
  v13 = AllVolumes;
  if ( AllVolumes < 0 )
    AudSrvTraceLoggingErrorHelper("AudioServerGetAllVolumes", 0xE6Bu, AllVolumes);
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
  return v13;
}
