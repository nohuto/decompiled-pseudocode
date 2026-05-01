/*
 * XREFs of ?Provider@BlueLightReductionLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x180085CA0
 * Callers:
 *     ??$DisplaySettingsChange@AEB_NAEA_N@DesktopBlueLightReductionManagerTelemetry@@SAXAEB_NAEA_N@Z @ 0x180086F78 (--$DisplaySettingsChange@AEB_NAEA_N@DesktopBlueLightReductionManagerTelemetry@@SAXAEB_NAEA_N@Z.c)
 *     ??$IdleStateFlagsChanged@II@DesktopBlueLightReductionManagerTelemetry@@SAX$$QEAI0@Z @ 0x180087118 (--$IdleStateFlagsChanged@II@DesktopBlueLightReductionManagerTelemetry@@SAX$$QEAI0@Z.c)
 * Callees:
 *     TraceLoggingRegister @ 0x180001078 (TraceLoggingRegister.c)
 *     atexit @ 0x1801E277C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

const struct _TlgProvider_t *BlueLightReductionLogging::Provider(void)
{
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  InitOnceBeginInitialize(&`BlueLightReductionLogging::Instance'::`2'::wrapper, 0, &fPending, &Context);
  if ( fPending )
  {
    Context = &qword_1802BADF8;
    qword_1802BADF8 = (__int64)&LockScreenServiceLogging::`vftable';
    qword_1802BAE10 = (TraceLoggingHProvider)&`BlueLightReductionLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_8fbe65ba72b2d61923eb3411a963ff67_::_lambda_invoker_cdecl_);
    qword_1802BAE00 = (__int64)qword_1802BAE10;
    byte_1802BAE08 = 1;
    TraceLoggingRegister(qword_1802BAE10);
    dword_1802BAE0C = 1;
    (*(void (__fastcall **)(__int64 *))(qword_1802BADF8 + 8))(&qword_1802BADF8);
    InitOnceComplete(&`BlueLightReductionLogging::Instance'::`2'::wrapper, 0, &qword_1802BADF8);
  }
  return (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
}
