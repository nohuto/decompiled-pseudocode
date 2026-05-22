/*
 * XREFs of ?Provider@ControllerProcessorTelemetry@@SAQEBU_TlgProvider_t@@XZ @ 0x18004218C
 * Callers:
 *     ?LogGamepadTaskSwitcherInvoked@ControllerProcessorTelemetry@@SAXI@Z @ 0x180042284 (-LogGamepadTaskSwitcherInvoked@ControllerProcessorTelemetry@@SAXI@Z.c)
 *     ?LogGamepadTaskSwitcherState@ControllerProcessorTelemetry@@SAXI_N0@Z @ 0x180042318 (-LogGamepadTaskSwitcherState@ControllerProcessorTelemetry@@SAXI_N0@Z.c)
 *     ?LogGamepadTaskSwitcherUnexpectedState@ControllerProcessorTelemetry@@SAXI@Z @ 0x1800423F8 (-LogGamepadTaskSwitcherUnexpectedState@ControllerProcessorTelemetry@@SAXI@Z.c)
 * Callees:
 *     TraceLoggingRegister @ 0x180001078 (TraceLoggingRegister.c)
 *     atexit @ 0x1800CA61C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

const struct _TlgProvider_t *ControllerProcessorTelemetry::Provider(void)
{
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  InitOnceBeginInitialize(&`ControllerProcessorTelemetry::Instance'::`2'::wrapper, 0, &fPending, &Context);
  if ( fPending )
  {
    Context = &qword_18010F548;
    qword_18010F548 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
    qword_18010F560 = (TraceLoggingHProvider)&`ControllerProcessorTelemetry::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_eeadc07ead9c453f2bc1ae732b24d90f_::_lambda_invoker_cdecl_);
    qword_18010F550 = (__int64)qword_18010F560;
    byte_18010F558 = 1;
    TraceLoggingRegister(qword_18010F560);
    dword_18010F55C = 1;
    (*(void (__fastcall **)(__int64 *))(qword_18010F548 + 8))(&qword_18010F548);
    InitOnceComplete(&`ControllerProcessorTelemetry::Instance'::`2'::wrapper, 0, &qword_18010F548);
  }
  return (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
}
