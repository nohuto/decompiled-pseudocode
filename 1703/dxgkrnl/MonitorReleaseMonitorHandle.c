/*
 * XREFs of MonitorReleaseMonitorHandle @ 0x1C00AC540
 * Callers:
 *     ??1VIDPN_MGR@@UEAA@XZ @ 0x1C0043EEC (--1VIDPN_MGR@@UEAA@XZ.c)
 *     DxgkQueryMonitorTypeLockHeld @ 0x1C0099E20 (DxgkQueryMonitorTypeLockHeld.c)
 *     ?IsTargetEmergencySimulatedMonitor@@YAJPEAXIPEAE@Z @ 0x1C00AC144 (-IsTargetEmergencySimulatedMonitor@@YAJPEAXIPEAE@Z.c)
 *     DxgkGetMonitorInternalInfo @ 0x1C00AC3D0 (DxgkGetMonitorInternalInfo.c)
 *     ?ReleaseMonitorHandle@VIDPN_MGR@@QEAAJPEAUHDXGMONITOR__@@@Z @ 0x1C00E187C (-ReleaseMonitorHandle@VIDPN_MGR@@QEAAJPEAUHDXGMONITOR__@@@Z.c)
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00F0750 (DxgkDisplayConfigDeviceInfo.c)
 *     ?OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z @ 0x1C0113970 (-OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z.c)
 *     ?Initialize@CTTMDEVICE@@AEAAJPEAU_DEVICE_OBJECT@@PEAVDXGADAPTER@@IK@Z @ 0x1C01196FC (-Initialize@CTTMDEVICE@@AEAAJPEAU_DEVICE_OBJECT@@PEAVDXGADAPTER@@IK@Z.c)
 *     ?GetMonitorDescriptorSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORDESCRIPTORSET__@@PEAPEBU_DXGK_MONITORDESCRIPTORSET_INTERFACE@@@Z @ 0x1C0122870 (-GetMonitorDescriptorSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORDESCRIPT.c)
 *     DxgkIsMonitorConnected @ 0x1C017C350 (DxgkIsMonitorConnected.c)
 *     DxgkGetMonitorEdid @ 0x1C01AB1A0 (DxgkGetMonitorEdid.c)
 *     DxgkHandleForceProjectionMonitor @ 0x1C01AB420 (DxgkHandleForceProjectionMonitor.c)
 *     ?ReleaseMonitorSourceModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@QEAUD3DKMDT_HMONITORSOURCEMODESET__@@@Z @ 0x1C01D8AA0 (-ReleaseMonitorSourceModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@QEAUD3DKMD.c)
 *     ?GetMonitorFrequencyRangeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORFREQUENCYRANGESET__@@PEAPEBU_DXGK_MONITORFREQUENCYRANGESET_INTERFACE@@@Z @ 0x1C01E5300 (-GetMonitorFrequencyRangeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORFREQ.c)
 *     ?ReleaseMonitorSourceModeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXQEAUD3DKMDT_HMONITORSOURCEMODESET__@@@Z @ 0x1C01E5BF0 (-ReleaseMonitorSourceModeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXQEAUD3DKMDT_HMONITORSOURCEMO.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C000D2AC (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MonitorReleaseMonitorHandle(DXGADAPTER *this, struct HDXGMONITOR__ *a2, PVOID Tag, __int64 a4)
{
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 result; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  struct DXGMONITOR *v15; // [rsp+30h] [rbp+8h] BYREF

  v7 = WdLogNewEntry5_WdTrace(this, a2, Tag, a4);
  *(_QWORD *)(v7 + 24) = a2;
  *(_QWORD *)(v7 + 32) = this;
  if ( !this || !a2 )
    return 3221225485LL;
  DXGADAPTER::IsCoreResourceSharedOwner(this);
  if ( !*((_QWORD *)this + 285) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
    WdLogEvent5_WdAssertion(v13);
  }
  if ( !*(_QWORD *)(*((_QWORD *)this + 285) + 96LL) )
  {
    v14 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v14 + 24) = this;
    WdLogEvent5_WdError(v14);
    return 3221225485LL;
  }
  v15 = 0LL;
  result = MONITOR_MGR::_GetMonitorFromHandle(a2, &v15, v10, v11);
  if ( (int)result >= 0 )
  {
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)((char *)v15 + 344), Tag, 0x20u);
    return 0LL;
  }
  return result;
}
