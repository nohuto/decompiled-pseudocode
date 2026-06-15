/*
 * XREFs of AudioSessionManagerGetAudioSessions @ 0x18007AE00
 * Callers:
 *     <none>
 * Callees:
 *     ??0CWatchdogTimer@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180009810 (--0CWatchdogTimer@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1CWatchdogTimer@@QEAA@XZ @ 0x18000989C (--1CWatchdogTimer@@QEAA@XZ.c)
 *     atexit @ 0x18003313C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18005FD5C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     WPP_SF_d @ 0x180064B14 (WPP_SF_d.c)
 *     WPP_SF_q @ 0x18007DC24 (WPP_SF_q.c)
 */

__int64 __fastcall AudioSessionManagerGetAudioSessions(_QWORD **a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rbx
  __int64 v8; // r8
  void *v9; // r8
  int v10; // ebx
  const struct _TlgProvider_t **v12; // [rsp+30h] [rbp-58h] BYREF
  HANDLE Parameter[7]; // [rsp+38h] [rbp-50h] BYREF
  WINBOOL v14; // [rsp+90h] [rbp+8h] BYREF

  v4 = *a1;
  InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v14, (LPVOID *)&v12);
  if ( v14 )
  {
    v12 = (const struct _TlgProvider_t **)qword_18014C2B8;
    qword_18014C2B8[0] = &AudioSrvTelemetryProvider::`vftable';
    qword_18014C2D0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18014C2B8, qword_18014C2D0, v9);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_18014C2B8);
  }
  CWatchdogTimer::CWatchdogTimer(Parameter, v12[1], v8, L"AudioSessionManagerGetAudioSessions");
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 66LL, &WPP_8db53f7ca00634d48047c78d0b32a6d0_Traceguids, *v4);
  }
  if ( (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)v4[1] + 112LL))(v4[1]) )
    v10 = -2147024891;
  else
    v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64, __int64))(*(_QWORD *)*v4 + 136LL))(
            *v4,
            v4[1],
            a2,
            a3,
            a4);
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x43u, (__int64)&WPP_8db53f7ca00634d48047c78d0b32a6d0_Traceguids, v10);
  }
  if ( v10 < 0 )
    AudSrvTraceLoggingErrorHelper("AudioSessionManagerGetAudioSessions", 2034, v10);
  CWatchdogTimer::~CWatchdogTimer(Parameter);
  return (unsigned int)v10;
}
