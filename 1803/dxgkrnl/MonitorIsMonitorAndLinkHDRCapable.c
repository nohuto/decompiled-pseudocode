/*
 * XREFs of MonitorIsMonitorAndLinkHDRCapable @ 0x1C00ADCCC
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00AB300 (DxgkDisplayConfigDeviceInfo.c)
 *     DxgkGetMonitorInternalInfo @ 0x1C00ABB70 (DxgkGetMonitorInternalInfo.c)
 *     ?BmlPickColorSpaceAndWireFormat@@YAJPEBUBML_VIDPN_PATH_ORDER@@W4DXGK_DIAG_CCD_BML_ORIGIN@@PEAVDMMVIDPN@@@Z @ 0x1C00AE0C8 (-BmlPickColorSpaceAndWireFormat@@YAJPEBUBML_VIDPN_PATH_ORDER@@W4DXGK_DIAG_CCD_BML_ORIGIN@@PEAVDM.c)
 *     ?_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@@Z @ 0x1C023626C (-_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@@Z.c)
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C00029B4 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     ?EdidSupportsHDR@DXGMONITOR@@QEAAEXZ @ 0x1C0238D24 (-EdidSupportsHDR@DXGMONITOR@@QEAAEXZ.c)
 */

__int64 __fastcall MonitorIsMonitorAndLinkHDRCapable(struct HDXGMONITOR__ *a1, char *a2, bool *a3)
{
  char v3; // bl
  __int64 result; // rax
  __int64 v7; // rcx
  DXGMONITOR *v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // [rsp+20h] [rbp-28h]
  DXGMONITOR *v14; // [rsp+50h] [rbp+8h] BYREF

  v3 = 0;
  if ( !a1 )
    return 3221225485LL;
  *a2 = 0;
  *a3 = 0;
  v14 = 0LL;
  result = MONITOR_MGR::_GetMonitorFromHandle(a1, &v14);
  if ( (int)result >= 0 )
  {
    v8 = v14;
    if ( !v14 )
    {
      v9 = WdLogNewEntry5_WdAssertion(v7);
      WdLogEvent5_WdAssertion(v9);
      v11 = WdLogNewEntry5_WdAssertion(v10);
      WdLogEvent5_WdAssertion(v11);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v8 + 296), 1u);
    if ( (*((_DWORD *)v8 + 10) & 0x400) != 0 )
    {
      v13 = *((_QWORD *)v8 + 58);
      v12 = HIDWORD(v13);
      if ( (v13 & 0x400000000LL) != 0 )
      {
        if ( DXGMONITOR::EdidSupportsHDR(v8) )
          v3 = 1;
      }
      *a2 = v3;
      *a3 = (v12 & 0x200) != 0;
    }
    ExReleaseResourceLite((PERESOURCE)((char *)v8 + 296));
    KeLeaveCriticalRegion();
    return 0LL;
  }
  return result;
}
