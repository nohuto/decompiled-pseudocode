/*
 * XREFs of ?Provider@ScalingCompatLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x180177644
 * Callers:
 *     ?ScalingCompatCalulationInvoked_@CScalingCompatTelemetry@ScalingCompatTelemetry@@QEBAXW4AppType@2@II@Z @ 0x180177548 (-ScalingCompatCalulationInvoked_@CScalingCompatTelemetry@ScalingCompatTelemetry@@QEBAXW4AppType@.c)
 *     ?Instance@CScalingCompatTelemetry@ScalingCompatTelemetry@@KAPEAV12@XZ @ 0x180177760 (-Instance@CScalingCompatTelemetry@ScalingCompatTelemetry@@KAPEAV12@XZ.c)
 * Callees:
 *     TraceLoggingRegister @ 0x180001078 (TraceLoggingRegister.c)
 *     atexit @ 0x18019472C (atexit.c)
 *     InitOnceBeginInitialize_0 @ 0x180195112 (InitOnceBeginInitialize_0.c)
 *     InitOnceComplete_0 @ 0x180195118 (InitOnceComplete_0.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

const struct _TlgProvider_t *ScalingCompatLogging::Provider(void)
{
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  InitOnceBeginInitialize_0(&`ScalingCompatLogging::Instance'::`2'::wrapper, 0, &fPending, &Context);
  if ( fPending )
  {
    Context = &qword_180244E68;
    qword_180244E68 = (__int64)&QuickConnectLoggingProvider::`vftable';
    qword_180244E80 = (TraceLoggingHProvider)&`ScalingCompatLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_830a858705f438bc5eb56dc5316ebd68_::_lambda_invoker_cdecl_);
    qword_180244E70 = (__int64)qword_180244E80;
    byte_180244E78 = 1;
    TraceLoggingRegister(qword_180244E80);
    dword_180244E7C = 1;
    (*(void (__fastcall **)(__int64 *))(qword_180244E68 + 8))(&qword_180244E68);
    InitOnceComplete_0(&`ScalingCompatLogging::Instance'::`2'::wrapper, 0, &qword_180244E68);
  }
  return (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
}
