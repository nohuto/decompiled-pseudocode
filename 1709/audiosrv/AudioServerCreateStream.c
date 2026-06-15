/*
 * XREFs of AudioServerCreateStream @ 0x180008C70
 * Callers:
 *     <none>
 * Callees:
 *     ?GetThreadLogonSessionStringSid@@YAJPEAPEAG@Z @ 0x180008B1C (-GetThreadLogonSessionStringSid@@YAJPEAPEAG@Z.c)
 *     ??0CWatchdogTimer@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180009810 (--0CWatchdogTimer@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1CWatchdogTimer@@QEAA@XZ @ 0x18000989C (--1CWatchdogTimer@@QEAA@XZ.c)
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800268C0 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_.c)
 *     ??0SetActivityIdFromVadServer@@QEAA@PEAX@Z @ 0x18002B404 (--0SetActivityIdFromVadServer@@QEAA@PEAX@Z.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     atexit @ 0x18003313C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18005FD5C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

__int64 __fastcall AudioServerCreateStream(
        void *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6)
{
  RPC_STATUS ThreadLogonSessionStringSid; // ebx
  unsigned int v11; // r8d
  HLOCAL v12; // rdi
  __int64 (__fastcall *v13)(void *, __int64, _QWORD, __int64, __int64, HLOCAL, __int64); // rax
  RPC_STATUS Stream; // eax
  struct IAudioHealthMonitor *v16; // [rsp+20h] [rbp-99h]
  __int64 v17; // [rsp+40h] [rbp-79h] BYREF
  WINBOOL fPending; // [rsp+48h] [rbp-71h] BYREF
  LPVOID Context; // [rsp+50h] [rbp-69h] BYREF
  HLOCAL hMem; // [rsp+58h] [rbp-61h] BYREF
  _BYTE Parameter[48]; // [rsp+60h] [rbp-59h] BYREF
  _BYTE v22[16]; // [rsp+90h] [rbp-29h] BYREF
  _BYTE v23[16]; // [rsp+A0h] [rbp-19h] BYREF

  SetActivityIdFromVadServer::SetActivityIdFromVadServer((SetActivityIdFromVadServer *)v22, a1);
  v17 = 0LL;
  hMem = 0LL;
  ThreadLogonSessionStringSid = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, _QWORD, __int64 *))(*(_QWORD *)g_PolicyManager + 32LL))(
                                  g_PolicyManager,
                                  0LL,
                                  &v17);
  if ( ThreadLogonSessionStringSid >= 0 )
  {
    ThreadLogonSessionStringSid = (*(__int64 (__fastcall **)(__int64, bool, _QWORD))(*(_QWORD *)v17 + 152LL))(
                                    v17,
                                    a2 != 0,
                                    a5);
    if ( ThreadLogonSessionStringSid >= 0 )
    {
      InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context);
      if ( fPending )
      {
        Context = qword_18014C2B8;
        qword_18014C2B8[0] = &AudioSrvTelemetryProvider::`vftable';
        qword_18014C2D0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18014C2B8, qword_18014C2D0);
        InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_18014C2B8);
      }
      CWatchdogTimer::CWatchdogTimer(
        Parameter,
        *((const struct _TlgProvider_t **)Context + 1),
        v11,
        L"AudioServerCreateStream",
        v16);
      ThreadLogonSessionStringSid = RpcImpersonateClient(0LL);
      if ( ThreadLogonSessionStringSid )
      {
        CWatchdogTimer::~CWatchdogTimer((CWatchdogTimer *)Parameter);
      }
      else
      {
        ThreadLogonSessionStringSid = GetThreadLogonSessionStringSid((unsigned __int16 **)&hMem);
        RpcRevertToSelf();
        v12 = hMem;
        if ( ThreadLogonSessionStringSid >= 0 )
        {
          v13 = *(__int64 (__fastcall **)(void *, __int64, _QWORD, __int64, __int64, HLOCAL, __int64))(*(_QWORD *)a1 + 56LL);
          if ( (char *)v13 == (char *)CVADServer::CreateStream )
            Stream = CVADServer::CreateStream(a1, v17, a2, a3, a4, hMem, a6);
          else
            Stream = v13(a1, v17, a2, a3, a4, hMem, a6);
          ThreadLogonSessionStringSid = Stream;
        }
        CWatchdogTimer::~CWatchdogTimer((CWatchdogTimer *)Parameter);
        if ( v12 )
          LocalFree(v12);
      }
    }
  }
  if ( v17 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    v17 = 0LL;
  }
  if ( ThreadLogonSessionStringSid < 0 )
    AudSrvTraceLoggingErrorHelper("AudioServerCreateStream", 0xB7Fu, ThreadLogonSessionStringSid);
  EtwEventActivityIdControl(4LL, v23);
  return (unsigned int)ThreadLogonSessionStringSid;
}
