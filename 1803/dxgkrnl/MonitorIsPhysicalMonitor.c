/*
 * XREFs of MonitorIsPhysicalMonitor @ 0x1C022E884
 * Callers:
 *     ?SetConnectedMonitor@DMMVIDEOPRESENTTARGET@@QEAAXPEAUHDXGMONITOR__@@@Z @ 0x1C0044F68 (-SetConnectedMonitor@DMMVIDEOPRESENTTARGET@@QEAAXPEAUHDXGMONITOR__@@@Z.c)
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C00029B4 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 */

bool __fastcall MonitorIsPhysicalMonitor(struct HDXGMONITOR__ *a1)
{
  __int64 v2; // rcx
  struct DXGMONITOR *v3; // rbx
  __int64 v4; // rax
  struct _ERESOURCE *v5; // rcx
  bool v6; // bl
  struct DXGMONITOR *v7; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 || (int)MONITOR_MGR::_GetMonitorFromHandle(a1, &v7) < 0 )
    return 0;
  v3 = v7;
  if ( !v7 )
  {
    v4 = WdLogNewEntry5_WdAssertion(v2);
    WdLogEvent5_WdAssertion(v4);
  }
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite((PERESOURCE)((char *)v3 + 296), 1u);
  v5 = (struct _ERESOURCE *)((char *)v3 + 296);
  v6 = *((_DWORD *)v3 + 108) == 1;
  ExReleaseResourceLite(v5);
  KeLeaveCriticalRegion();
  return v6;
}
