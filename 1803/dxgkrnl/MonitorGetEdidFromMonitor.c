/*
 * XREFs of MonitorGetEdidFromMonitor @ 0x1C022E05C
 * Callers:
 *     ?DxgkGetMonitorDescriptor@@YAJU_LUID@@IEIPEAIPEAE@Z @ 0x1C01C4900 (-DxgkGetMonitorDescriptor@@YAJU_LUID@@IEIPEAIPEAE@Z.c)
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C00029B4 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?_GetContiguousEDID@DXGMONITOR@@QEAAXIPEAIPEAE@Z @ 0x1C0239C38 (-_GetContiguousEDID@DXGMONITOR@@QEAAXIPEAIPEAE@Z.c)
 */

__int64 __fastcall MonitorGetEdidFromMonitor(
        struct HDXGMONITOR__ *a1,
        unsigned int a2,
        unsigned int *a3,
        unsigned __int8 *a4)
{
  __int64 result; // rax
  __int64 v9; // rcx
  struct DXGMONITOR *v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  struct DXGMONITOR *v14; // [rsp+40h] [rbp+8h] BYREF

  *a3 = 0;
  if ( a2 )
    memset(a4, 0, a2);
  if ( !a1 )
    return 3221225485LL;
  v14 = 0LL;
  result = MONITOR_MGR::_GetMonitorFromHandle(a1, &v14);
  if ( (int)result >= 0 )
  {
    v10 = v14;
    if ( !v14 )
    {
      v11 = WdLogNewEntry5_WdAssertion(v9);
      WdLogEvent5_WdAssertion(v11);
      v13 = WdLogNewEntry5_WdAssertion(v12);
      WdLogEvent5_WdAssertion(v13);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v10 + 296), 1u);
    DXGMONITOR::_GetContiguousEDID(v10, a2, a3, a4);
    ExReleaseResourceLite((PERESOURCE)((char *)v10 + 296));
    KeLeaveCriticalRegion();
    return 0LL;
  }
  return result;
}
