/*
 * XREFs of ?SetEnforceWideColorMode@DXGMONITOR@@QEAAJE@Z @ 0x1C02356F4
 * Callers:
 *     MonitorSetEnforceWideColorMode @ 0x1C022F2FC (MonitorSetEnforceWideColorMode.c)
 * Callees:
 *     ?_SaveWCGEnforcedToMonitorStore@DXGMONITOR@@AEAAJE@Z @ 0x1C0234074 (-_SaveWCGEnforcedToMonitorStore@DXGMONITOR@@AEAAJE@Z.c)
 *     ?_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@@Z @ 0x1C023626C (-_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@@Z.c)
 */

__int64 __fastcall DXGMONITOR::SetEnforceWideColorMode(DXGMONITOR *this, unsigned __int8 a2)
{
  int v5; // esi

  if ( *((_BYTE *)this + 677) == a2 )
    return 255LL;
  v5 = DXGMONITOR::_SaveWCGEnforcedToMonitorStore((UNICODE_STRING *)this, a2);
  if ( v5 >= 0 )
    *((_BYTE *)this + 677) = a2;
  DXGMONITOR::_MonitorTelemetry(this, 5LL);
  return (unsigned int)v5;
}
