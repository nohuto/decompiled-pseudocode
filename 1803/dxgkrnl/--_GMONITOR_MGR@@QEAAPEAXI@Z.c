/*
 * XREFs of ??_GMONITOR_MGR@@QEAAPEAXI@Z @ 0x1C0046DD4
 * Callers:
 *     ?Destroy@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1C01528D0 (-Destroy@ADAPTER_DISPLAY@@QEAAXXZ.c)
 *     MonitorCreateMonitorManager @ 0x1C022D548 (MonitorCreateMonitorManager.c)
 * Callees:
 *     ??1MONITOR_MGR@@QEAA@XZ @ 0x1C022A20C (--1MONITOR_MGR@@QEAA@XZ.c)
 */

MONITOR_MGR *__fastcall MONITOR_MGR::`scalar deleting destructor'(MONITOR_MGR *P)
{
  MONITOR_MGR::~MONITOR_MGR(P);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return P;
}
