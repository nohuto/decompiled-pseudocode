/*
 * XREFs of ?_SetAdvancedColorEnabled@DXGMONITOR@@QEAAJE@Z @ 0x1C02020A8
 * Callers:
 *     MonitorEnableDisableAdvancedColor @ 0x1C01FE350 (MonitorEnableDisableAdvancedColor.c)
 * Callees:
 *     ?_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@@Z @ 0x1C010C874 (-_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@@Z.c)
 *     ?_SaveAdvancedColorEnabledToMonitorStore@DXGMONITOR@@AEAAJXZ @ 0x1C02006A0 (-_SaveAdvancedColorEnabledToMonitorStore@DXGMONITOR@@AEAAJXZ.c)
 */

__int64 __fastcall DXGMONITOR::_SetAdvancedColorEnabled(DXGMONITOR *this, char a2)
{
  int v2; // edi
  int v4; // esi

  v2 = *((_DWORD *)this + 6);
  *((_DWORD *)this + 6) = v2 & 0xFFFFF7FF | (a2 != 0 ? 0x800 : 0);
  v4 = DXGMONITOR::_SaveAdvancedColorEnabledToMonitorStore((UNICODE_STRING *)this);
  if ( v4 < 0 )
    *((_DWORD *)this + 6) ^= (*((_DWORD *)this + 6) ^ v2) & 0x800;
  DXGMONITOR::_MonitorTelemetry((__int64)this, 3);
  return (unsigned int)v4;
}
