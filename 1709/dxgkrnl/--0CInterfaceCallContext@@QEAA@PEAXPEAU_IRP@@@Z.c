/*
 * XREFs of ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@@Z @ 0x1C002E088
 * Callers:
 *     ?DpiSetPartitionVmbus@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAXK@Z @ 0x1C002E230 (-DpiSetPartitionVmbus@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAXK@Z.c)
 *     ?DpiDdiGetDeviceLocation@@YAXPEAXGPEAGPEAE2@Z @ 0x1C0032300 (-DpiDdiGetDeviceLocation@@YAXPEAXGPEAGPEAE2@Z.c)
 *     ?DpiDdiGetResourceForBar@@YAJPEAXGGPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@@Z @ 0x1C00323A0 (-DpiDdiGetResourceForBar@@YAJPEAXGGPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@@Z.c)
 *     ?DpiDdiGetVendorAndDevice@@YAXPEAXGPEAG1@Z @ 0x1C0032440 (-DpiDdiGetVendorAndDevice@@YAXPEAXGPEAG1@Z.c)
 *     ?DpiDdiQueryPhysicalFunctionLuid@@YAJPEAXPEAU_LUID@@@Z @ 0x1C00324D0 (-DpiDdiQueryPhysicalFunctionLuid@@YAJPEAXPEAU_LUID@@@Z.c)
 *     ?DpiDdiQueryProbedBars2@@YAJPEAXGPEAK@Z @ 0x1C0032550 (-DpiDdiQueryProbedBars2@@YAJPEAXGPEAK@Z.c)
 *     ?DpiDdiReadVirtualFunctionConfig@@YAJPEAX0GKK@Z @ 0x1C00325E0 (-DpiDdiReadVirtualFunctionConfig@@YAJPEAX0GKK@Z.c)
 *     ?DpiDdiReadVirtualFunctionConfigBlock@@YAJPEAXGK0K@Z @ 0x1C0032690 (-DpiDdiReadVirtualFunctionConfigBlock@@YAJPEAXGK0K@Z.c)
 *     ?DpiDdiSetVirtualFunctionPowerState@@YAJPEAXGW4_DEVICE_POWER_STATE@@E@Z @ 0x1C0032780 (-DpiDdiSetVirtualFunctionPowerState@@YAJPEAXGW4_DEVICE_POWER_STATE@@E@Z.c)
 *     ?DpiDdiWriteVirtualFunctionConfig@@YAJPEAXPEBXGKK@Z @ 0x1C0032820 (-DpiDdiWriteVirtualFunctionConfig@@YAJPEAXPEBXGKK@Z.c)
 *     ?DpiDdiWriteVirtualFunctionConfigBlock@@YAJPEAXGK0K@Z @ 0x1C00328D0 (-DpiDdiWriteVirtualFunctionConfigBlock@@YAJPEAXGK0K@Z.c)
 *     ?DpiQueryVirtualFunctionIndexByLuid@@YAJPEAXU_LUID@@PEAG@Z @ 0x1C00329A0 (-DpiQueryVirtualFunctionIndexByLuid@@YAJPEAXU_LUID@@PEAG@Z.c)
 *     ?DpiQueryVirtualFunctionLuid@@YAJPEAXGPEAU_LUID@@@Z @ 0x1C0032A20 (-DpiQueryVirtualFunctionLuid@@YAJPEAXGPEAU_LUID@@@Z.c)
 *     DpiFdoDispatchIoctl @ 0x1C01DC910 (DpiFdoDispatchIoctl.c)
 *     DpiSriovAttach @ 0x1C01DFE70 (DpiSriovAttach.c)
 *     DpiSriovDetach @ 0x1C01DFFC0 (DpiSriovDetach.c)
 *     DpiSriovEventComplete @ 0x1C01E01BC (DpiSriovEventComplete.c)
 *     DpiSriovMitigationUpdate @ 0x1C01E0318 (DpiSriovMitigationUpdate.c)
 *     DpiSriovNotification @ 0x1C01E04C0 (DpiSriovNotification.c)
 *     DpiIovGetVirtualizationFlags @ 0x1C01E4A50 (DpiIovGetVirtualizationFlags.c)
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x1C000F314 (DpiCheckForOutstandingD3Requests.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C00B87F0 (DpiAcquireCoreSyncAccessSafe.c)
 */

CInterfaceCallContext *__fastcall CInterfaceCallContext::CInterfaceCallContext(
        CInterfaceCallContext *this,
        _QWORD *a2,
        struct _IRP *a3)
{
  char v3; // di
  struct _IO_REMOVE_LOCK *v4; // rdx
  NTSTATUS v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx

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
    v10 = *((_QWORD *)this + 1);
    if ( *(_BYTE *)(v10 + 483) )
      DpiCheckForOutstandingD3Requests(v10);
    ExAcquireResourceSharedLite(*(PERESOURCE *)(*((_QWORD *)this + 1) + 168LL), 1u);
    v11 = DpiAcquireCoreSyncAccessSafe(*(_QWORD *)this, 0LL);
    *((_DWORD *)this + 4) = v11;
    if ( v11 >= 0 )
    {
      v12 = *((_QWORD *)this + 1) + 5152LL;
      *((_BYTE *)this + 21) = 1;
      ExAcquirePushLockExclusiveEx(v12, 0LL);
      if ( !a3 || !a3->RequestorMode )
        v3 = 1;
      *(_BYTE *)(*((_QWORD *)this + 1) + 5192LL) = v3;
    }
  }
  else
  {
    v9 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v9 + 24) = *((int *)this + 4);
    WdLogEvent5_WdError(v9);
  }
  return this;
}
