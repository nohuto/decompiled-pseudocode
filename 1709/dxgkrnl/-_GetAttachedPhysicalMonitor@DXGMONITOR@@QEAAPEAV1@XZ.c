/*
 * XREFs of ?_GetAttachedPhysicalMonitor@DXGMONITOR@@QEAAPEAV1@XZ @ 0x1C0036E90
 * Callers:
 *     MonitorGetCCDMonitorID @ 0x1C00D8C78 (MonitorGetCCDMonitorID.c)
 *     ?_GetEmergencySimulatedMonitor@MONITOR_MGR@@QEAAJPEAPEAVDXGMONITOR@@@Z @ 0x1C010D3A8 (-_GetEmergencySimulatedMonitor@MONITOR_MGR@@QEAAJPEAPEAVDXGMONITOR@@@Z.c)
 *     MonitorNotifyDeviceNodeReady @ 0x1C0120768 (MonitorNotifyDeviceNodeReady.c)
 * Callees:
 *     <none>
 */

struct DXGMONITOR *__fastcall DXGMONITOR::_GetAttachedPhysicalMonitor(DXGMONITOR *this)
{
  __int64 v2; // rax

  if ( *((_DWORD *)this + 104) == 1 )
  {
    v2 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v2);
  }
  return (struct DXGMONITOR *)*((_QWORD *)this + 53);
}
