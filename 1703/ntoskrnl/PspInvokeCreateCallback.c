/*
 * XREFs of PspInvokeCreateCallback @ 0x1405CB848
 * Callers:
 *     PsStartSiloMonitor @ 0x1405CB6A0 (PsStartSiloMonitor.c)
 *     PspNotifyServerSiloCreation @ 0x1406E32E0 (PspNotifyServerSiloCreation.c)
 * Callees:
 *     EtwTraceJobServerSiloMonitorCallback @ 0x140163C1C (EtwTraceJobServerSiloMonitorCallback.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PspInvokeCreateCallback(__int64 a1, __int64 a2)
{
  unsigned __int16 *v2; // rdi
  __int64 v3; // rbx

  v2 = (unsigned __int16 *)(a2 + 40);
  v3 = a2;
  EtwTraceJobServerSiloMonitorCallback(0, a1, (unsigned __int16 *)(a2 + 40), 0);
  LODWORD(v3) = (*(__int64 (__fastcall **)(__int64))(v3 + 24))(a1);
  EtwTraceJobServerSiloMonitorCallback(1, a1, v2, v3);
  return (unsigned int)v3;
}
