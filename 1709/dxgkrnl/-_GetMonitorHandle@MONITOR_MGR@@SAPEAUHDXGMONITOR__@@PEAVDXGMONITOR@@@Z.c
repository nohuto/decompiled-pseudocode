/*
 * XREFs of ?_GetMonitorHandle@MONITOR_MGR@@SAPEAUHDXGMONITOR__@@PEAVDXGMONITOR@@@Z @ 0x1C000BB44
 * Callers:
 *     ?DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z @ 0x1C00B11F0 (-DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z.c)
 *     DxgkGetMonitorInternalInfo @ 0x1C00D86D0 (DxgkGetMonitorInternalInfo.c)
 *     MonitorGetMonitorHandle @ 0x1C00E4564 (MonitorGetMonitorHandle.c)
 *     ?_QueryDriverRecommendMonitorModes@DXGMONITOR@@AEAAJXZ @ 0x1C0109620 (-_QueryDriverRecommendMonitorModes@DXGMONITOR@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

struct HDXGMONITOR__ *__fastcall MONITOR_MGR::_GetMonitorHandle(struct DXGMONITOR *a1)
{
  __int64 v3; // rax

  if ( !a1 )
  {
    v3 = WdLogNewEntry5_WdAssertion(0LL);
    WdLogEvent5_WdAssertion(v3);
  }
  return a1;
}
