/*
 * XREFs of ?_CreateTtmDevice@DXGMONITOR@@QEAAJXZ @ 0x1C0235898
 * Callers:
 *     ?_DestroyAllSameTypeSimulatedMonitor@MONITOR_MGR@@QEAAJW4_DMM_VIDPN_MONITOR_TYPE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00BAD34 (-_DestroyAllSameTypeSimulatedMonitor@MONITOR_MGR@@QEAAJW4_DMM_VIDPN_MONITOR_TYPE@@EPEAU_DXGK_DIS.c)
 *     ?_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C022B444 (-_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 *     ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C022B9B8 (-_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEA.c)
 *     ?_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C022C234 (-_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     MonitorSetUsageClass @ 0x1C022F470 (MonitorSetUsageClass.c)
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0236F48 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARI.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?CreateTtmDevice@DXGSESSIONMGR@@QEAAJW4TTM_DEVICE_TYPE@@PEAU_DEVICE_OBJECT@@PEAVDXGADAPTER@@IKPEAPEAX@Z @ 0x1C01CEE94 (-CreateTtmDevice@DXGSESSIONMGR@@QEAAJW4TTM_DEVICE_TYPE@@PEAU_DEVICE_OBJECT@@PEAVDXGADAPTER@@IKPE.c)
 */

__int64 __fastcall DXGMONITOR::_CreateTtmDevice(DXGMONITOR *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  CTTMDEVICE **v7; // r15
  unsigned int v8; // ebp
  int v9; // ebx
  __int64 v10; // rcx
  struct DXGADAPTER *v11; // rdi
  struct _DEVICE_OBJECT *v12; // rsi
  struct DXGGLOBAL *Global; // rax
  int TtmDevice; // eax
  __int64 v15; // rcx
  __int64 v16; // rbx
  _QWORD *v17; // rax

  if ( *((_DWORD *)this + 145) )
  {
    v5 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
    *(_QWORD *)(v5 + 24) = this;
    *(_QWORD *)(v5 + 32) = -1073741637LL;
    return 3221225659LL;
  }
  v7 = (CTTMDEVICE **)((char *)this + 568);
  if ( *((_QWORD *)this + 71) )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
    return 0LL;
  }
  v8 = *((_DWORD *)this + 10);
  v9 = *((_DWORD *)this + 108);
  v10 = *(_QWORD *)(*((_QWORD *)this + 4) + 8LL);
  v11 = *(struct DXGADAPTER **)(v10 + 16);
  v12 = (struct _DEVICE_OBJECT *)*((_QWORD *)v11 + 24);
  Global = DXGGLOBAL::GetGlobal(v10);
  TtmDevice = DXGSESSIONMGR::CreateTtmDevice(
                *((_QWORD *)Global + 74),
                (v8 >> 1) & 1 | (v9 != 1 ? 2 : 0),
                v12,
                v11,
                *((_DWORD *)this + 11),
                (v8 >> 1) & 1 | (v9 != 1 ? 2 : 0),
                v7);
  v16 = TtmDevice;
  if ( TtmDevice >= 0 )
    return 0LL;
  v17 = (_QWORD *)WdLogNewEntry5_WdError(v15);
  v17[3] = this;
  v17[4] = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 8LL) + 16LL);
  v17[5] = v16;
  WdLogEvent5_WdError(v17);
  return (unsigned int)v16;
}
