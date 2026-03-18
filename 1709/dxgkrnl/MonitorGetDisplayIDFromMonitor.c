/*
 * XREFs of MonitorGetDisplayIDFromMonitor @ 0x1C01FE5B4
 * Callers:
 *     ?DxgkGetMonitorDescriptor@@YAJU_LUID@@IEIPEAIPEAE@Z @ 0x1C01C3B80 (-DxgkGetMonitorDescriptor@@YAJU_LUID@@IEIPEAIPEAE@Z.c)
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C000BB68 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     ?_GetDisplayIDBlob@DXGMONITOR@@QEAAJIPEAIPEAE@Z @ 0x1C02028B4 (-_GetDisplayIDBlob@DXGMONITOR@@QEAAJIPEAIPEAE@Z.c)
 */

__int64 __fastcall MonitorGetDisplayIDFromMonitor(
        struct HDXGMONITOR__ *a1,
        unsigned int a2,
        unsigned int *a3,
        unsigned __int8 *a4)
{
  __int64 result; // rax
  __int64 v8; // rcx
  struct DXGMONITOR *v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  int DisplayIDBlob; // eax
  struct _ERESOURCE *v14; // rcx
  unsigned int v15; // ebx
  struct DXGMONITOR *v16; // [rsp+40h] [rbp+8h] BYREF

  *a3 = 0;
  if ( !a1 )
    return 3221225485LL;
  v16 = 0LL;
  result = MONITOR_MGR::_GetMonitorFromHandle(a1, &v16);
  if ( (int)result >= 0 )
  {
    v9 = v16;
    if ( !v16 )
    {
      v10 = WdLogNewEntry5_WdAssertion(v8);
      WdLogEvent5_WdAssertion(v10);
      v12 = WdLogNewEntry5_WdAssertion(v11);
      WdLogEvent5_WdAssertion(v12);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v9 + 280), 1u);
    DisplayIDBlob = DXGMONITOR::_GetDisplayIDBlob(v9, a2, a3, a4);
    v14 = (struct _ERESOURCE *)((char *)v9 + 280);
    v15 = DisplayIDBlob;
    ExReleaseResourceLite(v14);
    KeLeaveCriticalRegion();
    return v15;
  }
  return result;
}
