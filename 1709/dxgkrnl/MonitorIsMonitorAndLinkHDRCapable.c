/*
 * XREFs of MonitorIsMonitorAndLinkHDRCapable @ 0x1C00D237C
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00B4080 (DxgkDisplayConfigDeviceInfo.c)
 *     ?BmlPickColorSpaceAndWireFormat@@YAJPEBUBML_VIDPN_PATH_ORDER@@W4DXGK_DIAG_CCD_BML_ORIGIN@@PEAVDMMVIDPN@@@Z @ 0x1C00D20AC (-BmlPickColorSpaceAndWireFormat@@YAJPEBUBML_VIDPN_PATH_ORDER@@W4DXGK_DIAG_CCD_BML_ORIGIN@@PEAVDM.c)
 *     ?DmmGetMonitorSupportsHDR@@YAJPEAXIPEAE@Z @ 0x1C01EC54C (-DmmGetMonitorSupportsHDR@@YAJPEAXIPEAE@Z.c)
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C000BB68 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     ?EdidSupportsHDR@DXGMONITOR@@QEAAEXZ @ 0x1C010BAEC (-EdidSupportsHDR@DXGMONITOR@@QEAAEXZ.c)
 */

__int64 __fastcall MonitorIsMonitorAndLinkHDRCapable(struct HDXGMONITOR__ *a1, char *a2)
{
  __int64 result; // rax
  __int64 v4; // rcx
  DXGMONITOR *v5; // rbx
  char v6; // si
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  DXGMONITOR *v10; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 )
    return 3221225485LL;
  v10 = 0LL;
  result = MONITOR_MGR::_GetMonitorFromHandle(a1, &v10);
  if ( (int)result < 0 )
  {
    *a2 = 0;
  }
  else
  {
    v5 = v10;
    if ( !v10 )
    {
      v7 = WdLogNewEntry5_WdAssertion(v4);
      WdLogEvent5_WdAssertion(v7);
      v9 = WdLogNewEntry5_WdAssertion(v8);
      WdLogEvent5_WdAssertion(v9);
    }
    KeEnterCriticalRegion();
    v6 = 1;
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v5 + 280), 1u);
    if ( (*((_DWORD *)v5 + 6) & 0x400) != 0 )
    {
      if ( (*((_QWORD *)v5 + 56) & 0x400000000LL) == 0 || !DXGMONITOR::EdidSupportsHDR(v5) )
        v6 = 0;
      *a2 = v6;
    }
    else
    {
      *a2 = 0;
    }
    ExReleaseResourceLite((PERESOURCE)((char *)v5 + 280));
    KeLeaveCriticalRegion();
    return 0LL;
  }
  return result;
}
