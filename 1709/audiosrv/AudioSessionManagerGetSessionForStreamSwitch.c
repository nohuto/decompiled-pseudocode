/*
 * XREFs of AudioSessionManagerGetSessionForStreamSwitch @ 0x18007B170
 * Callers:
 *     <none>
 * Callees:
 *     ??0CWatchdogTimer@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180009810 (--0CWatchdogTimer@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1CWatchdogTimer@@QEAA@XZ @ 0x18000989C (--1CWatchdogTimer@@QEAA@XZ.c)
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x180016390 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 *     ??0CAudioSessionInstanceId@@QEAA@XZ @ 0x180017500 (--0CAudioSessionInstanceId@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     atexit @ 0x18003313C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ??1CAudioSessionInstanceId@@QEAA@XZ @ 0x18005B5E4 (--1CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18005FD5C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ?ParseStreamSwitchId@CAudioSession@@SAJPEBG0AEAVCAudioSessionInstanceId@@PEAK2PEA_N@Z @ 0x1800742F4 (-ParseStreamSwitchId@CAudioSession@@SAJPEBG0AEAVCAudioSessionInstanceId@@PEAK2PEA_N@Z.c)
 *     ?SetDuckingOptOutPreference@CAudioSession@@QEAAJ_N@Z @ 0x180078334 (-SetDuckingOptOutPreference@CAudioSession@@QEAAJ_N@Z.c)
 *     WPP_SF_q @ 0x18007DC24 (WPP_SF_q.c)
 */

__int64 __fastcall AudioSessionManagerGetSessionForStreamSwitch(CAudioSessionManager ***a1, char *a2, _QWORD *a3)
{
  CAudioSessionManager **v3; // rdi
  __int64 v6; // r8
  void *v7; // r8
  int v8; // ebx
  CAudioSessionManager *v9; // rbx
  unsigned int v10; // eax
  int v11; // eax
  CAudioSession *v12; // rsi
  CAudioSessionManager *v13; // rdi
  __int64 v14; // rbx
  unsigned int v15; // eax
  bool v17; // [rsp+40h] [rbp-89h] BYREF
  WINBOOL fPending; // [rsp+44h] [rbp-85h] BYREF
  struct IAudioProcess *v19; // [rsp+48h] [rbp-81h] BYREF
  LPVOID Context; // [rsp+50h] [rbp-79h] BYREF
  CAudioSession *v21; // [rsp+58h] [rbp-71h] BYREF
  __int64 v22; // [rsp+60h] [rbp-69h] BYREF
  HANDLE Parameter[7]; // [rsp+68h] [rbp-61h] BYREF
  _BYTE v24[80]; // [rsp+A0h] [rbp-29h] BYREF

  v3 = *a1;
  CAudioSessionInstanceId::CAudioSessionInstanceId((CAudioSessionInstanceId *)v24);
  v21 = 0LL;
  v22 = 0LL;
  v19 = 0LL;
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
    L"AudioSessionManagerGetSessionForStreamSwitch");
  *a3 = 0LL;
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 70LL, &WPP_8db53f7ca00634d48047c78d0b32a6d0_Traceguids, *v3);
  }
  v8 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, _QWORD, struct IAudioProcess **))(*(_QWORD *)g_PolicyManager
                                                                                                + 32LL))(
         g_PolicyManager,
         0LL,
         &v19);
  if ( v8 >= 0 )
  {
    v8 = CAudioSession::ParseStreamSwitchId(
           *((const unsigned __int16 **)*v3 + 30),
           a2,
           (struct CAudioSessionInstanceId *)v24,
           (unsigned int *)&Context,
           (unsigned int *)&fPending,
           &v17);
    if ( v8 >= 0 )
    {
      v9 = *v3;
      v10 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v19 + 40LL))(v19);
      v11 = CAudioSessionManager::CreateAudioSession(
              v9,
              v19,
              (struct CAudioSessionInstanceId *)v24,
              (unsigned int)Context,
              fPending,
              v10,
              &v21);
      v12 = v21;
      v8 = v11;
      if ( v11 >= 0 )
      {
        if ( (*(unsigned int (__fastcall **)(CAudioSession *))(*(_QWORD *)v21 + 56LL))(v21)
          || (v8 = CAudioSession::SetDuckingOptOutPreference(v12, v17), v8 >= 0) )
        {
          v13 = *v3;
          v14 = *(_QWORD *)v13;
          v15 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v19 + 40LL))(v19);
          v8 = (*(__int64 (__fastcall **)(CAudioSessionManager *, _QWORD, _QWORD, CAudioSession *, __int64 *))(v14 + 104))(
                 v13,
                 v15,
                 0LL,
                 v12,
                 &v22);
          if ( v8 >= 0 )
            *a3 = v22;
        }
      }
      if ( v12 )
        (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)v12 + 16LL))(v12);
    }
  }
  if ( v19 )
  {
    (*(void (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v19 + 16LL))(v19);
    v19 = 0LL;
  }
  if ( v8 < 0 )
    AudSrvTraceLoggingErrorHelper("AudioSessionManagerGetSessionForStreamSwitch", 2318, v8);
  CWatchdogTimer::~CWatchdogTimer(Parameter);
  CAudioSessionInstanceId::~CAudioSessionInstanceId((CAudioSessionInstanceId *)v24);
  return (unsigned int)v8;
}
