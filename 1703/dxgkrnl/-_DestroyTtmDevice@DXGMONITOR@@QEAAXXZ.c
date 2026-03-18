/*
 * XREFs of ?_DestroyTtmDevice@DXGMONITOR@@QEAAXXZ @ 0x1C01E6F38
 * Callers:
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0109488 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARI.c)
 *     ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01E2990 (-_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEA.c)
 *     MonitorEnableDisableTargetAsHMD @ 0x1C01E3B54 (MonitorEnableDisableTargetAsHMD.c)
 *     ??1DXGMONITOR@@AEAA@XZ @ 0x1C01E6D90 (--1DXGMONITOR@@AEAA@XZ.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DestroyTtmDevice@DXGSESSIONMGR@@QEAAXPEAX@Z @ 0x1C01B0964 (-DestroyTtmDevice@DXGSESSIONMGR@@QEAAXPEAX@Z.c)
 */

void __fastcall DXGMONITOR::_DestroyTtmDevice(char **this, __int64 a2, __int64 a3, __int64 a4)
{
  struct DXGGLOBAL *Global; // rax

  if ( this[64] )
  {
    Global = DXGGLOBAL::GetGlobal((__int64)this, a2, a3, a4);
    DXGSESSIONMGR::DestroyTtmDevice(*((CSERIALIZEDWORKQUEUE ****)Global + 73), this[64]);
    this[64] = 0LL;
  }
}
