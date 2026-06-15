/*
 * XREFs of AudioServerDisconnect @ 0x18008DFF0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CWatchdogTimer@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180009810 (--0CWatchdogTimer@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1CWatchdogTimer@@QEAA@XZ @ 0x18000989C (--1CWatchdogTimer@@QEAA@XZ.c)
 *     ?UnlockADGProcess@CAudioDGProcess@@QEAAJXZ @ 0x18001D870 (-UnlockADGProcess@CAudioDGProcess@@QEAAJXZ.c)
 *     ??0SetActivityIdFromVadServer@@QEAA@PEAX@Z @ 0x18002B404 (--0SetActivityIdFromVadServer@@QEAA@PEAX@Z.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     atexit @ 0x18003313C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18005FD5C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

__int64 __fastcall AudioServerDisconnect(_QWORD *a1)
{
  __int64 v2; // r8
  void *v3; // r8
  CAudioDGProcess *v4; // rcx
  WINBOOL fPending; // [rsp+30h] [rbp-78h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-70h] BYREF
  HANDLE Parameter[6]; // [rsp+40h] [rbp-68h] BYREF
  _BYTE v9[16]; // [rsp+70h] [rbp-38h] BYREF
  _BYTE v10[16]; // [rsp+80h] [rbp-28h] BYREF

  SetActivityIdFromVadServer::SetActivityIdFromVadServer((SetActivityIdFromVadServer *)v9, (_OWORD *)*a1);
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
    L"AudioServerDisconnect");
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
  *a1 = 0LL;
  CAudioDGProcess::UnlockADGProcess(v4);
  CWatchdogTimer::~CWatchdogTimer(Parameter);
  EtwEventActivityIdControl(4LL, v10);
  return 0LL;
}
