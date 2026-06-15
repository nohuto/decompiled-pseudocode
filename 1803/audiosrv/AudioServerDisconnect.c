/*
 * XREFs of AudioServerDisconnect @ 0x180049220
 * Callers:
 *     <none>
 * Callees:
 *     ??1Completer@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x1800099F0 (--1Completer@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     ?Release@?$CComObject@VCVADServer@@@ATL@@UEAAKXZ @ 0x180016F10 (-Release@-$CComObject@VCVADServer@@@ATL@@UEAAKXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?SetTimer@CAudioThreadPool@@UEAAXPEAU_TP_TIMER@@PEAU_FILETIME@@KK@Z @ 0x180035E40 (-SetTimer@CAudioThreadPool@@UEAAXPEAU_TP_TIMER@@PEAU_FILETIME@@KK@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     atexit @ 0x180060F5C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AudioServerDisconnect(int **a1)
{
  GUID v2; // xmm0
  struct _TP_TIMER *v3; // rcx
  void *v4; // rbx
  __int64 v5; // rsi
  struct _TP_TIMER *ThreadpoolTimer; // r10
  void (*v7)(void); // rax
  LPCRITICAL_SECTION v8; // rbx
  CAudioThreadPool *v10; // rdi
  __int64 v11; // rax
  struct _TP_TIMER *v12; // rdx
  void (__fastcall *v13)(CAudioThreadPool *, struct _TP_TIMER *, struct _FILETIME *, DWORD, DWORD); // rax
  __int64 v15; // rdx
  void *v16; // r8
  WINBOOL fPending; // [rsp+48h] [rbp-49h] BYREF
  struct _FILETIME pftDueTime; // [rsp+50h] [rbp-41h] BYREF
  LPVOID Context; // [rsp+58h] [rbp-39h] BYREF
  PTP_TIMER pv[2]; // [rsp+60h] [rbp-31h] BYREF
  DWORD CurrentThreadId; // [rsp+70h] [rbp-21h]
  const wchar_t *v22; // [rsp+78h] [rbp-19h]
  void *v23; // [rsp+80h] [rbp-11h]
  char v24; // [rsp+88h] [rbp-9h]
  int v25; // [rsp+8Ch] [rbp-5h]
  __int64 v26; // [rsp+90h] [rbp-1h]
  LPCRITICAL_SECTION lpCriticalSection[2]; // [rsp+98h] [rbp+7h] BYREF
  GUID v28; // [rsp+A8h] [rbp+17h]
  GUID v29; // [rsp+B8h] [rbp+27h] BYREF

  v26 = -2LL;
  if ( *a1 )
    v2 = *(GUID *)(*a1 + 70);
  else
    v2 = GUID_00000000_0000_0000_0000_000000000000;
  *(GUID *)lpCriticalSection = v2;
  v28 = v2;
  v29 = v2;
  EtwEventActivityIdControl(4LL, &v29);
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    lpCriticalSection[0] = (LPCRITICAL_SECTION)&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper;
    Context = &qword_18018A2A0;
    qword_18018A2A0 = &AudioSrvTelemetryProvider::`vftable';
    qword_18018A2B8 = (TraceLoggingHProvider)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    LODWORD(lpCriticalSection[1]) = 0;
    wil::details::static_lazy<AudioSrvTelemetryProvider>::Completer::~Completer(
      (unsigned int *)lpCriticalSection,
      v15,
      v16);
  }
  v3 = (struct _TP_TIMER *)*((_QWORD *)Context + 1);
  v4 = g_AudioHealthMonitor;
  v5 = g_AudioSrvWatchDogTimerInMs;
  pv[0] = 0LL;
  pv[1] = v3;
  CurrentThreadId = GetCurrentThreadId();
  v22 = L"AudioServerDisconnect";
  v23 = v4;
  v24 = 0;
  v25 = 0;
  if ( (unsigned int)v5 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime = (struct _FILETIME)(-10000 * v5 / 3);
      SetThreadpoolTimer(ThreadpoolTimer, &pftDueTime, (unsigned int)v5 / 3, 0);
    }
  }
  v7 = *(void (**)(void))(*(_QWORD *)*a1 + 16LL);
  if ( (char *)v7 == (char *)ATL::CComObject<CVADServer>::Release )
    ATL::CComObject<CVADServer>::Release(*a1);
  else
    v7();
  *a1 = 0LL;
  v8 = g_ADGProcess;
  lpCriticalSection[0] = g_ADGProcess;
  LOBYTE(lpCriticalSection[1]) = 0;
  ATL::CCritSecLock::Lock(lpCriticalSection);
  if ( LODWORD(v8[1].DebugInfo)-- == 1 )
  {
    v10 = ThreadPool;
    if ( !*(_QWORD *)&v8[3].LockCount )
      *(_QWORD *)&v8[3].LockCount = (*(__int64 (__fastcall **)(CAudioThreadPool *, _QWORD, LPCRITICAL_SECTION))(*(_QWORD *)ThreadPool + 8LL))(
                                      ThreadPool,
                                      CAudioDGProcess::OnADGInactivityTimerFiredHandler,
                                      v8);
    LODWORD(Context) = 4;
    if ( RegGetValueW(
           HKEY_LOCAL_MACHINE,
           L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
           L"AudioDGInactiveTimeout",
           0x18u,
           0LL,
           &fPending,
           (LPDWORD)&Context) )
    {
      v11 = 300LL;
      fPending = 300;
    }
    else
    {
      v11 = (unsigned int)fPending;
    }
    v12 = *(struct _TP_TIMER **)&v8[3].LockCount;
    if ( v12 )
    {
      pftDueTime = (struct _FILETIME)(-10000000 * v11);
      v13 = *(void (__fastcall **)(CAudioThreadPool *, struct _TP_TIMER *, struct _FILETIME *, DWORD, DWORD))(*(_QWORD *)v10 + 24LL);
      if ( v13 == CAudioThreadPool::SetTimer )
        CAudioThreadPool::SetTimer(v10, v12, &pftDueTime, 0, 0);
      else
        v13(v10, v12, &pftDueTime, 0LL, 0);
    }
  }
  if ( LOBYTE(lpCriticalSection[1]) )
    LeaveCriticalSection(lpCriticalSection[0]);
  if ( pv[0] )
  {
    SetThreadpoolTimer(pv[0], 0LL, 0, 0);
    WaitForThreadpoolTimerCallbacks(pv[0], 1);
    CloseThreadpoolTimer(pv[0]);
    pv[0] = 0LL;
  }
  if ( v24 && v23 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v23 + 8LL))(v23);
  EtwEventActivityIdControl(4LL, &v29);
  return 0LL;
}
