/*
 * XREFs of MonitorGetDeviceObject @ 0x1C00AC2E0
 * Callers:
 *     ?DxgkGetMonitorDeviceObject@@YAJPEBU_LUID@@IPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z @ 0x1C00AC1D0 (-DxgkGetMonitorDeviceObject@@YAJPEBU_LUID@@IPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_GetDeviceObject@DXGMONITOR@@QEBAJPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z @ 0x1C000D1E4 (-_GetDeviceObject@DXGMONITOR@@QEBAJPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00E989C (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MonitorGetDeviceObject(
        DXGADAPTER *this,
        __int64 a2,
        struct _FILE_OBJECT **a3,
        struct _DEVICE_OBJECT **a4)
{
  __int64 v5; // rdi
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  MONITOR_MGR *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  DXGMONITOR *v20; // rbx
  __int64 v21; // r9
  unsigned int DeviceObject; // eax
  struct _ERESOURCE *v23; // rcx
  unsigned int v24; // ebx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  _QWORD *v29; // rax
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rax
  DXGMONITOR *v36; // [rsp+40h] [rbp+8h] BYREF

  v5 = (unsigned int)a2;
  v8 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  *(_QWORD *)(v8 + 24) = v5;
  *(_QWORD *)(v8 + 32) = this;
  if ( !this || (_DWORD)v5 == -1 )
  {
    v28 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v28 + 24) = -1073741811LL;
    goto LABEL_16;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    v26 = WdLogNewEntry5_WdAssertion(v12, v11, v13, v14);
    WdLogEvent5_WdAssertion(v26);
  }
  if ( !*((_QWORD *)this + 285) )
  {
    v27 = WdLogNewEntry5_WdAssertion(v12, v11, v13, v14);
    WdLogEvent5_WdAssertion(v27);
  }
  v15 = *(MONITOR_MGR **)(*((_QWORD *)this + 285) + 96LL);
  if ( !v15 )
  {
    v28 = WdLogNewEntry5_WdError(0LL, v11);
    *(_QWORD *)(v28 + 24) = this;
LABEL_16:
    WdLogEvent5_WdError(v28);
    return 3221225485LL;
  }
  v36 = 0LL;
  if ( (int)MONITOR_MGR::_GetMonitorInstance(v15, v5, 1u, &v36) < 0 )
  {
    v29 = (_QWORD *)WdLogNewEntry5_WdError(v17, v16);
    v29[4] = this;
    v24 = -1073741275;
    v29[5] = -1073741275LL;
    v29[3] = v5;
    WdLogEvent5_WdError(v29);
  }
  else
  {
    v20 = v36;
    if ( !v36 )
    {
      v30 = WdLogNewEntry5_WdAssertion(v17, v16, v18, v19);
      WdLogEvent5_WdAssertion(v30);
      v35 = WdLogNewEntry5_WdAssertion(v32, v31, v33, v34);
      WdLogEvent5_WdAssertion(v35);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v20 + 240), 1u);
    DeviceObject = DXGMONITOR::_GetDeviceObject(v20, a3, a4, v21);
    v23 = (struct _ERESOURCE *)((char *)v20 + 240);
    v24 = DeviceObject;
    ExReleaseResourceLite(v23);
    KeLeaveCriticalRegion();
  }
  return v24;
}
