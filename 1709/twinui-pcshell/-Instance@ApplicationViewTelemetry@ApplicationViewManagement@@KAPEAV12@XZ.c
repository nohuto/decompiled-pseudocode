/*
 * XREFs of ?Instance@ApplicationViewTelemetry@ApplicationViewManagement@@KAPEAV12@XZ @ 0x180085C04
 * Callers:
 *     ?SetSizeConstraintsForDpi@AppSizeConstraintsCache@@EEAAJIAEBUAPP_SIZE_CONSTRAINTS@@@Z @ 0x180085830 (-SetSizeConstraintsForDpi@AppSizeConstraintsCache@@EEAAJIAEBUAPP_SIZE_CONSTRAINTS@@@Z.c)
 * Callees:
 *     ?Provider@ApplicationViewManagementLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x18007B014 (-Provider@ApplicationViewManagementLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     atexit @ 0x1801E277C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

struct ApplicationViewManagement::ApplicationViewTelemetry *ApplicationViewManagement::ApplicationViewTelemetry::Instance(
        void)
{
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  InitOnceBeginInitialize(
    &`ApplicationViewManagement::ApplicationViewTelemetry::Instance'::`2'::wrapper,
    0,
    &fPending,
    &Context);
  if ( fPending )
  {
    qword_1802BADD8 = (__int64)&IamTraceLogging::`vftable';
    Context = &qword_1802BADD8;
    atexit(lambda_2a778f8121aa305892535f3550c397a2_::_lambda_invoker_cdecl_);
    qword_1802BADE0 = (__int64)ApplicationViewManagementLogging::Provider();
    byte_1802BADE8 = 0;
    dword_1802BADEC = 1;
    (*(void (__fastcall **)(__int64 *))(qword_1802BADD8 + 8))(&qword_1802BADD8);
    InitOnceComplete(
      &`ApplicationViewManagement::ApplicationViewTelemetry::Instance'::`2'::wrapper,
      0,
      &qword_1802BADD8);
  }
  return (struct ApplicationViewManagement::ApplicationViewTelemetry *)Context;
}
