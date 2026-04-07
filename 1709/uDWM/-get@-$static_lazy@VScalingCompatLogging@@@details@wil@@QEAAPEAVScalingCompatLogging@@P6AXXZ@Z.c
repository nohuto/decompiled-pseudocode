/*
 * XREFs of ?get@?$static_lazy@VScalingCompatLogging@@@details@wil@@QEAAPEAVScalingCompatLogging@@P6AXXZ@Z @ 0x180044BCC
 * Callers:
 *     ??1Completer@?$static_lazy@VCScalingCompatTelemetry@ScalingCompatTelemetry@@@details@wil@@QEAA@XZ @ 0x180044AB8 (--1Completer@-$static_lazy@VCScalingCompatTelemetry@ScalingCompatTelemetry@@@details@wil@@QEAA@X.c)
 *     ?ScalingCompatCalulationInvoked_@CScalingCompatTelemetry@ScalingCompatTelemetry@@QEBAXW4AppType@2@II@Z @ 0x180044B18 (-ScalingCompatCalulationInvoked_@CScalingCompatTelemetry@ScalingCompatTelemetry@@QEBAXW4AppType@.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180036B08 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x180045494 (atexit.c)
 *     InitOnceBeginInitialize_0 @ 0x180045AFD (InitOnceBeginInitialize_0.c)
 *     InitOnceComplete_0 @ 0x180045B03 (InitOnceComplete_0.c)
 */

LPVOID __fastcall wil::details::static_lazy<ScalingCompatLogging>::get(__int64 a1, void (__cdecl *a2)())
{
  void *v3; // r8
  __int64 fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+40h] [rbp+18h] BYREF

  fPending = a1;
  InitOnceBeginInitialize_0(&`ScalingCompatLogging::Instance'::`2'::wrapper, 0, (PBOOL)&fPending, &Context);
  if ( (_DWORD)fPending )
  {
    Context = &qword_1800C1AA8;
    qword_1800C1AA8 = &WindowFrameLogging::`vftable';
    qword_1800C1AC0 = (struct _TlgProvider_t *)&`ScalingCompatLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1800C1AA8, qword_1800C1AC0, v3);
    InitOnceComplete_0(&`ScalingCompatLogging::Instance'::`2'::wrapper, 0, &qword_1800C1AA8);
  }
  return Context;
}
