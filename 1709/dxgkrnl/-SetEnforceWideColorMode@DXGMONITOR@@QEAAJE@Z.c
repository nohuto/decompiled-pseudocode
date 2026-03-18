/*
 * XREFs of ?SetEnforceWideColorMode@DXGMONITOR@@QEAAJE@Z @ 0x1C02016B4
 * Callers:
 *     MonitorSetEnforceWideColorMode @ 0x1C01FED9C (MonitorSetEnforceWideColorMode.c)
 * Callees:
 *     ?_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@@Z @ 0x1C010C874 (-_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@@Z.c)
 *     ?_SaveWCGEnforcedToMonitorStore@DXGMONITOR@@AEAAJE@Z @ 0x1C02009FC (-_SaveWCGEnforcedToMonitorStore@DXGMONITOR@@AEAAJE@Z.c)
 */

__int64 __fastcall DXGMONITOR::SetEnforceWideColorMode(DXGMONITOR *this, unsigned __int8 a2)
{
  int v5; // esi

  if ( *((_BYTE *)this + 650) == a2 )
    return 255LL;
  v5 = DXGMONITOR::_SaveWCGEnforcedToMonitorStore((UNICODE_STRING *)this, a2);
  if ( v5 >= 0 )
    *((_BYTE *)this + 650) = a2;
  DXGMONITOR::_MonitorTelemetry((__int64)this, 5);
  return (unsigned int)v5;
}
