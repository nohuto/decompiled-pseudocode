/*
 * XREFs of ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@@Z @ 0x1C003D5CC
 * Callers:
 *     ?DpiSetPartitionVmbus@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAXK@Z @ 0x1C003D748 (-DpiSetPartitionVmbus@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAXK@Z.c)
 *     ?DpiDdiGetDeviceLocation@@YAXPEAXGPEAGPEAE2@Z @ 0x1C0041860 (-DpiDdiGetDeviceLocation@@YAXPEAXGPEAGPEAE2@Z.c)
 *     ?DpiDdiGetResourceForBar@@YAJPEAXGGPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@@Z @ 0x1C00418E0 (-DpiDdiGetResourceForBar@@YAJPEAXGGPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@@Z.c)
 *     ?DpiDdiGetVendorAndDevice@@YAXPEAXGPEAG1@Z @ 0x1C0041960 (-DpiDdiGetVendorAndDevice@@YAXPEAXGPEAG1@Z.c)
 *     ?DpiDdiQueryPhysicalFunctionLuid@@YAJPEAXPEAU_LUID@@@Z @ 0x1C00419D0 (-DpiDdiQueryPhysicalFunctionLuid@@YAJPEAXPEAU_LUID@@@Z.c)
 *     ?DpiDdiQueryProbedBars2@@YAJPEAXGPEAK@Z @ 0x1C0041A40 (-DpiDdiQueryProbedBars2@@YAJPEAXGPEAK@Z.c)
 *     ?DpiDdiReadVirtualFunctionConfig@@YAJPEAX0GKK@Z @ 0x1C0041AB0 (-DpiDdiReadVirtualFunctionConfig@@YAJPEAX0GKK@Z.c)
 *     ?DpiDdiReadVirtualFunctionConfigBlock@@YAJPEAXGK0K@Z @ 0x1C0041B60 (-DpiDdiReadVirtualFunctionConfigBlock@@YAJPEAXGK0K@Z.c)
 *     ?DpiDdiSetVirtualFunctionPowerState@@YAJPEAXGW4_DEVICE_POWER_STATE@@E@Z @ 0x1C0041C30 (-DpiDdiSetVirtualFunctionPowerState@@YAJPEAXGW4_DEVICE_POWER_STATE@@E@Z.c)
 *     ?DpiDdiWriteVirtualFunctionConfig@@YAJPEAXPEBXGKK@Z @ 0x1C0041CB0 (-DpiDdiWriteVirtualFunctionConfig@@YAJPEAXPEBXGKK@Z.c)
 *     ?DpiDdiWriteVirtualFunctionConfigBlock@@YAJPEAXGK0K@Z @ 0x1C0041D40 (-DpiDdiWriteVirtualFunctionConfigBlock@@YAJPEAXGK0K@Z.c)
 *     ?DpiQueryVirtualFunctionIndexByLuid@@YAJPEAXU_LUID@@PEAG@Z @ 0x1C0041DD0 (-DpiQueryVirtualFunctionIndexByLuid@@YAJPEAXU_LUID@@PEAG@Z.c)
 *     ?DpiQueryVirtualFunctionLuid@@YAJPEAXGPEAU_LUID@@@Z @ 0x1C0041E70 (-DpiQueryVirtualFunctionLuid@@YAJPEAXGPEAU_LUID@@@Z.c)
 *     DpiFdoDispatchIoctl @ 0x1C01C31F0 (DpiFdoDispatchIoctl.c)
 *     DpiSriovAttach @ 0x1C01C5F9C (DpiSriovAttach.c)
 *     DpiSriovDetach @ 0x1C01C605C (DpiSriovDetach.c)
 *     DpiSriovEventComplete @ 0x1C01C61D4 (DpiSriovEventComplete.c)
 *     DpiSriovMitigationUpdate @ 0x1C01C62A4 (DpiSriovMitigationUpdate.c)
 *     DpiSriovNotification @ 0x1C01C63A4 (DpiSriovNotification.c)
 *     DpiIovGetVirtualizationFlags @ 0x1C01CA6A0 (DpiIovGetVirtualizationFlags.c)
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x1C00012A0 (DpiCheckForOutstandingD3Requests.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C00AA5B4 (DpiAcquireCoreSyncAccessSafe.c)
 */

CInterfaceCallContext *__fastcall CInterfaceCallContext::CInterfaceCallContext(
        CInterfaceCallContext *this,
        _QWORD *a2,
        struct _IRP *a3)
{
  char v3; // di
  struct _IO_REMOVE_LOCK *v4; // rdx
  NTSTATUS v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx

  *(_QWORD *)this = a2;
  v3 = 0;
  v4 = (struct _IO_REMOVE_LOCK *)a2[8];
  *((_QWORD *)this + 1) = v4;
  *((_WORD *)this + 10) = 0;
  v7 = IoAcquireRemoveLockEx(v4 + 2, v4, File, 1u, 0x20u);
  *((_DWORD *)this + 4) = v7;
  if ( v7 >= 0 )
  {
    *((_BYTE *)this + 20) = 1;
    KeEnterCriticalRegion();
    v11 = *((_QWORD *)this + 1);
    if ( *(_BYTE *)(v11 + 483) )
      DpiCheckForOutstandingD3Requests(v11);
    ExAcquireResourceSharedLite(*(PERESOURCE *)(*((_QWORD *)this + 1) + 168LL), 1u);
    v12 = DpiAcquireCoreSyncAccessSafe(*(_QWORD *)this, 0LL);
    *((_DWORD *)this + 4) = v12;
    if ( v12 >= 0 )
    {
      v13 = *((_QWORD *)this + 1) + 5016LL;
      *((_BYTE *)this + 21) = 1;
      ExAcquirePushLockExclusiveEx(v13, 0LL);
      if ( !a3 || !a3->RequestorMode )
        v3 = 1;
      *(_BYTE *)(*((_QWORD *)this + 1) + 5057LL) = v3;
    }
  }
  else
  {
    v10 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v10 + 24) = *((int *)this + 4);
    WdLogEvent5_WdError(v10);
  }
  return this;
}
