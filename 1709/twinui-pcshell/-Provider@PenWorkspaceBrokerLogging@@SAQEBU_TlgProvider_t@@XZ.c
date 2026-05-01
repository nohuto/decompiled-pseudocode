/*
 * XREFs of ?Provider@PenWorkspaceBrokerLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x1800E797C
 * Callers:
 *     ?Instance@PenWorkspaceBrokerTelemetry@@KAPEAV1@XZ @ 0x1800E7A74 (-Instance@PenWorkspaceBrokerTelemetry@@KAPEAV1@XZ.c)
 *     ?OemAppLoaded_@PenWorkspaceBrokerTelemetry@@QEAAXPEBG@Z @ 0x1800E7B54 (-OemAppLoaded_@PenWorkspaceBrokerTelemetry@@QEAAXPEBG@Z.c)
 * Callees:
 *     TraceLoggingRegister @ 0x180001078 (TraceLoggingRegister.c)
 *     atexit @ 0x1801E277C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

const struct _TlgProvider_t *PenWorkspaceBrokerLogging::Provider(void)
{
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  InitOnceBeginInitialize(&`PenWorkspaceBrokerLogging::Instance'::`2'::wrapper, 0, &fPending, &Context);
  if ( fPending )
  {
    Context = &qword_1802BAF30;
    qword_1802BAF30 = (__int64)&LockScreenServiceLogging::`vftable';
    qword_1802BAF48 = (TraceLoggingHProvider)&`PenWorkspaceBrokerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_70bc263229c7881e4aa0a680059fb776_::_lambda_invoker_cdecl_);
    qword_1802BAF38 = (__int64)qword_1802BAF48;
    byte_1802BAF40 = 1;
    TraceLoggingRegister(qword_1802BAF48);
    dword_1802BAF44 = 1;
    (*(void (__fastcall **)(__int64 *))(qword_1802BAF30 + 8))(&qword_1802BAF30);
    InitOnceComplete(&`PenWorkspaceBrokerLogging::Instance'::`2'::wrapper, 0, &qword_1802BAF30);
  }
  return (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
}
