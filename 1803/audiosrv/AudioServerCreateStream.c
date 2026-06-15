/*
 * XREFs of AudioServerCreateStream @ 0x180023040
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800098C8 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ??1Completer@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x1800099F0 (--1Completer@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180023A10 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_.c)
 *     ?GetThreadLogonSessionStringSid@@YAJPEAPEAG@Z @ 0x1800262B0 (-GetThreadLogonSessionStringSid@@YAJPEAPEAG@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     atexit @ 0x180060F5C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AudioServerCreateStream(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6)
{
  GUID v10; // xmm0
  RPC_STATUS ThreadLogonSessionStringSid; // ebx
  struct _TP_TIMER *v12; // rcx
  void *v13; // rbx
  __int64 v14; // rdi
  struct _TP_TIMER *ThreadpoolTimer; // r10
  HLOCAL v16; // rdi
  __int64 (__fastcall *v17)(__int64, __int64, _QWORD, __int64, __int64, HLOCAL, __int64); // rax
  RPC_STATUS Stream; // eax
  __int64 v20; // rdx
  void *v21; // r8
  __int64 v22; // [rsp+40h] [rbp-99h] BYREF
  WINBOOL fPending; // [rsp+48h] [rbp-91h] BYREF
  LPVOID Context; // [rsp+50h] [rbp-89h] BYREF
  struct _FILETIME pftDueTime; // [rsp+58h] [rbp-81h] BYREF
  int v26; // [rsp+60h] [rbp-79h]
  PTP_TIMER pv[2]; // [rsp+68h] [rbp-71h] BYREF
  DWORD CurrentThreadId; // [rsp+78h] [rbp-61h]
  const wchar_t *v29; // [rsp+80h] [rbp-59h]
  void *v30; // [rsp+88h] [rbp-51h]
  char v31; // [rsp+90h] [rbp-49h]
  int v32; // [rsp+94h] [rbp-45h]
  __int64 v33; // [rsp+98h] [rbp-41h]
  HLOCAL hMem[2]; // [rsp+A0h] [rbp-39h] BYREF
  GUID v35; // [rsp+B0h] [rbp-29h]
  GUID v36; // [rsp+C0h] [rbp-19h] BYREF

  v33 = -2LL;
  if ( a1 )
    v10 = *(GUID *)(a1 + 280);
  else
    v10 = GUID_00000000_0000_0000_0000_000000000000;
  hMem[1] = *(HLOCAL *)v10.Data4;
  v35 = v10;
  v36 = v10;
  EtwEventActivityIdControl(4LL, &v36);
  hMem[0] = 0LL;
  v22 = 0LL;
  ThreadLogonSessionStringSid = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, _QWORD, __int64 *))(*(_QWORD *)g_PolicyManager + 32LL))(
                                  g_PolicyManager,
                                  0LL,
                                  &v22);
  if ( ThreadLogonSessionStringSid >= 0 )
  {
    ThreadLogonSessionStringSid = (*(__int64 (__fastcall **)(__int64, bool, _QWORD))(*(_QWORD *)v22 + 152LL))(
                                    v22,
                                    a2 == 1,
                                    a5);
    if ( ThreadLogonSessionStringSid >= 0 )
    {
      Context = 0LL;
      if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context)
        && fPending )
      {
        pftDueTime = (struct _FILETIME)&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper;
        Context = &qword_18018A2A0;
        qword_18018A2A0 = &AudioSrvTelemetryProvider::`vftable';
        qword_18018A2B8 = (TraceLoggingHProvider)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
        v26 = 0;
        wil::details::static_lazy<AudioSrvTelemetryProvider>::Completer::~Completer(
          (unsigned int *)&pftDueTime,
          v20,
          v21);
      }
      v12 = (struct _TP_TIMER *)*((_QWORD *)Context + 1);
      v13 = g_AudioHealthMonitor;
      v14 = g_AudioSrvWatchDogTimerInMs;
      pv[0] = 0LL;
      pv[1] = v12;
      CurrentThreadId = GetCurrentThreadId();
      v29 = L"AudioServerCreateStream";
      v30 = v13;
      v31 = 0;
      v32 = 0;
      if ( (unsigned int)v14 >= 0x3E8 )
      {
        ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
        pv[0] = ThreadpoolTimer;
        if ( ThreadpoolTimer )
        {
          pftDueTime = (struct _FILETIME)(-10000 * v14 / 3);
          SetThreadpoolTimer(ThreadpoolTimer, &pftDueTime, (unsigned int)v14 / 3, 0);
        }
      }
      ThreadLogonSessionStringSid = RpcImpersonateClient(0LL);
      if ( ThreadLogonSessionStringSid )
      {
        CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
      }
      else
      {
        ThreadLogonSessionStringSid = GetThreadLogonSessionStringSid((unsigned __int16 **)hMem);
        RpcRevertToSelf();
        v16 = hMem[0];
        if ( ThreadLogonSessionStringSid < 0 )
        {
          CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
        }
        else
        {
          v17 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, __int64, HLOCAL, __int64))(*(_QWORD *)a1 + 56LL);
          if ( (char *)v17 == (char *)CVADServer::CreateStream )
            Stream = CVADServer::CreateStream(a1, v22, a2, a3, a4, hMem[0], a6);
          else
            Stream = v17(a1, v22, a2, a3, a4, hMem[0], a6);
          ThreadLogonSessionStringSid = Stream;
          if ( pv[0] )
          {
            SetThreadpoolTimer(pv[0], 0LL, 0, 0);
            WaitForThreadpoolTimerCallbacks(pv[0], 1);
            CloseThreadpoolTimer(pv[0]);
            pv[0] = 0LL;
          }
          if ( v31 && v30 )
            (*(void (__fastcall **)(void *))(*(_QWORD *)v30 + 8LL))(v30);
        }
        if ( v16 )
          LocalFree(v16);
      }
    }
  }
  if ( v22 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    v22 = 0LL;
  }
  if ( ThreadLogonSessionStringSid < 0 )
    AudSrvTraceLoggingErrorHelper("AudioServerCreateStream", 0xC97u, ThreadLogonSessionStringSid);
  EtwEventActivityIdControl(4LL, &v36);
  return (unsigned int)ThreadLogonSessionStringSid;
}
