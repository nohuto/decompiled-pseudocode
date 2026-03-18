/*
 * XREFs of MonitorIsMonitorVirtualModeDisabled @ 0x1C01078E4
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00AB300 (DxgkDisplayConfigDeviceInfo.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAA_NXZ @ 0x1C00B81F0 (-_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAA_NXZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00BA738 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MonitorIsMonitorVirtualModeDisabled(DXGADAPTER *a1, unsigned int a2, char *a3)
{
  __int64 v3; // rdi
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  struct _FAST_MUTEX *v9; // rcx
  __int64 v10; // rax
  __int64 result; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  DXGMONITOR *v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rax
  DXGMONITOR *v17; // [rsp+30h] [rbp+8h] BYREF

  v3 = a2;
  if ( !a1 || a2 == -1 || !a3 )
    return 3221225485LL;
  DXGADAPTER::IsCoreResourceSharedOwner(a1);
  v7 = *((_QWORD *)a1 + 307);
  if ( !v7 )
  {
    v8 = WdLogNewEntry5_WdAssertion(v6);
    WdLogEvent5_WdAssertion(v8);
    v7 = *((_QWORD *)a1 + 307);
  }
  v9 = *(struct _FAST_MUTEX **)(v7 + 96);
  if ( !v9 )
  {
    v10 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v10 + 24) = a1;
    WdLogEvent5_WdError(v10);
    return 3221225485LL;
  }
  v17 = 0LL;
  result = MONITOR_MGR::_GetMonitorInstance(v9, v3, 1, &v17);
  if ( (_DWORD)result == -1073741275 )
  {
    v13 = WdLogNewEntry5_WdDmmEvent(v12);
    *(_QWORD *)(v13 + 24) = v3;
    *(_QWORD *)(v13 + 32) = a1;
    WdLogEvent5_WdDmmEvent(v13);
    return 3221225664LL;
  }
  else if ( (int)result >= 0 )
  {
    v14 = v17;
    if ( !v17 || *((_DWORD *)v17 + 108) != 1 )
    {
      v15 = WdLogNewEntry5_WdAssertion(v12);
      WdLogEvent5_WdAssertion(v15);
    }
    if ( !v14 )
    {
      v16 = WdLogNewEntry5_WdAssertion(v12);
      WdLogEvent5_WdAssertion(v16);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v14 + 296), 1u);
    *a3 = DXGMONITOR::_IsVirtualModeSuportDisabled(v14);
    ExReleaseResourceLite((PERESOURCE)((char *)v14 + 296));
    KeLeaveCriticalRegion();
    return 0LL;
  }
  return result;
}
