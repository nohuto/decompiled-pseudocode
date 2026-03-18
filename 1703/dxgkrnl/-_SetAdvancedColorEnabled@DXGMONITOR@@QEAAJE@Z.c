/*
 * XREFs of ?_SetAdvancedColorEnabled@DXGMONITOR@@QEAAJE@Z @ 0x1C01E778C
 * Callers:
 *     MonitorEnableDisableAdvancedColor @ 0x1C01E39F4 (MonitorEnableDisableAdvancedColor.c)
 * Callees:
 *     ?_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@@Z @ 0x1C010963C (-_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@@Z.c)
 *     ?_SaveAdvancedColorEnabledToMonitorStore@DXGMONITOR@@AEAAJXZ @ 0x1C01E6064 (-_SaveAdvancedColorEnabledToMonitorStore@DXGMONITOR@@AEAAJXZ.c)
 */

__int64 __fastcall DXGMONITOR::_SetAdvancedColorEnabled(DXGMONITOR *this, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // edi
  __int64 v6; // r8
  int v7; // esi

  v4 = *((_DWORD *)this + 6);
  LOBYTE(a2) = -(char)a2;
  v6 = v4 & 0xFFFFF7FF | ((_BYTE)a2 != 0 ? 0x800 : 0);
  *((_DWORD *)this + 6) = v6;
  v7 = DXGMONITOR::_SaveAdvancedColorEnabledToMonitorStore(this, a2, v6, a4);
  if ( v7 < 0 )
    *((_DWORD *)this + 6) ^= (*((_DWORD *)this + 6) ^ v4) & 0x800;
  DXGMONITOR::_MonitorTelemetry((__int64)this, 3);
  return (unsigned int)v7;
}
