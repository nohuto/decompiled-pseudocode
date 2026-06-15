/*
 * XREFs of AudioServerDestroyStream @ 0x1800323F0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReceiveSuccess@CAudioHealthMonitor@@UEAAXPEBGPEBU_TlgProvider_t@@@Z @ 0x18001DE40 (-ReceiveSuccess@CAudioHealthMonitor@@UEAAXPEBGPEBU_TlgProvider_t@@@Z.c)
 *     ?DestroyStream@CVADServer@@UEAAJ_K@Z @ 0x180032590 (-DestroyStream@CVADServer@@UEAAJ_K@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180038800 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     atexit @ 0x18004925C (atexit.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioServerDestroyStream(CVADServer *this, unsigned __int64 a2)
{
  GUID v4; // xmm0
  CAudioHealthMonitor *v5; // rbx
  DWORD DueTime; // esi
  struct _TlgProvider_t *v7; // rcx
  DWORD CurrentThreadId; // eax
  __int64 (__fastcall *v9)(CVADServer *__hidden, unsigned __int64); // rax
  int v10; // eax
  unsigned int v11; // ebx
  void (__fastcall *v12)(CAudioHealthMonitor *, const unsigned __int16 *, const struct _TlgProvider_t *); // rax
  WINBOOL fPending; // [rsp+40h] [rbp-29h] BYREF
  void *phNewTimer; // [rsp+48h] [rbp-21h] BYREF
  struct _TlgProvider_t *v16; // [rsp+50h] [rbp-19h]
  DWORD v17; // [rsp+58h] [rbp-11h]
  unsigned __int16 *v18; // [rsp+60h] [rbp-9h]
  CAudioHealthMonitor *v19; // [rsp+68h] [rbp-1h]
  LPVOID Context[2]; // [rsp+70h] [rbp+7h] BYREF
  GUID v21; // [rsp+80h] [rbp+17h]
  GUID v22; // [rsp+90h] [rbp+27h] BYREF

  if ( this )
    v4 = (GUID)*((_OWORD *)this + 17);
  else
    v4 = GUID_00000000_0000_0000_0000_000000000000;
  *(GUID *)Context = v4;
  v21 = v4;
  v22 = v4;
  EtwEventActivityIdControl(4LL, &v22);
  InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, Context);
  if ( fPending )
  {
    Context[0] = qword_18012BF30;
    qword_18012BF30[0] = &AudioSrvTelemetryProvider::`vftable';
    qword_18012BF48 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18012BF30, qword_18012BF48);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_18012BF30);
  }
  v5 = (CAudioHealthMonitor *)g_AudioHealthMonitor;
  DueTime = g_AudioSrvWatchDogTimerInMs;
  v7 = (struct _TlgProvider_t *)*((_QWORD *)Context[0] + 1);
  phNewTimer = 0LL;
  v16 = v7;
  CurrentThreadId = GetCurrentThreadId();
  v19 = v5;
  v17 = CurrentThreadId;
  v18 = L"AudioServerDestroyStream";
  if ( DueTime >= 0x3E8 )
    CreateTimerQueueTimer(&phNewTimer, 0LL, CWatchdogTimer::TimerCallback, &phNewTimer, DueTime, 0, 0x20u);
  v9 = *(__int64 (__fastcall **)(CVADServer *__hidden, unsigned __int64))(*(_QWORD *)this + 88LL);
  if ( v9 == CVADServer::DestroyStream )
    v10 = CVADServer::DestroyStream(this, a2);
  else
    v10 = v9(this, a2);
  v11 = v10;
  if ( v10 < 0 )
    AudSrvTraceLoggingErrorHelper("AudioServerDestroyStream", 0xC3Bu, v10);
  if ( phNewTimer )
  {
    DeleteTimerQueueTimer(0LL, phNewTimer, (HANDLE)0xFFFFFFFFFFFFFFFFLL);
    phNewTimer = 0LL;
  }
  if ( v19 )
  {
    v12 = *(void (__fastcall **)(CAudioHealthMonitor *, const unsigned __int16 *, const struct _TlgProvider_t *))(*(_QWORD *)v19 + 8LL);
    if ( v12 == CAudioHealthMonitor::ReceiveSuccess )
      CAudioHealthMonitor::ReceiveSuccess(v19, v18, v16);
    else
      v12(v19, v18, v16);
  }
  EtwEventActivityIdControl(4LL, &v22);
  return v11;
}
