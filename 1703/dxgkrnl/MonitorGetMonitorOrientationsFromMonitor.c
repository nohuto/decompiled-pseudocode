/*
 * XREFs of MonitorGetMonitorOrientationsFromMonitor @ 0x1C00AC5EC
 * Callers:
 *     DxgkGetMonitorInternalInfo @ 0x1C00AC3D0 (DxgkGetMonitorInternalInfo.c)
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C000D2AC (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MonitorGetMonitorOrientationsFromMonitor(
        struct HDXGMONITOR__ *a1,
        _DWORD *a2,
        _DWORD *a3,
        __int64 a4)
{
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  struct DXGMONITOR *v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  struct DXGMONITOR *v18; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 )
    return 3221225485LL;
  v18 = 0LL;
  result = MONITOR_MGR::_GetMonitorFromHandle(a1, &v18, (__int64)a3, a4);
  if ( (int)result >= 0 )
  {
    v11 = v18;
    if ( !v18 )
    {
      v12 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
      WdLogEvent5_WdAssertion(v12);
      v17 = WdLogNewEntry5_WdAssertion(v14, v13, v15, v16);
      WdLogEvent5_WdAssertion(v17);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v11 + 240), 1u);
    if ( a2 )
      *a2 = *((_DWORD *)v11 + 99);
    if ( a3 )
      *a3 = *((_DWORD *)v11 + 101);
    ExReleaseResourceLite((PERESOURCE)((char *)v11 + 240));
    KeLeaveCriticalRegion();
    return 0LL;
  }
  return result;
}
