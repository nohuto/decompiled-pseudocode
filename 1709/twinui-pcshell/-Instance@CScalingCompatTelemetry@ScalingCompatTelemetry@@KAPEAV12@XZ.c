/*
 * XREFs of ?Instance@CScalingCompatTelemetry@ScalingCompatTelemetry@@KAPEAV12@XZ @ 0x1801C3960
 * Callers:
 *     ?ScalingCompatCalculationTelemetry@@YAXW4AppType@ScalingCompatTelemetry@@II@Z @ 0x1801C35C0 (-ScalingCompatCalculationTelemetry@@YAXW4AppType@ScalingCompatTelemetry@@II@Z.c)
 * Callees:
 *     ?Provider@ScalingCompatLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x1801C3844 (-Provider@ScalingCompatLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     atexit @ 0x1801E277C (atexit.c)
 *     InitOnceBeginInitialize_0 @ 0x1801E31CD (InitOnceBeginInitialize_0.c)
 *     InitOnceComplete_0 @ 0x1801E31D3 (InitOnceComplete_0.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

struct ScalingCompatTelemetry::CScalingCompatTelemetry *ScalingCompatTelemetry::CScalingCompatTelemetry::Instance(void)
{
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  InitOnceBeginInitialize_0(
    &`ScalingCompatTelemetry::CScalingCompatTelemetry::Instance'::`2'::wrapper,
    0,
    &fPending,
    &Context);
  if ( fPending )
  {
    qword_1802BAC48 = (__int64)&IamTraceLogging::`vftable';
    Context = &qword_1802BAC48;
    atexit(lambda_7c6f95392d1fa211f578d6d8eb47d107_::_lambda_invoker_cdecl_);
    qword_1802BAC50 = (__int64)ScalingCompatLogging::Provider();
    byte_1802BAC58 = 0;
    dword_1802BAC5C = 1;
    (*(void (__fastcall **)(__int64 *))(qword_1802BAC48 + 8))(&qword_1802BAC48);
    InitOnceComplete_0(&`ScalingCompatTelemetry::CScalingCompatTelemetry::Instance'::`2'::wrapper, 0, &qword_1802BAC48);
  }
  return (struct ScalingCompatTelemetry::CScalingCompatTelemetry *)Context;
}
