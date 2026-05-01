/*
 * XREFs of ?Instance@PenWorkspaceBrokerTelemetry@@KAPEAV1@XZ @ 0x1800E7A74
 * Callers:
 *     ?LoadOEMApps@RecentAppsCache@Discover@PenWorkspace@@AEAAJU_FILETIME@@PEAH@Z @ 0x1800E9D6C (-LoadOEMApps@RecentAppsCache@Discover@PenWorkspace@@AEAAJU_FILETIME@@PEAH@Z.c)
 * Callees:
 *     ?Provider@PenWorkspaceBrokerLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x1800E797C (-Provider@PenWorkspaceBrokerLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     atexit @ 0x1801E277C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

struct PenWorkspaceBrokerTelemetry *PenWorkspaceBrokerTelemetry::Instance(void)
{
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  InitOnceBeginInitialize(&`PenWorkspaceBrokerTelemetry::Instance'::`2'::wrapper, 0, &fPending, &Context);
  if ( fPending )
  {
    qword_1802BAF58 = (__int64)&IamTraceLogging::`vftable';
    Context = &qword_1802BAF58;
    atexit(lambda_147e36a80022279d49a89264b6535513_::_lambda_invoker_cdecl_);
    qword_1802BAF60 = (__int64)PenWorkspaceBrokerLogging::Provider();
    byte_1802BAF68 = 0;
    dword_1802BAF6C = 1;
    (*(void (__fastcall **)(__int64 *))(qword_1802BAF58 + 8))(&qword_1802BAF58);
    InitOnceComplete(&`PenWorkspaceBrokerTelemetry::Instance'::`2'::wrapper, 0, &qword_1802BAF58);
  }
  return (struct PenWorkspaceBrokerTelemetry *)Context;
}
