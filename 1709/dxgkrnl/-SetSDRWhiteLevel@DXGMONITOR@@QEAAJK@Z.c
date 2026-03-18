/*
 * XREFs of ?SetSDRWhiteLevel@DXGMONITOR@@QEAAJK@Z @ 0x1C0201714
 * Callers:
 *     MonitorSetSDRWhiteLevel @ 0x1C01FEE4C (MonitorSetSDRWhiteLevel.c)
 * Callees:
 *     ?_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@@Z @ 0x1C010C874 (-_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@@Z.c)
 *     ?_SaveSDRWhiteLevelToMonitorStore@DXGMONITOR@@AEAAJK@Z @ 0x1C0200820 (-_SaveSDRWhiteLevelToMonitorStore@DXGMONITOR@@AEAAJK@Z.c)
 */

__int64 __fastcall DXGMONITOR::SetSDRWhiteLevel(DXGMONITOR *this, int a2)
{
  int v5; // esi

  if ( *((_DWORD *)this + 161) == a2 )
    return 255LL;
  v5 = DXGMONITOR::_SaveSDRWhiteLevelToMonitorStore((UNICODE_STRING *)this, a2);
  if ( v5 >= 0 )
    *((_DWORD *)this + 161) = a2;
  DXGMONITOR::_MonitorTelemetry((__int64)this, 4);
  return (unsigned int)v5;
}
