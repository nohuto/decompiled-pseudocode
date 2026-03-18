/*
 * XREFs of PspInvokeTerminateCallback @ 0x1406E31DC
 * Callers:
 *     PsStartSiloMonitor @ 0x1405CB6A0 (PsStartSiloMonitor.c)
 *     PspNotifyServerSiloTermination @ 0x1406E33E8 (PspNotifyServerSiloTermination.c)
 * Callees:
 *     EtwTraceJobServerSiloMonitorCallback @ 0x140163C1C (EtwTraceJobServerSiloMonitorCallback.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

BOOLEAN __fastcall PspInvokeTerminateCallback(__int64 a1, __int64 a2)
{
  EtwTraceJobServerSiloMonitorCallback(2, a1, (unsigned __int16 *)(a2 + 40), 0);
  (*(void (__fastcall **)(__int64))(a2 + 32))(a1);
  return EtwTraceJobServerSiloMonitorCallback(3, a1, (unsigned __int16 *)(a2 + 40), 0);
}
