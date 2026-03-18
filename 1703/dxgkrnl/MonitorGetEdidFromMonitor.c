/*
 * XREFs of MonitorGetEdidFromMonitor @ 0x1C01E3CF0
 * Callers:
 *     DxgkGetMonitorEdid @ 0x1C01AB1A0 (DxgkGetMonitorEdid.c)
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C000D2AC (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?_GetContiguousEDID@DXGMONITOR@@QEAAXIPEAIPEAE@Z @ 0x1C0108B2C (-_GetContiguousEDID@DXGMONITOR@@QEAAXIPEAIPEAE@Z.c)
 */

__int64 __fastcall MonitorGetEdidFromMonitor(
        struct HDXGMONITOR__ *a1,
        unsigned int a2,
        unsigned int *a3,
        unsigned __int8 *a4)
{
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  struct DXGMONITOR *v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  struct DXGMONITOR *v20; // [rsp+40h] [rbp+8h] BYREF

  *a3 = 0;
  if ( a2 )
    memset(a4, 0, a2);
  if ( !a1 )
    return 3221225485LL;
  v20 = 0LL;
  result = MONITOR_MGR::_GetMonitorFromHandle(a1, &v20, (__int64)a3, (__int64)a4);
  if ( (int)result >= 0 )
  {
    v13 = v20;
    if ( !v20 )
    {
      v14 = WdLogNewEntry5_WdAssertion(v10, v9, v11, v12);
      WdLogEvent5_WdAssertion(v14);
      v19 = WdLogNewEntry5_WdAssertion(v16, v15, v17, v18);
      WdLogEvent5_WdAssertion(v19);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v13 + 240), 1u);
    DXGMONITOR::_GetContiguousEDID(v13, a2, a3, a4);
    ExReleaseResourceLite((PERESOURCE)((char *)v13 + 240));
    KeLeaveCriticalRegion();
    return 0LL;
  }
  return result;
}
