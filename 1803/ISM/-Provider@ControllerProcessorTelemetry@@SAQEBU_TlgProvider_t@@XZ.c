/*
 * XREFs of ?Provider@ControllerProcessorTelemetry@@SAQEBU_TlgProvider_t@@XZ @ 0x18003689C
 * Callers:
 *     ?LogGamepadTaskSwitcherInvoked@ControllerProcessorTelemetry@@SAXI@Z @ 0x1800369B4 (-LogGamepadTaskSwitcherInvoked@ControllerProcessorTelemetry@@SAXI@Z.c)
 *     ?LogGamepadTaskSwitcherState@ControllerProcessorTelemetry@@SAXI_N0@Z @ 0x180036A48 (-LogGamepadTaskSwitcherState@ControllerProcessorTelemetry@@SAXI_N0@Z.c)
 *     ?LogGamepadTaskSwitcherUnexpectedState@ControllerProcessorTelemetry@@SAXI@Z @ 0x180036B28 (-LogGamepadTaskSwitcherUnexpectedState@ControllerProcessorTelemetry@@SAXI@Z.c)
 * Callees:
 *     TraceLoggingRegister @ 0x180001078 (TraceLoggingRegister.c)
 *     atexit @ 0x1800E1670 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

const struct _TlgProvider_t *ControllerProcessorTelemetry::Provider(void)
{
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`ControllerProcessorTelemetry::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    Context = &qword_1801368D8;
    qword_1801368D8 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
    qword_1801368F0 = (TraceLoggingHProvider)&`ControllerProcessorTelemetry::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_eeadc07ead9c453f2bc1ae732b24d90f_::_lambda_invoker_cdecl_);
    qword_1801368E0 = (__int64)qword_1801368F0;
    byte_1801368E8 = 1;
    TraceLoggingRegister(qword_1801368F0);
    dword_1801368EC = 1;
    (*(void (__fastcall **)(__int64 *))(qword_1801368D8 + 8))(&qword_1801368D8);
    InitOnceComplete(&`ControllerProcessorTelemetry::Instance'::`2'::wrapper, 0, &qword_1801368D8);
  }
  return (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
}
