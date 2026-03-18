/*
 * XREFs of MonitorGetContainerIDFromDescriptor @ 0x1C010534C
 * Callers:
 *     DpiPdoGetDeviceContainerIdFromDescriptor @ 0x1C0105044 (DpiPdoGetDeviceContainerIdFromDescriptor.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00B08DC (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_GetMonitorContainerID@DXGMONITOR@@QEAAJPEAU_GUID@@@Z @ 0x1C010D18C (-_GetMonitorContainerID@DXGMONITOR@@QEAAJPEAU_GUID@@@Z.c)
 */

__int64 __fastcall MonitorGetContainerIDFromDescriptor(DXGADAPTER *a1, unsigned int a2, struct _GUID *a3)
{
  __int64 v3; // rdi
  __int64 v6; // rcx
  struct _FAST_MUTEX *v7; // rcx
  __int64 v8; // rcx
  struct DXGMONITOR *v9; // rbx
  unsigned int MonitorContainerID; // eax
  struct _ERESOURCE *v11; // rcx
  unsigned int v12; // ebx
  __int64 v14; // rax
  _QWORD *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  struct DXGMONITOR *v20; // [rsp+30h] [rbp+8h] BYREF

  v3 = a2;
  if ( !a1 )
  {
    v14 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v14 + 24) = -1073741811LL;
LABEL_12:
    WdLogEvent5_WdError(v14);
    return 3221225485LL;
  }
  if ( a2 == -1 )
    return 3221226021LL;
  DXGADAPTER::IsCoreResourceSharedOwner(a1);
  if ( !*((_QWORD *)a1 + 288) )
  {
    v16 = WdLogNewEntry5_WdAssertion(v6);
    WdLogEvent5_WdAssertion(v16);
  }
  v7 = *(struct _FAST_MUTEX **)(*((_QWORD *)a1 + 288) + 96LL);
  if ( !v7 )
  {
    v14 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v14 + 24) = a1;
    goto LABEL_12;
  }
  v20 = 0LL;
  if ( (int)MONITOR_MGR::_GetMonitorInstance(v7, v3, 1, (ULONG **)&v20) < 0 )
  {
    v15 = (_QWORD *)WdLogNewEntry5_WdError(v8);
    v15[3] = v3;
    v15[4] = a1;
    v15[5] = -1073741275LL;
    WdLogEvent5_WdError(v15);
    return 3221226021LL;
  }
  v9 = v20;
  if ( !v20 )
  {
    v17 = WdLogNewEntry5_WdAssertion(v8);
    WdLogEvent5_WdAssertion(v17);
    v19 = WdLogNewEntry5_WdAssertion(v18);
    WdLogEvent5_WdAssertion(v19);
  }
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite((PERESOURCE)((char *)v9 + 280), 1u);
  MonitorContainerID = DXGMONITOR::_GetMonitorContainerID(v9, a3);
  v11 = (struct _ERESOURCE *)((char *)v9 + 280);
  v12 = MonitorContainerID;
  ExReleaseResourceLite(v11);
  KeLeaveCriticalRegion();
  return v12;
}
