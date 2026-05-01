/*
 * XREFs of ?Instance@CScalingCompatTelemetry@ScalingCompatTelemetry@@KAPEAV12@XZ @ 0x180177760
 * Callers:
 *     ?ScalingCompatCalculationTelemetry@@YAXW4AppType@ScalingCompatTelemetry@@II@Z @ 0x1801773BC (-ScalingCompatCalculationTelemetry@@YAXW4AppType@ScalingCompatTelemetry@@II@Z.c)
 * Callees:
 *     ?Provider@ScalingCompatLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x180177644 (-Provider@ScalingCompatLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     atexit @ 0x18019472C (atexit.c)
 *     InitOnceBeginInitialize_0 @ 0x180195112 (InitOnceBeginInitialize_0.c)
 *     InitOnceComplete_0 @ 0x180195118 (InitOnceComplete_0.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
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
    qword_180244E90 = (__int64)&IamTraceLogging::`vftable';
    Context = &qword_180244E90;
    atexit(lambda_7c6f95392d1fa211f578d6d8eb47d107_::_lambda_invoker_cdecl_);
    qword_180244E98 = (__int64)ScalingCompatLogging::Provider();
    byte_180244EA0 = 0;
    dword_180244EA4 = 1;
    (*(void (__fastcall **)(__int64 *))(qword_180244E90 + 8))(&qword_180244E90);
    InitOnceComplete_0(&`ScalingCompatTelemetry::CScalingCompatTelemetry::Instance'::`2'::wrapper, 0, &qword_180244E90);
  }
  return (struct ScalingCompatTelemetry::CScalingCompatTelemetry *)Context;
}
