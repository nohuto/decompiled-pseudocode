/*
 * XREFs of MonitorSetDefaultAdvancedColorParams @ 0x1C022F228
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00AB300 (DxgkDisplayConfigDeviceInfo.c)
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C00029B4 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     ?_SetColorPrimariesToBT709@DXGMONITOR@@QEAAXXZ @ 0x1C023BF3C (-_SetColorPrimariesToBT709@DXGMONITOR@@QEAAXXZ.c)
 */

__int64 __fastcall MonitorSetDefaultAdvancedColorParams(struct HDXGMONITOR__ *a1)
{
  __int64 result; // rax
  __int64 v2; // rcx
  unsigned int v3; // esi
  struct DXGMONITOR *v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  struct DXGMONITOR *v8; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 )
    return 3221225485LL;
  v8 = 0LL;
  result = MONITOR_MGR::_GetMonitorFromHandle(a1, &v8);
  v3 = result;
  if ( (int)result >= 0 )
  {
    v4 = v8;
    if ( !v8 )
    {
      v5 = WdLogNewEntry5_WdAssertion(v2);
      WdLogEvent5_WdAssertion(v5);
      v7 = WdLogNewEntry5_WdAssertion(v6);
      WdLogEvent5_WdAssertion(v7);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite((PERESOURCE)((char *)v4 + 296), 1u);
    DXGMONITOR::_SetColorPrimariesToBT709(v4);
    *((_DWORD *)v4 + 163) = 5000;
    *((_DWORD *)v4 + 164) = 2700000;
    *((_DWORD *)v4 + 165) = 2700000;
    *((_BYTE *)v4 + 668) = 0;
    *((_DWORD *)v4 + 168) = 3;
    ExReleaseResourceLite((PERESOURCE)((char *)v4 + 296));
    KeLeaveCriticalRegion();
    return v3;
  }
  return result;
}
