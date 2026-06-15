/*
 * XREFs of AudioServerCreateStream @ 0x18002AF60
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18001B110 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_.c)
 *     ?ReceiveSuccess@CAudioHealthMonitor@@UEAAXPEBGPEBU_TlgProvider_t@@@Z @ 0x18001DE40 (-ReceiveSuccess@CAudioHealthMonitor@@UEAAXPEBGPEBU_TlgProvider_t@@@Z.c)
 *     ?GetThreadLogonSessionStringSid@@YAJPEAPEAG@Z @ 0x18002B1D0 (-GetThreadLogonSessionStringSid@@YAJPEAPEAG@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180038800 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     atexit @ 0x18004925C (atexit.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ??1CWatchdogTimer@@QEAA@XZ @ 0x18007B9E8 (--1CWatchdogTimer@@QEAA@XZ.c)
 */

__int64 __fastcall AudioServerCreateStream(
        _OWORD *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        struct SYSTEM_AUDIO_STREAM *a6)
{
  GUID v10; // xmm0
  RPC_STATUS ThreadLogonSessionStringSid; // ebx
  CAudioHealthMonitor *v12; // rbx
  DWORD DueTime; // edi
  DWORD CurrentThreadId; // eax
  HLOCAL v15; // rdi
  __int64 (__fastcall *v16)(__int64, struct IAudioProcess *, unsigned int, __int64, __int64, unsigned __int16 *, struct SYSTEM_AUDIO_STREAM *); // rax
  RPC_STATUS Stream; // eax
  void (__fastcall *v18)(CAudioHealthMonitor *, const unsigned __int16 *, const struct _TlgProvider_t *); // rax
  struct IAudioProcess *v20; // [rsp+40h] [rbp-79h] BYREF
  WINBOOL fPending; // [rsp+48h] [rbp-71h] BYREF
  void *phNewTimer; // [rsp+50h] [rbp-69h] BYREF
  struct _TlgProvider_t *v23; // [rsp+58h] [rbp-61h]
  DWORD v24; // [rsp+60h] [rbp-59h]
  unsigned __int16 *v25; // [rsp+68h] [rbp-51h]
  CAudioHealthMonitor *v26; // [rsp+70h] [rbp-49h]
  LPVOID Context; // [rsp+78h] [rbp-41h] BYREF
  HLOCAL hMem[2]; // [rsp+80h] [rbp-39h] BYREF
  GUID v29; // [rsp+90h] [rbp-29h]
  GUID v30; // [rsp+A0h] [rbp-19h] BYREF

  if ( a1 )
    v10 = (GUID)a1[17];
  else
    v10 = GUID_00000000_0000_0000_0000_000000000000;
  hMem[1] = *(HLOCAL *)v10.Data4;
  v29 = v10;
  v30 = v10;
  EtwEventActivityIdControl(4LL, &v30);
  v20 = 0LL;
  hMem[0] = 0LL;
  ThreadLogonSessionStringSid = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, _QWORD, struct IAudioProcess **))(*(_QWORD *)g_PolicyManager + 32LL))(
                                  g_PolicyManager,
                                  0LL,
                                  &v20);
  if ( ThreadLogonSessionStringSid >= 0 )
  {
    ThreadLogonSessionStringSid = (*(__int64 (__fastcall **)(struct IAudioProcess *, bool, _QWORD))(*(_QWORD *)v20
                                                                                                  + 144LL))(
                                    v20,
                                    a2 != 0,
                                    a5);
    if ( ThreadLogonSessionStringSid >= 0 )
    {
      InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context);
      if ( fPending )
      {
        Context = qword_18012BF30;
        qword_18012BF30[0] = &AudioSrvTelemetryProvider::`vftable';
        qword_18012BF48 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18012BF30, qword_18012BF48);
        InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_18012BF30);
      }
      v12 = (CAudioHealthMonitor *)g_AudioHealthMonitor;
      DueTime = g_AudioSrvWatchDogTimerInMs;
      v23 = (struct _TlgProvider_t *)*((_QWORD *)Context + 1);
      phNewTimer = 0LL;
      CurrentThreadId = GetCurrentThreadId();
      v26 = v12;
      v24 = CurrentThreadId;
      v25 = L"AudioServerCreateStream";
      if ( DueTime >= 0x3E8 )
        CreateTimerQueueTimer(&phNewTimer, 0LL, CWatchdogTimer::TimerCallback, &phNewTimer, DueTime, 0, 0x20u);
      ThreadLogonSessionStringSid = RpcImpersonateClient(0LL);
      if ( ThreadLogonSessionStringSid )
      {
        CWatchdogTimer::~CWatchdogTimer((CWatchdogTimer *)&phNewTimer);
      }
      else
      {
        ThreadLogonSessionStringSid = GetThreadLogonSessionStringSid((unsigned __int16 **)hMem);
        RpcRevertToSelf();
        v15 = hMem[0];
        if ( ThreadLogonSessionStringSid < 0 )
        {
          CWatchdogTimer::~CWatchdogTimer((CWatchdogTimer *)&phNewTimer);
        }
        else
        {
          v16 = *(__int64 (__fastcall **)(__int64, struct IAudioProcess *, unsigned int, __int64, __int64, unsigned __int16 *, struct SYSTEM_AUDIO_STREAM *))(*(_QWORD *)a1 + 56LL);
          if ( v16 == CVADServer::CreateStream )
            Stream = CVADServer::CreateStream((__int64)a1, v20, a2, a3, a4, (unsigned __int16 *)hMem[0], a6);
          else
            Stream = ((__int64 (__fastcall *)(_OWORD *, struct IAudioProcess *, _QWORD, __int64))v16)(a1, v20, a2, a3);
          ThreadLogonSessionStringSid = Stream;
          if ( phNewTimer )
          {
            DeleteTimerQueueTimer(0LL, phNewTimer, (HANDLE)0xFFFFFFFFFFFFFFFFLL);
            phNewTimer = 0LL;
          }
          if ( v26 )
          {
            v18 = *(void (__fastcall **)(CAudioHealthMonitor *, const unsigned __int16 *, const struct _TlgProvider_t *))(*(_QWORD *)v26 + 8LL);
            if ( v18 == CAudioHealthMonitor::ReceiveSuccess )
              CAudioHealthMonitor::ReceiveSuccess(v26, v25, v23);
            else
              v18(v26, v25, v23);
          }
        }
        if ( v15 )
          LocalFree(v15);
      }
    }
  }
  if ( v20 )
  {
    (*(void (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v20 + 16LL))(v20);
    v20 = 0LL;
  }
  if ( ThreadLogonSessionStringSid < 0 )
    AudSrvTraceLoggingErrorHelper("AudioServerCreateStream", 0xBB7u, ThreadLogonSessionStringSid);
  EtwEventActivityIdControl(4LL, &v30);
  return (unsigned int)ThreadLogonSessionStringSid;
}
