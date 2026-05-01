/*
 * XREFs of ?Instance@CommonPeopleTelemetry@@KAPEAV1@XZ @ 0x1800E730C
 * Callers:
 *     ?NotifyListeners@PeoplePaneViewManager@@AEAAXW4PeoplePaneViewChange@@PEBGH@Z @ 0x1800EA6E4 (-NotifyListeners@PeoplePaneViewManager@@AEAAXW4PeoplePaneViewChange@@PEBGH@Z.c)
 * Callees:
 *     ?Provider@CommonPeopleTelemetryLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x1800A087C (-Provider@CommonPeopleTelemetryLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     atexit @ 0x18019472C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

struct CommonPeopleTelemetry *CommonPeopleTelemetry::Instance(void)
{
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  InitOnceBeginInitialize(&`CommonPeopleTelemetry::Instance'::`2'::wrapper, 0, &fPending, &Context);
  if ( fPending )
  {
    qword_180245150 = (__int64)&IamTraceLogging::`vftable';
    Context = &qword_180245150;
    atexit(lambda_44e945012bab8f6b706c51efd447e7a2_::_lambda_invoker_cdecl_);
    qword_180245158 = (__int64)CommonPeopleTelemetryLogging::Provider();
    byte_180245160 = 0;
    dword_180245164 = 1;
    (*(void (__fastcall **)(__int64 *))(qword_180245150 + 8))(&qword_180245150);
    InitOnceComplete(&`CommonPeopleTelemetry::Instance'::`2'::wrapper, 0, &qword_180245150);
  }
  return (struct CommonPeopleTelemetry *)Context;
}
