/*
 * XREFs of MonitorSetSDRWhiteLevel @ 0x1C022F3AC
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00AB300 (DxgkDisplayConfigDeviceInfo.c)
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C00029B4 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     ?SetSDRWhiteLevel@DXGMONITOR@@QEAAJK@Z @ 0x1C0235754 (-SetSDRWhiteLevel@DXGMONITOR@@QEAAJK@Z.c)
 *     ?EdidSupportsHDR@DXGMONITOR@@QEAAEXZ @ 0x1C0238D24 (-EdidSupportsHDR@DXGMONITOR@@QEAAEXZ.c)
 */

__int64 __fastcall MonitorSetSDRWhiteLevel(struct HDXGMONITOR__ *a1, unsigned int a2)
{
  __int64 result; // rax
  __int64 v4; // rcx
  struct DXGMONITOR *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  unsigned int v11; // eax
  struct _ERESOURCE *v12; // rcx
  unsigned int v13; // ebx
  struct DXGMONITOR *v14; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 )
    return 3221225485LL;
  v14 = 0LL;
  result = MONITOR_MGR::_GetMonitorFromHandle(a1, &v14);
  if ( (int)result >= 0 )
  {
    v5 = v14;
    if ( !v14 )
    {
      v6 = WdLogNewEntry5_WdAssertion(v4);
      WdLogEvent5_WdAssertion(v6);
      v8 = WdLogNewEntry5_WdAssertion(v7);
      WdLogEvent5_WdAssertion(v8);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite((PERESOURCE)((char *)v5 + 296), 1u);
    if ( !DXGMONITOR::EdidSupportsHDR(v5) )
    {
      v10 = WdLogNewEntry5_WdAssertion(v9);
      WdLogEvent5_WdAssertion(v10);
    }
    v11 = DXGMONITOR::SetSDRWhiteLevel(v5, a2);
    v12 = (struct _ERESOURCE *)((char *)v5 + 296);
    v13 = v11;
    ExReleaseResourceLite(v12);
    KeLeaveCriticalRegion();
    return v13;
  }
  return result;
}
