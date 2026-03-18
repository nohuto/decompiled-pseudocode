/*
 * XREFs of ?_DestroyTtmDevice@DXGMONITOR@@QEAAXXZ @ 0x1C02359A0
 * Callers:
 *     ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C022B9B8 (-_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEA.c)
 *     MonitorSetUsageClass @ 0x1C022F470 (MonitorSetUsageClass.c)
 *     ??1DXGMONITOR@@AEAA@XZ @ 0x1C0235428 (--1DXGMONITOR@@AEAA@XZ.c)
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0236F48 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARI.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DestroyTtmDevice@DXGSESSIONMGR@@QEAAXPEAX@Z @ 0x1C01CF790 (-DestroyTtmDevice@DXGSESSIONMGR@@QEAAXPEAX@Z.c)
 */

void __fastcall DXGMONITOR::_DestroyTtmDevice(char **this)
{
  struct DXGGLOBAL *Global; // rax

  if ( this[71] )
  {
    Global = DXGGLOBAL::GetGlobal((__int64)this);
    DXGSESSIONMGR::DestroyTtmDevice(*((DXGSESSIONMGR **)Global + 74), this[71]);
    this[71] = 0LL;
  }
}
