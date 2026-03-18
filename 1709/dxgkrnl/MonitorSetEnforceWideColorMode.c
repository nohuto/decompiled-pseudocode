/*
 * XREFs of MonitorSetEnforceWideColorMode @ 0x1C01FED9C
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00B4080 (DxgkDisplayConfigDeviceInfo.c)
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C000BB68 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     ?EdidSupportsHDR@DXGMONITOR@@QEAAEXZ @ 0x1C010BAEC (-EdidSupportsHDR@DXGMONITOR@@QEAAEXZ.c)
 *     ?SetEnforceWideColorMode@DXGMONITOR@@QEAAJE@Z @ 0x1C02016B4 (-SetEnforceWideColorMode@DXGMONITOR@@QEAAJE@Z.c)
 */

__int64 __fastcall MonitorSetEnforceWideColorMode(struct HDXGMONITOR__ *a1, unsigned __int8 a2)
{
  __int64 result; // rax
  __int64 v4; // rcx
  struct DXGMONITOR *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  DXGMONITOR *v9; // rcx
  struct DXGMONITOR *v10; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 )
    return 3221225485LL;
  v10 = 0LL;
  result = MONITOR_MGR::_GetMonitorFromHandle(a1, &v10);
  if ( (int)result >= 0 )
  {
    v5 = v10;
    if ( !v10 )
    {
      v6 = WdLogNewEntry5_WdAssertion(v4);
      WdLogEvent5_WdAssertion(v6);
      v8 = WdLogNewEntry5_WdAssertion(v7);
      WdLogEvent5_WdAssertion(v8);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite((PERESOURCE)((char *)v5 + 280), 1u);
    if ( !DXGMONITOR::EdidSupportsHDR(v5) )
      DXGMONITOR::SetEnforceWideColorMode(v9, a2);
    ExReleaseResourceLite((PERESOURCE)((char *)v5 + 280));
    KeLeaveCriticalRegion();
    return 0LL;
  }
  return result;
}
