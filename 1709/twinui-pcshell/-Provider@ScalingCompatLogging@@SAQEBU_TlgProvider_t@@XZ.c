/*
 * XREFs of ?Provider@ScalingCompatLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x1801C3844
 * Callers:
 *     ?ScalingCompatCalulationInvoked_@CScalingCompatTelemetry@ScalingCompatTelemetry@@QEBAXW4AppType@2@II@Z @ 0x1801C374C (-ScalingCompatCalulationInvoked_@CScalingCompatTelemetry@ScalingCompatTelemetry@@QEBAXW4AppType@.c)
 *     ?Instance@CScalingCompatTelemetry@ScalingCompatTelemetry@@KAPEAV12@XZ @ 0x1801C3960 (-Instance@CScalingCompatTelemetry@ScalingCompatTelemetry@@KAPEAV12@XZ.c)
 * Callees:
 *     TraceLoggingRegister @ 0x180001078 (TraceLoggingRegister.c)
 *     atexit @ 0x1801E277C (atexit.c)
 *     InitOnceBeginInitialize_0 @ 0x1801E31CD (InitOnceBeginInitialize_0.c)
 *     InitOnceComplete_0 @ 0x1801E31D3 (InitOnceComplete_0.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

const struct _TlgProvider_t *ScalingCompatLogging::Provider(void)
{
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  InitOnceBeginInitialize_0(&`ScalingCompatLogging::Instance'::`2'::wrapper, 0, &fPending, &Context);
  if ( fPending )
  {
    Context = &qword_1802BAC20;
    qword_1802BAC20 = (__int64)&LockScreenServiceLogging::`vftable';
    qword_1802BAC38 = (TraceLoggingHProvider)&`ScalingCompatLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_830a858705f438bc5eb56dc5316ebd68_::_lambda_invoker_cdecl_);
    qword_1802BAC28 = (__int64)qword_1802BAC38;
    byte_1802BAC30 = 1;
    TraceLoggingRegister(qword_1802BAC38);
    dword_1802BAC34 = 1;
    (*(void (__fastcall **)(__int64 *))(qword_1802BAC20 + 8))(&qword_1802BAC20);
    InitOnceComplete_0(&`ScalingCompatLogging::Instance'::`2'::wrapper, 0, &qword_1802BAC20);
  }
  return (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
}
