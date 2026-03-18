/*
 * XREFs of MonitorGetDeviceObject @ 0x1C00DB05C
 * Callers:
 *     ?DxgkGetMonitorDeviceObject@@YAJPEBU_LUID@@IPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z @ 0x1C00DAF10 (-DxgkGetMonitorDeviceObject@@YAJPEBU_LUID@@IPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z.c)
 * Callees:
 *     ?_GetDeviceObject@DXGMONITOR@@QEBAJPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z @ 0x1C0003350 (-_GetDeviceObject@DXGMONITOR@@QEBAJPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00BA738 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MonitorGetDeviceObject(
        DXGADAPTER *this,
        __int64 a2,
        struct _FILE_OBJECT **a3,
        struct _DEVICE_OBJECT **a4)
{
  __int64 v5; // rdi
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rax
  struct _FAST_MUTEX *v12; // rcx
  __int64 v13; // rcx
  DXGMONITOR *v14; // rbx
  unsigned int DeviceObject; // eax
  struct _ERESOURCE *v16; // rcx
  unsigned int v17; // ebx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  _QWORD *v22; // rax
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  DXGMONITOR *v26; // [rsp+40h] [rbp+8h] BYREF

  v5 = (unsigned int)a2;
  v8 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  *(_QWORD *)(v8 + 24) = v5;
  *(_QWORD *)(v8 + 32) = this;
  if ( !this || (_DWORD)v5 == -1 )
  {
    v21 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v21 + 24) = -1073741811LL;
    goto LABEL_16;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    v19 = WdLogNewEntry5_WdAssertion(v10);
    WdLogEvent5_WdAssertion(v19);
  }
  v11 = *((_QWORD *)this + 307);
  if ( !v11 )
  {
    v20 = WdLogNewEntry5_WdAssertion(v10);
    WdLogEvent5_WdAssertion(v20);
    v11 = *((_QWORD *)this + 307);
  }
  v12 = *(struct _FAST_MUTEX **)(v11 + 96);
  if ( !v12 )
  {
    v21 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v21 + 24) = this;
LABEL_16:
    WdLogEvent5_WdError(v21);
    return 3221225485LL;
  }
  v26 = 0LL;
  if ( (int)MONITOR_MGR::_GetMonitorInstance(v12, v5, 1, &v26) < 0 )
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdError(v13);
    v22[4] = this;
    v17 = -1073741275;
    v22[5] = -1073741275LL;
    v22[3] = v5;
    WdLogEvent5_WdError(v22);
  }
  else
  {
    v14 = v26;
    if ( !v26 )
    {
      v23 = WdLogNewEntry5_WdAssertion(v13);
      WdLogEvent5_WdAssertion(v23);
      v25 = WdLogNewEntry5_WdAssertion(v24);
      WdLogEvent5_WdAssertion(v25);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v14 + 296), 1u);
    DeviceObject = DXGMONITOR::_GetDeviceObject(v14, a3, a4);
    v16 = (struct _ERESOURCE *)((char *)v14 + 296);
    v17 = DeviceObject;
    ExReleaseResourceLite(v16);
    KeLeaveCriticalRegion();
  }
  return v17;
}
