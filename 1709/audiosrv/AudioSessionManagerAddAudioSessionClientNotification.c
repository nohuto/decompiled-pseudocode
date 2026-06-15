/*
 * XREFs of AudioSessionManagerAddAudioSessionClientNotification @ 0x18007AAF0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CWatchdogTimer@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180009810 (--0CWatchdogTimer@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1CWatchdogTimer@@QEAA@XZ @ 0x18000989C (--1CWatchdogTimer@@QEAA@XZ.c)
 *     atexit @ 0x18003313C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18005FD5C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

__int64 __fastcall AudioSessionManagerAddAudioSessionClientNotification(_QWORD **a1)
{
  _QWORD *v1; // rbx
  __int64 v2; // r8
  void *v3; // r8
  int v4; // ebx
  HANDLE Parameter[7]; // [rsp+30h] [rbp-38h] BYREF
  WINBOOL fPending; // [rsp+70h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+78h] [rbp+10h] BYREF

  v1 = *a1;
  InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context);
  if ( fPending )
  {
    Context = qword_18014C2B8;
    qword_18014C2B8[0] = &AudioSrvTelemetryProvider::`vftable';
    qword_18014C2D0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18014C2B8, qword_18014C2D0, v3);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_18014C2B8);
  }
  CWatchdogTimer::CWatchdogTimer(
    Parameter,
    *((const struct _TlgProvider_t **)Context + 1),
    v2,
    L"AudioSessionManagerAddAudioSessionClientNotification");
  if ( (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)v1[1] + 112LL))(v1[1]) )
  {
    v4 = -2147024891;
LABEL_6:
    AudSrvTraceLoggingErrorHelper("AudioSessionManagerAddAudioSessionClientNotification", 2142, v4);
    goto LABEL_7;
  }
  v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v1 + 120LL))(*v1, v1[1]);
  if ( v4 < 0 )
    goto LABEL_6;
LABEL_7:
  CWatchdogTimer::~CWatchdogTimer(Parameter);
  return (unsigned int)v4;
}
