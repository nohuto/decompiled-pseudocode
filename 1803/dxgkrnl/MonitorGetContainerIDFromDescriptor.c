/*
 * XREFs of MonitorGetContainerIDFromDescriptor @ 0x1C022DE68
 * Callers:
 *     DpiPdoGetDeviceContainerIdFromDescriptor @ 0x1C020BCE8 (DpiPdoGetDeviceContainerIdFromDescriptor.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00BA738 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_GetMonitorContainerID@DXGMONITOR@@QEAAJPEAU_GUID@@@Z @ 0x1C023A050 (-_GetMonitorContainerID@DXGMONITOR@@QEAAJPEAU_GUID@@@Z.c)
 */

__int64 __fastcall MonitorGetContainerIDFromDescriptor(DXGADAPTER *a1, unsigned int a2, struct _GUID *a3)
{
  __int64 v3; // rdi
  __int64 v6; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  struct _FAST_MUTEX *v11; // rcx
  __int64 v12; // rcx
  _QWORD *v13; // rax
  struct DXGMONITOR *v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  unsigned int MonitorContainerID; // eax
  struct _ERESOURCE *v19; // rcx
  unsigned int v20; // ebx
  struct DXGMONITOR *v21; // [rsp+30h] [rbp+8h] BYREF

  v3 = a2;
  if ( !a1 )
  {
    v6 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v6 + 24) = -1073741811LL;
LABEL_3:
    WdLogEvent5_WdError(v6);
    return 3221225485LL;
  }
  if ( a2 == -1 )
    return 3221226021LL;
  DXGADAPTER::IsCoreResourceSharedOwner(a1);
  v9 = *((_QWORD *)a1 + 307);
  if ( !v9 )
  {
    v10 = WdLogNewEntry5_WdAssertion(v8);
    WdLogEvent5_WdAssertion(v10);
    v9 = *((_QWORD *)a1 + 307);
  }
  v11 = *(struct _FAST_MUTEX **)(v9 + 96);
  if ( !v11 )
  {
    v6 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v6 + 24) = a1;
    goto LABEL_3;
  }
  v21 = 0LL;
  if ( (int)MONITOR_MGR::_GetMonitorInstance(v11, v3, 1, &v21) < 0 )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdError(v12);
    v13[3] = v3;
    v13[4] = a1;
    v13[5] = -1073741275LL;
    WdLogEvent5_WdError(v13);
    return 3221226021LL;
  }
  v14 = v21;
  if ( !v21 )
  {
    v15 = WdLogNewEntry5_WdAssertion(v12);
    WdLogEvent5_WdAssertion(v15);
    v17 = WdLogNewEntry5_WdAssertion(v16);
    WdLogEvent5_WdAssertion(v17);
  }
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite((PERESOURCE)((char *)v14 + 296), 1u);
  MonitorContainerID = DXGMONITOR::_GetMonitorContainerID(v14, a3);
  v19 = (struct _ERESOURCE *)((char *)v14 + 296);
  v20 = MonitorContainerID;
  ExReleaseResourceLite(v19);
  KeLeaveCriticalRegion();
  return v20;
}
