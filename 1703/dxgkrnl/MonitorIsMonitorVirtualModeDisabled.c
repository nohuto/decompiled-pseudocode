/*
 * XREFs of MonitorIsMonitorVirtualModeDisabled @ 0x1C01E3F3C
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00F0750 (DxgkDisplayConfigDeviceInfo.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00E989C (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MonitorIsMonitorVirtualModeDisabled(DXGADAPTER *a1, unsigned int a2, bool *a3)
{
  __int64 v3; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rax
  struct _FAST_MUTEX *v12; // rcx
  __int64 v13; // rax
  __int64 result; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  struct DXGMONITOR *v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rax
  struct DXGMONITOR *v23; // [rsp+30h] [rbp+8h] BYREF

  v3 = a2;
  if ( !a1 || a2 == -1 || !a3 )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
    WdLogEvent5_WdAssertion(v10);
  }
  if ( !*((_QWORD *)a1 + 285) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
    WdLogEvent5_WdAssertion(v11);
  }
  v12 = *(struct _FAST_MUTEX **)(*((_QWORD *)a1 + 285) + 96LL);
  if ( !v12 )
  {
    v13 = WdLogNewEntry5_WdError(0LL, v6);
    *(_QWORD *)(v13 + 24) = a1;
    WdLogEvent5_WdError(v13);
    return 3221225485LL;
  }
  v23 = 0LL;
  LOBYTE(v8) = 1;
  result = MONITOR_MGR::_GetMonitorInstance(v12, (unsigned int)v3, v8, (ULONG **)&v23);
  if ( (_DWORD)result == -1073741275 )
  {
    v19 = WdLogNewEntry5_WdDmmEvent(v16, v15, v17, v18);
    *(_QWORD *)(v19 + 24) = v3;
    *(_QWORD *)(v19 + 32) = a1;
    WdLogEvent5_WdDmmEvent(v19);
    return 3221225664LL;
  }
  else if ( (int)result >= 0 )
  {
    v20 = v23;
    if ( !v23 || *((_DWORD *)v23 + 94) != 1 )
    {
      v21 = WdLogNewEntry5_WdAssertion(v16, v15, v17, v18);
      WdLogEvent5_WdAssertion(v21);
    }
    if ( !v20 )
    {
      v22 = WdLogNewEntry5_WdAssertion(v16, v15, v17, v18);
      WdLogEvent5_WdAssertion(v22);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v20 + 240), 1u);
    *a3 = (*((_DWORD *)v20 + 6) & 0x80) != 0;
    ExReleaseResourceLite((PERESOURCE)((char *)v20 + 240));
    KeLeaveCriticalRegion();
    return 0LL;
  }
  return result;
}
