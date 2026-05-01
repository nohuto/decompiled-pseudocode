/*
 * XREFs of ?Instance@CommonStartTelemetry@@KAPEAV1@XZ @ 0x180148174
 * Callers:
 *     ?ShowStartView@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x18014A8B0 (-ShowStartView@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@.c)
 * Callees:
 *     ?Provider@CommonStartTelemetryLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x180147F6C (-Provider@CommonStartTelemetryLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     atexit @ 0x18019472C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

struct CommonStartTelemetry *CommonStartTelemetry::Instance(void)
{
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  InitOnceBeginInitialize(&`CommonStartTelemetry::Instance'::`2'::wrapper, 0, &fPending, &Context);
  if ( fPending )
  {
    qword_180244D78 = (__int64)&IamTraceLogging::`vftable';
    Context = &qword_180244D78;
    atexit(lambda_25f39288d20b05013a27f57a074770b4_::_lambda_invoker_cdecl_);
    qword_180244D80 = (__int64)CommonStartTelemetryLogging::Provider();
    byte_180244D88 = 0;
    dword_180244D8C = 1;
    (*(void (__fastcall **)(__int64 *))(qword_180244D78 + 8))(&qword_180244D78);
    InitOnceComplete(&`CommonStartTelemetry::Instance'::`2'::wrapper, 0, &qword_180244D78);
  }
  return (struct CommonStartTelemetry *)Context;
}
