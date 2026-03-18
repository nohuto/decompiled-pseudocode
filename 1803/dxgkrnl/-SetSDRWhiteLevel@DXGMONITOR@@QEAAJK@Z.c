/*
 * XREFs of ?SetSDRWhiteLevel@DXGMONITOR@@QEAAJK@Z @ 0x1C0235754
 * Callers:
 *     MonitorSetSDRWhiteLevel @ 0x1C022F3AC (MonitorSetSDRWhiteLevel.c)
 * Callees:
 *     ?_SaveSDRWhiteLevelToMonitorStore@DXGMONITOR@@AEAAJK@Z @ 0x1C0233D9C (-_SaveSDRWhiteLevelToMonitorStore@DXGMONITOR@@AEAAJK@Z.c)
 *     ?_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@@Z @ 0x1C023626C (-_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@@Z.c)
 */

__int64 __fastcall DXGMONITOR::SetSDRWhiteLevel(DXGMONITOR *this, int a2)
{
  int v5; // esi

  if ( *((_DWORD *)this + 166) == a2 )
    return 255LL;
  v5 = DXGMONITOR::_SaveSDRWhiteLevelToMonitorStore((UNICODE_STRING *)this, a2);
  if ( v5 >= 0 )
    *((_DWORD *)this + 166) = a2;
  DXGMONITOR::_MonitorTelemetry(this, 4LL);
  return (unsigned int)v5;
}
