/*
 * XREFs of ?get@?$static_lazy@VScalingCompatLogging@@@details@wil@@QEAAPEAVScalingCompatLogging@@P6AXXZ@Z @ 0x1800486F8
 * Callers:
 *     ??1Completer@?$static_lazy@VCScalingCompatTelemetry@ScalingCompatTelemetry@@@details@wil@@QEAA@XZ @ 0x180048694 (--1Completer@-$static_lazy@VCScalingCompatTelemetry@ScalingCompatTelemetry@@@details@wil@@QEAA@X.c)
 *     ?ScalingCompatCalulationInvoked_@CScalingCompatTelemetry@ScalingCompatTelemetry@@QEBAXW4AppType@2@II@Z @ 0x1800AADA8 (-ScalingCompatCalulationInvoked_@CScalingCompatTelemetry@ScalingCompatTelemetry@@QEBAXW4AppType@.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800395EC (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x180049154 (atexit.c)
 *     InitOnceBeginInitialize_0 @ 0x18004943F (InitOnceBeginInitialize_0.c)
 *     InitOnceComplete_0 @ 0x180049445 (InitOnceComplete_0.c)
 */

_QWORD *__fastcall wil::details::static_lazy<ScalingCompatLogging>::get(__int64 a1, void (__cdecl *a2)())
{
  void *v3; // r8
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v6; // [rsp+40h] [rbp+18h] BYREF

  v5 = a1;
  v6 = 0LL;
  if ( InitOnceBeginInitialize_0(&`ScalingCompatLogging::Instance'::`2'::wrapper, 0, (PBOOL)&v5, (LPVOID *)&v6)
    && (_DWORD)v5 )
  {
    v6 = qword_1800CA2B0;
    qword_1800CA2B0[0] = &WindowFrameLogging::`vftable';
    qword_1800CA2C8 = (struct _TlgProvider_t *)&`ScalingCompatLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1800CA2B0, qword_1800CA2C8, v3);
    InitOnceComplete_0(&`ScalingCompatLogging::Instance'::`2'::wrapper, 0, qword_1800CA2B0);
  }
  return v6;
}
