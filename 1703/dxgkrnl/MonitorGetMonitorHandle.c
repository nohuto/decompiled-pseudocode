/*
 * XREFs of MonitorGetMonitorHandle @ 0x1C00AC68C
 * Callers:
 *     DxgkQueryMonitorTypeLockHeld @ 0x1C0099E20 (DxgkQueryMonitorTypeLockHeld.c)
 *     ?IsTargetEmergencySimulatedMonitor@@YAJPEAXIPEAE@Z @ 0x1C00AC144 (-IsTargetEmergencySimulatedMonitor@@YAJPEAXIPEAE@Z.c)
 *     DxgkGetMonitorInternalInfo @ 0x1C00AC3D0 (DxgkGetMonitorInternalInfo.c)
 *     ?GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z @ 0x1C00E17DC (-GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z.c)
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00F0750 (DxgkDisplayConfigDeviceInfo.c)
 *     ?OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z @ 0x1C0113970 (-OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z.c)
 *     ?Initialize@CTTMDEVICE@@AEAAJPEAU_DEVICE_OBJECT@@PEAVDXGADAPTER@@IK@Z @ 0x1C01196FC (-Initialize@CTTMDEVICE@@AEAAJPEAU_DEVICE_OBJECT@@PEAVDXGADAPTER@@IK@Z.c)
 *     ?GetMonitorDescriptorSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORDESCRIPTORSET__@@PEAPEBU_DXGK_MONITORDESCRIPTORSET_INTERFACE@@@Z @ 0x1C0122870 (-GetMonitorDescriptorSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORDESCRIPT.c)
 *     DxgkIsMonitorConnected @ 0x1C017C350 (DxgkIsMonitorConnected.c)
 *     DxgkGetMonitorEdid @ 0x1C01AB1A0 (DxgkGetMonitorEdid.c)
 *     DxgkHandleForceProjectionMonitor @ 0x1C01AB420 (DxgkHandleForceProjectionMonitor.c)
 *     ?AcquireMonitorSourceModeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORSOURCEMODESET__@@PEAPEBU_DXGK_MONITORSOURCEMODESET_INTERFACE@@@Z @ 0x1C01E48C0 (-AcquireMonitorSourceModeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORSOUR.c)
 *     ?GetMonitorFrequencyRangeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORFREQUENCYRANGESET__@@PEAPEBU_DXGK_MONITORFREQUENCYRANGESET_INTERFACE@@@Z @ 0x1C01E5300 (-GetMonitorFrequencyRangeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORFREQ.c)
 * Callees:
 *     ?_GetMonitorHandle@MONITOR_MGR@@SAPEAUHDXGMONITOR__@@PEAVDXGMONITOR@@@Z @ 0x1C0003B34 (-_GetMonitorHandle@MONITOR_MGR@@SAPEAUHDXGMONITOR__@@PEAVDXGMONITOR@@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00E989C (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_AddReference@DXGMONITOR@@QEAAXPEAX@Z @ 0x1C00F9A9C (-_AddReference@DXGMONITOR@@QEAAXPEAX@Z.c)
 */

__int64 __fastcall MonitorGetMonitorHandle(
        DXGADAPTER *this,
        __int64 a2,
        __int64 a3,
        void *a4,
        struct HDXGMONITOR__ **a5)
{
  __int64 v6; // r14
  unsigned __int8 v7; // r12
  __int64 v9; // rax
  struct HDXGMONITOR__ **v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  MONITOR_MGR *v15; // rdi
  int MonitorInstance; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned int v21; // ebx
  DXGMONITOR *v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  struct DXGMONITOR *v32; // [rsp+50h] [rbp+8h] BYREF

  v6 = (unsigned int)a2;
  v7 = a3;
  v9 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  *(_QWORD *)(v9 + 24) = v6;
  *(_QWORD *)(v9 + 32) = this;
  if ( !this )
    return 3221225485LL;
  v10 = a5;
  if ( !a5 || (_DWORD)v6 == -1 )
    return 3221225485LL;
  *a5 = 0LL;
  DXGADAPTER::IsCoreResourceSharedOwner(this);
  if ( !*((_QWORD *)this + 285) )
  {
    v28 = WdLogNewEntry5_WdAssertion(v12, v11, v13, v14);
    WdLogEvent5_WdAssertion(v28);
  }
  v15 = *(MONITOR_MGR **)(*((_QWORD *)this + 285) + 96LL);
  if ( !v15 )
  {
    v29 = WdLogNewEntry5_WdError(v12, v11);
    *(_QWORD *)(v29 + 24) = this;
    WdLogEvent5_WdError(v29);
    return 3221225485LL;
  }
  v32 = 0LL;
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v15, v6, v7, &v32);
  v21 = MonitorInstance;
  if ( MonitorInstance == -1073741275 )
  {
    v27 = WdLogNewEntry5_WdDmmEvent();
    *(_QWORD *)(v27 + 24) = (unsigned int)v6;
    *(_QWORD *)(v27 + 32) = v15;
    WdLogEvent5_WdDmmEvent(v27);
    return 3221226021LL;
  }
  else if ( MonitorInstance < 0 )
  {
    v30 = WdLogNewEntry5_WdError(v18, v17);
    *(_QWORD *)(v30 + 24) = (unsigned int)v6;
    *(_QWORD *)(v30 + 32) = v15;
    WdLogEvent5_WdError(v30);
    return v21;
  }
  else
  {
    v22 = v32;
    if ( !v32 )
    {
      v31 = WdLogNewEntry5_WdAssertion(v18, v17, v19, v20);
      WdLogEvent5_WdAssertion(v31);
    }
    DXGMONITOR::_AddReference(v22, a4);
    *v10 = MONITOR_MGR::_GetMonitorHandle(v22, v23, v24, v25);
    return 0LL;
  }
}
