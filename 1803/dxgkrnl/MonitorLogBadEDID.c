/*
 * XREFs of MonitorLogBadEDID @ 0x1C022E99C
 * Callers:
 *     ?_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z @ 0x1C0108D84 (-_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z.c)
 *     ?_GetMonitorDiagInfo@DXGMONITOR@@QEAAJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C0235B14 (-_GetMonitorDiagInfo@DXGMONITOR@@QEAAJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z.c)
 *     ?_GetMonitorEldInformation@DXGMONITOR@@QEAAJPEAU_MONITOR_PACKED_ELD_INFORMATION@@@Z @ 0x1C0235CEC (-_GetMonitorEldInformation@DXGMONITOR@@QEAAJPEAU_MONITOR_PACKED_ELD_INFORMATION@@@Z.c)
 *     ?_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@@Z @ 0x1C023626C (-_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@@Z.c)
 *     ?_PrepareMonitorCCDName@DXGMONITOR@@AEAAJXZ @ 0x1C0237848 (-_PrepareMonitorCCDName@DXGMONITOR@@AEAAJXZ.c)
 *     ?_GetMonitorDescriptorIDs@DXGMONITOR@@QEAAJPEAU_DXGK_GENERIC_DESCRIPTOR@@@Z @ 0x1C023A150 (-_GetMonitorDescriptorIDs@DXGMONITOR@@QEAAJPEAU_DXGK_GENERIC_DESCRIPTOR@@@Z.c)
 *     ?_ParseEDIDBaseBlock@DXGMONITOR@@AEAAJXZ @ 0x1C023A998 (-_ParseEDIDBaseBlock@DXGMONITOR@@AEAAJXZ.c)
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C023BFA0 (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall MonitorLogBadEDID(__int64 a1, int a2)
{
  __int64 v2; // rbx
  __int64 v4; // rax

  if ( a1 )
  {
    v2 = a2;
    if ( a2 >= -1071841278
      && (a2 <= -1071841270
       || a2 > -1071774967 && (a2 <= -1071774965 || a2 == -1071774942 || (unsigned int)(a2 + 1071774889) <= 1)) )
    {
      if ( byte_1C007BE30 )
      {
        v4 = WdLogNewEntry5_WdError(a1);
        *(_QWORD *)(v4 + 24) = a1;
        *(_QWORD *)(v4 + 32) = v2;
        WdLogEvent5_WdError(v4);
      }
    }
  }
}
