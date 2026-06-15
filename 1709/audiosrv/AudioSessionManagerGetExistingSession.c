/*
 * XREFs of AudioSessionManagerGetExistingSession @ 0x18007AF90
 * Callers:
 *     <none>
 * Callees:
 *     ??0CWatchdogTimer@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180009810 (--0CWatchdogTimer@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1CWatchdogTimer@@QEAA@XZ @ 0x18000989C (--1CWatchdogTimer@@QEAA@XZ.c)
 *     ?FindAudioSession@CAudioSessionManager@@IEAAJAEAVCAudioSessionInstanceId@@PEAPEAVCAudioSession@@@Z @ 0x180016930 (-FindAudioSession@CAudioSessionManager@@IEAAJAEAVCAudioSessionInstanceId@@PEAPEAVCAudioSession@@.c)
 *     ??0CAudioSessionInstanceId@@QEAA@XZ @ 0x180017500 (--0CAudioSessionInstanceId@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     atexit @ 0x18003313C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ??1CAudioSessionInstanceId@@QEAA@XZ @ 0x18005B5E4 (--1CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18005FD5C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     WPP_SF_q @ 0x18007DC24 (WPP_SF_q.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z @ 0x18007E9E0 (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z.c)
 */

__int64 __fastcall AudioSessionManagerGetExistingSession(
        CAudioSessionManager ***a1,
        const unsigned __int16 *a2,
        _QWORD *a3)
{
  CAudioSessionManager **v3; // rsi
  __int64 v6; // r8
  void *v7; // r8
  RPC_STATUS v8; // eax
  signed int v9; // ebx
  int AudioSession; // eax
  struct CAudioSession *v11; // rdi
  WINBOOL fPending; // [rsp+30h] [rbp-79h] BYREF
  unsigned int Pid; // [rsp+34h] [rbp-75h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-71h] BYREF
  struct CAudioSession *v16; // [rsp+40h] [rbp-69h] BYREF
  __int64 v17; // [rsp+48h] [rbp-61h] BYREF
  HANDLE Parameter[6]; // [rsp+50h] [rbp-59h] BYREF
  _BYTE v19[80]; // [rsp+80h] [rbp-29h] BYREF

  v3 = *a1;
  CAudioSessionInstanceId::CAudioSessionInstanceId((CAudioSessionInstanceId *)v19);
  v16 = 0LL;
  v17 = 0LL;
  InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context);
  if ( fPending )
  {
    Context = qword_18014C2B8;
    qword_18014C2B8[0] = &AudioSrvTelemetryProvider::`vftable';
    qword_18014C2D0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18014C2B8, qword_18014C2D0, v7);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_18014C2B8);
  }
  CWatchdogTimer::CWatchdogTimer(
    Parameter,
    *((const struct _TlgProvider_t **)Context + 1),
    v6,
    L"AudioSessionManagerGetExistingSession");
  *a3 = 0LL;
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 69LL, &WPP_8db53f7ca00634d48047c78d0b32a6d0_Traceguids, *v3);
  }
  v8 = I_RpcBindingInqLocalClientPID(0LL, &Pid);
  v9 = v8;
  if ( v8 )
  {
    if ( v8 > 0 )
      v9 = (unsigned __int16)v8 | 0x80070000;
  }
  else
  {
    v9 = CAudioSessionInstanceId::Initialize((CAudioSessionInstanceId *)v19, a2);
    if ( v9 < 0 )
    {
LABEL_17:
      AudSrvTraceLoggingErrorHelper("AudioSessionManagerGetExistingSession", 2246, v9);
      goto LABEL_18;
    }
    AudioSession = CAudioSessionManager::FindAudioSession(*v3, (struct CAudioSessionInstanceId *)v19, &v16);
    v11 = v16;
    v9 = AudioSession;
    if ( AudioSession >= 0 )
    {
      v9 = (*(__int64 (__fastcall **)(CAudioSessionManager *, _QWORD, _QWORD, struct CAudioSession *, __int64 *))(*(_QWORD *)*v3 + 104LL))(
             *v3,
             Pid,
             0LL,
             v16,
             &v17);
      if ( v9 >= 0 )
        *a3 = v17;
    }
    if ( v11 )
      (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v11 + 16LL))(v11);
  }
  if ( v9 < 0 )
    goto LABEL_17;
LABEL_18:
  CWatchdogTimer::~CWatchdogTimer(Parameter);
  CAudioSessionInstanceId::~CAudioSessionInstanceId((CAudioSessionInstanceId *)v19);
  return (unsigned int)v9;
}
