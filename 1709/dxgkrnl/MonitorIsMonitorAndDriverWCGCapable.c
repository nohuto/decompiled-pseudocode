/*
 * XREFs of MonitorIsMonitorAndDriverWCGCapable @ 0x1C00D22DC
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00B4080 (DxgkDisplayConfigDeviceInfo.c)
 *     ?BmlPickColorSpaceAndWireFormat@@YAJPEBUBML_VIDPN_PATH_ORDER@@W4DXGK_DIAG_CCD_BML_ORIGIN@@PEAVDMMVIDPN@@@Z @ 0x1C00D20AC (-BmlPickColorSpaceAndWireFormat@@YAJPEBUBML_VIDPN_PATH_ORDER@@W4DXGK_DIAG_CCD_BML_ORIGIN@@PEAVDM.c)
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C000BB68 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     wil_details_FeaturePropertyCache_ReportUsageToService @ 0x1C000BFA0 (wil_details_FeaturePropertyCache_ReportUsageToService.c)
 *     ?_GetDisplayCoreFromMonitor@MONITOR_MGR@@SAPEAVADAPTER_DISPLAY@@PEAUHDXGMONITOR__@@@Z @ 0x1C00140D4 (-_GetDisplayCoreFromMonitor@MONITOR_MGR@@SAPEAVADAPTER_DISPLAY@@PEAUHDXGMONITOR__@@@Z.c)
 */

__int64 __fastcall MonitorIsMonitorAndDriverWCGCapable(struct HDXGMONITOR__ *a1, char *a2)
{
  __int64 result; // rax
  __int64 v5; // rcx
  struct DXGMONITOR *v6; // rbx
  char v7; // di
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  int v11; // [rsp+20h] [rbp-28h]
  struct DXGMONITOR *v12; // [rsp+50h] [rbp+8h] BYREF

  if ( !a1 )
    return 3221225485LL;
  v12 = 0LL;
  result = MONITOR_MGR::_GetMonitorFromHandle(a1, &v12);
  if ( (int)result >= 0 )
  {
    v6 = v12;
    if ( !v12 )
    {
      v8 = WdLogNewEntry5_WdAssertion(v5);
      WdLogEvent5_WdAssertion(v8);
      v10 = WdLogNewEntry5_WdAssertion(v9);
      WdLogEvent5_WdAssertion(v10);
    }
    KeEnterCriticalRegion();
    v7 = 1;
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v6 + 280), 1u);
    if ( !*((_BYTE *)v6 + 650)
      || (wil_details_FeaturePropertyCache_ReportUsageToService(
            (__int64)&Feature_WCGTestMode__private_propertyCache,
            12077848LL,
            (__int64)&unk_1C003C74C,
            0,
            v11),
          (*(_DWORD *)(*((_QWORD *)MONITOR_MGR::_GetDisplayCoreFromMonitor(a1) + 2) + 1680LL) & 8) == 0) )
    {
      v7 = 0;
    }
    *a2 = v7;
    ExReleaseResourceLite((PERESOURCE)((char *)v6 + 280));
    KeLeaveCriticalRegion();
    return 0LL;
  }
  return result;
}
