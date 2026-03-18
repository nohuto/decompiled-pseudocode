/*
 * XREFs of ?_SetAdvancedColorEnabled@DXGMONITOR@@QEAAJ_N@Z @ 0x1C0238400
 * Callers:
 *     MonitorEnableDisableAdvancedColor @ 0x1C022DCC8 (MonitorEnableDisableAdvancedColor.c)
 * Callees:
 *     ?_SaveAdvancedColorEnabledToMonitorStore@DXGMONITOR@@AEAAJXZ @ 0x1C0233CF8 (-_SaveAdvancedColorEnabledToMonitorStore@DXGMONITOR@@AEAAJXZ.c)
 *     ?_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@@Z @ 0x1C023626C (-_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@@Z.c)
 */

__int64 __fastcall DXGMONITOR::_SetAdvancedColorEnabled(DXGMONITOR *this, unsigned __int8 a2)
{
  int v2; // ebx
  int v4; // esi

  v2 = *((_DWORD *)this + 10);
  *((_DWORD *)this + 10) = v2 & 0xFFFFF7FF | (a2 << 11);
  v4 = DXGMONITOR::_SaveAdvancedColorEnabledToMonitorStore((UNICODE_STRING *)this);
  if ( v4 < 0 )
    *((_DWORD *)this + 10) ^= (*((_DWORD *)this + 10) ^ v2) & 0x800;
  DXGMONITOR::_MonitorTelemetry((__int64)this, 3);
  return (unsigned int)v4;
}
