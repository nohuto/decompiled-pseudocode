/*
 * XREFs of MonitorGetMonitorOrientationsFromMonitor @ 0x1C00ABE84
 * Callers:
 *     DxgkGetMonitorInternalInfo @ 0x1C00ABB70 (DxgkGetMonitorInternalInfo.c)
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C00029B4 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MonitorGetMonitorOrientationsFromMonitor(struct HDXGMONITOR__ *a1, _DWORD *a2, _DWORD *a3)
{
  __int64 result; // rax
  __int64 v6; // rcx
  struct DXGMONITOR *v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  struct DXGMONITOR *v11; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 )
    return 3221225485LL;
  v11 = 0LL;
  result = MONITOR_MGR::_GetMonitorFromHandle(a1, &v11);
  if ( (int)result >= 0 )
  {
    v7 = v11;
    if ( !v11 )
    {
      v8 = WdLogNewEntry5_WdAssertion(v6);
      WdLogEvent5_WdAssertion(v8);
      v10 = WdLogNewEntry5_WdAssertion(v9);
      WdLogEvent5_WdAssertion(v10);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v7 + 296), 1u);
    if ( a2 )
      *a2 = *((_DWORD *)v7 + 113);
    if ( a3 )
      *a3 = *((_DWORD *)v7 + 115);
    ExReleaseResourceLite((PERESOURCE)((char *)v7 + 296));
    KeLeaveCriticalRegion();
    return 0LL;
  }
  return result;
}
