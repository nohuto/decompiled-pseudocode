/*
 * XREFs of ?_CreateTtmDevice@DXGMONITOR@@QEAAJXZ @ 0x1C010C118
 * Callers:
 *     ?_DestroyAllSameTypeSimulatedMonitor@MONITOR_MGR@@QEAAJW4_DMM_VIDPN_MONITOR_TYPE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B110C (-_DestroyAllSameTypeSimulatedMonitor@MONITOR_MGR@@QEAAJW4_DMM_VIDPN_MONITOR_TYPE@@EPEAU_DXGK_DIS.c)
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C010C694 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARI.c)
 *     ?_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C010DBFC (-_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 *     ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01FD150 (-_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEA.c)
 *     ?_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01FD634 (-_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?CreateTtmDevice@DXGSESSIONMGR@@QEAAJW4TTM_DEVICE_TYPE@@PEAU_DEVICE_OBJECT@@PEAVDXGADAPTER@@IKPEAPEAX@Z @ 0x1C010E2A0 (-CreateTtmDevice@DXGSESSIONMGR@@QEAAJW4TTM_DEVICE_TYPE@@PEAU_DEVICE_OBJECT@@PEAVDXGADAPTER@@IKPE.c)
 */

__int64 __fastcall DXGMONITOR::_CreateTtmDevice(DXGMONITOR *this, __int64 a2)
{
  char *v3; // r15
  unsigned int v4; // ebp
  int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rsi
  struct DXGGLOBAL *Global; // rax
  int TtmDevice; // eax
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v14; // rax
  _QWORD *v15; // rax

  if ( *((_BYTE *)this + 564) )
  {
    v14 = WdLogNewEntry5_WdTrace(this, a2);
    *(_QWORD *)(v14 + 24) = this;
    *(_QWORD *)(v14 + 32) = -1073741637LL;
    return 3221225659LL;
  }
  else
  {
    v3 = (char *)this + 552;
    if ( *((_QWORD *)this + 69) )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2) + 24) = this;
      return 0LL;
    }
    v4 = *((_DWORD *)this + 6);
    v5 = *((_DWORD *)this + 104);
    v6 = *(_QWORD *)(*((_QWORD *)this + 2) + 8LL);
    v7 = *(_QWORD *)(v6 + 16);
    v8 = *(_QWORD *)(v7 + 192);
    Global = DXGGLOBAL::GetGlobal(v6);
    TtmDevice = DXGSESSIONMGR::CreateTtmDevice(
                  *((_QWORD *)Global + 73),
                  (v4 >> 1) & 1 | (v5 != 1 ? 2 : 0),
                  v8,
                  v7,
                  *((_DWORD *)this + 7),
                  (v4 >> 1) & 1 | (v5 != 1 ? 2 : 0),
                  v3);
    v12 = TtmDevice;
    if ( TtmDevice >= 0 )
      return 0LL;
    v15 = (_QWORD *)WdLogNewEntry5_WdError(v11);
    v15[3] = this;
    v15[4] = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 8LL) + 16LL);
    v15[5] = v12;
    WdLogEvent5_WdError(v15);
    return (unsigned int)v12;
  }
}
