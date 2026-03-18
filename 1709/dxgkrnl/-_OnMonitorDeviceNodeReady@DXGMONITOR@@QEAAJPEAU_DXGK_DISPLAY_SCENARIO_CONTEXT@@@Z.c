/*
 * XREFs of ?_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C010B884
 * Callers:
 *     MonitorNotifyDeviceNodeReady @ 0x1C0120768 (MonitorNotifyDeviceNodeReady.c)
 * Callees:
 *     ?_UpdateMonitorEDIDRegistryForGDI@DXGMONITOR@@AEAAJXZ @ 0x1C010A17C (-_UpdateMonitorEDIDRegistryForGDI@DXGMONITOR@@AEAAJXZ.c)
 *     ?_RetrieveMonitorConfigurationFromDriverInf@DXGMONITOR@@AEAAJXZ @ 0x1C010A320 (-_RetrieveMonitorConfigurationFromDriverInf@DXGMONITOR@@AEAAJXZ.c)
 *     ?_RetrieveMonitorFrequencyRangeFromRegistry@DXGMONITOR@@AEAAJXZ @ 0x1C010AA88 (-_RetrieveMonitorFrequencyRangeFromRegistry@DXGMONITOR@@AEAAJXZ.c)
 *     ?_RetrieveMonitorDescriptorsFromRegistry@DXGMONITOR@@AEAAJXZ @ 0x1C010AE24 (-_RetrieveMonitorDescriptorsFromRegistry@DXGMONITOR@@AEAAJXZ.c)
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C010BEA0 (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C010DBFC (-_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 */

__int64 __fastcall DXGMONITOR::_OnMonitorDeviceNodeReady(DXGMONITOR *this, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2)
{
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax

  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2) + 24) = this;
  v5 = *((_DWORD *)this + 6);
  if ( (v5 & 0x10) == 0 )
  {
    if ( (v5 & 1) == 0 )
    {
      v8 = WdLogNewEntry5_WdAssertion(v4);
      WdLogEvent5_WdAssertion(v8);
    }
    if ( !*((_QWORD *)this + 5) )
    {
      v9 = WdLogNewEntry5_WdAssertion(v4);
      WdLogEvent5_WdAssertion(v9);
    }
    if ( *((_DWORD *)this + 104) != 1 )
    {
      v10 = WdLogNewEntry5_WdAssertion(v4);
      WdLogEvent5_WdAssertion(v10);
    }
    *((_DWORD *)this + 6) |= 0x10u;
    if ( (int)DXGMONITOR::_RetrieveMonitorDescriptorsFromRegistry((struct _DEVICE_OBJECT **)this) >= 0 )
      DXGMONITOR::_UpdateEDIDBaseBlock(this, a2, 0);
    DXGMONITOR::_RetrieveMonitorFrequencyRangeFromRegistry((struct _DEVICE_OBJECT **)this);
    DXGMONITOR::_RetrieveMonitorConfigurationFromDriverInf((PDEVICE_OBJECT *)this);
    DXGMONITOR::_UpdateMonitorEDIDRegistryForGDI((struct _DEVICE_OBJECT **)this);
    if ( *((_BYTE *)this + 456) )
    {
      if ( !*((_QWORD *)this + 2) )
      {
        v11 = WdLogNewEntry5_WdAssertion(v6);
        WdLogEvent5_WdAssertion(v11);
      }
      if ( (int)MONITOR_MGR::_HandleCreateMonitorStep2(
                  *((MONITOR_MGR **)this + 2),
                  *((_DWORD *)this + 7),
                  *((struct DXGMONITOR **)this + 58),
                  this,
                  a2) < 0 )
      {
        v13 = WdLogNewEntry5_WdAssertion(v12);
        WdLogEvent5_WdAssertion(v13);
      }
      if ( *((_BYTE *)this + 456) )
      {
        v14 = WdLogNewEntry5_WdAssertion(v12);
        WdLogEvent5_WdAssertion(v14);
      }
    }
  }
  return 0LL;
}
