/*
 * XREFs of ?Instance@CommonPeopleTelemetry@@KAPEAV1@XZ @ 0x18010F9AC
 * Callers:
 *     ?NotifyListeners@PeoplePaneViewManager@@AEAAXW4PeoplePaneViewChange@@PEBGH@Z @ 0x180113B94 (-NotifyListeners@PeoplePaneViewManager@@AEAAXW4PeoplePaneViewChange@@PEBGH@Z.c)
 * Callees:
 *     ?Provider@CommonPeopleTelemetryLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x1800AC01C (-Provider@CommonPeopleTelemetryLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     atexit @ 0x1801E277C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

struct CommonPeopleTelemetry *CommonPeopleTelemetry::Instance(void)
{
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  InitOnceBeginInitialize(&`CommonPeopleTelemetry::Instance'::`2'::wrapper, 0, &fPending, &Context);
  if ( fPending )
  {
    qword_1802BAFD0 = (__int64)&IamTraceLogging::`vftable';
    Context = &qword_1802BAFD0;
    atexit(lambda_44e945012bab8f6b706c51efd447e7a2_::_lambda_invoker_cdecl_);
    qword_1802BAFD8 = (__int64)CommonPeopleTelemetryLogging::Provider();
    byte_1802BAFE0 = 0;
    dword_1802BAFE4 = 1;
    (*(void (__fastcall **)(__int64 *))(qword_1802BAFD0 + 8))(&qword_1802BAFD0);
    InitOnceComplete(&`CommonPeopleTelemetry::Instance'::`2'::wrapper, 0, &qword_1802BAFD0);
  }
  return (struct CommonPeopleTelemetry *)Context;
}
