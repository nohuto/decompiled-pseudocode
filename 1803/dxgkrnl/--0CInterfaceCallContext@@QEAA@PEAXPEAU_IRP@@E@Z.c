/*
 * XREFs of ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@E@Z @ 0x1C003A9B0
 * Callers:
 *     ?DpiSetPartitionVmbus@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAXK@Z @ 0x1C003ACC4 (-DpiSetPartitionVmbus@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAXK@Z.c)
 *     ?DpiDdiGetDeviceLocation@@YAXPEAXGPEAGPEAE2@Z @ 0x1C0040A50 (-DpiDdiGetDeviceLocation@@YAXPEAXGPEAGPEAE2@Z.c)
 *     ?DpiDdiGetResourceForBar@@YAJPEAXGGPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@@Z @ 0x1C0040AF0 (-DpiDdiGetResourceForBar@@YAJPEAXGGPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@@Z.c)
 *     ?DpiDdiGetVendorAndDevice@@YAXPEAXGPEAG1@Z @ 0x1C0040B90 (-DpiDdiGetVendorAndDevice@@YAXPEAXGPEAG1@Z.c)
 *     ?DpiDdiQueryPhysicalFunctionLuid@@YAJPEAXPEAU_LUID@@@Z @ 0x1C0040C20 (-DpiDdiQueryPhysicalFunctionLuid@@YAJPEAXPEAU_LUID@@@Z.c)
 *     ?DpiDdiQueryProbedBars2@@YAJPEAXGPEAK@Z @ 0x1C0040CA0 (-DpiDdiQueryProbedBars2@@YAJPEAXGPEAK@Z.c)
 *     ?DpiDdiReadVirtualFunctionConfig@@YAJPEAX0GKK@Z @ 0x1C0040D30 (-DpiDdiReadVirtualFunctionConfig@@YAJPEAX0GKK@Z.c)
 *     ?DpiDdiReadVirtualFunctionConfigBlock@@YAJPEAXGK0K@Z @ 0x1C0040DE0 (-DpiDdiReadVirtualFunctionConfigBlock@@YAJPEAXGK0K@Z.c)
 *     ?DpiDdiSetVirtualFunctionPowerState@@YAJPEAXGW4_DEVICE_POWER_STATE@@E@Z @ 0x1C0040ED0 (-DpiDdiSetVirtualFunctionPowerState@@YAJPEAXGW4_DEVICE_POWER_STATE@@E@Z.c)
 *     ?DpiDdiWriteVirtualFunctionConfig@@YAJPEAXPEBXGKK@Z @ 0x1C0040F70 (-DpiDdiWriteVirtualFunctionConfig@@YAJPEAXPEBXGKK@Z.c)
 *     ?DpiDdiWriteVirtualFunctionConfigBlock@@YAJPEAXGK0K@Z @ 0x1C0041020 (-DpiDdiWriteVirtualFunctionConfigBlock@@YAJPEAXGK0K@Z.c)
 *     ?DpiQueryVirtualFunctionIndexByLuid@@YAJPEAXU_LUID@@PEAG@Z @ 0x1C0041100 (-DpiQueryVirtualFunctionIndexByLuid@@YAJPEAXU_LUID@@PEAG@Z.c)
 *     ?DpiQueryVirtualFunctionLuid@@YAJPEAXGPEAU_LUID@@@Z @ 0x1C0041190 (-DpiQueryVirtualFunctionLuid@@YAJPEAXGPEAU_LUID@@@Z.c)
 *     DpiFdoDispatchIoctl @ 0x1C01F2FD0 (DpiFdoDispatchIoctl.c)
 *     DpiSriovAttach @ 0x1C01FBBAC (DpiSriovAttach.c)
 *     DpiSriovDetach @ 0x1C01FBD00 (DpiSriovDetach.c)
 *     DpiSriovMitigationUpdate @ 0x1C01FBF88 (DpiSriovMitigationUpdate.c)
 *     DpiSriovNotification @ 0x1C01FC134 (DpiSriovNotification.c)
 *     DpiIovGetVirtualizationFlags @ 0x1C0202D50 (DpiIovGetVirtualizationFlags.c)
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x1C000B870 (DpiCheckForOutstandingD3Requests.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C009F688 (DpiAcquireCoreSyncAccessSafe.c)
 */

CInterfaceCallContext *__fastcall CInterfaceCallContext::CInterfaceCallContext(
        CInterfaceCallContext *this,
        _QWORD *a2,
        struct _IRP *a3,
        char a4)
{
  char v4; // di
  struct _IO_REMOVE_LOCK *v5; // rdx
  NTSTATUS v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx

  *(_QWORD *)this = a2;
  v4 = 0;
  v5 = (struct _IO_REMOVE_LOCK *)a2[8];
  *((_QWORD *)this + 1) = v5;
  *((_WORD *)this + 10) = 0;
  v9 = IoAcquireRemoveLockEx(v5 + 2, v5, File, 1u, 0x20u);
  *((_DWORD *)this + 4) = v9;
  if ( v9 >= 0 )
  {
    *((_BYTE *)this + 20) = 1;
    KeEnterCriticalRegion();
    v12 = *((_QWORD *)this + 1);
    if ( *(_BYTE *)(v12 + 483) )
    {
      DpiCheckForOutstandingD3Requests(v12);
      v12 = *((_QWORD *)this + 1);
    }
    ExAcquireResourceSharedLite(*(PERESOURCE *)(v12 + 168), 1u);
    if ( a4 )
    {
      v13 = DpiAcquireCoreSyncAccessSafe(*(_QWORD *)this, 0LL);
      *((_DWORD *)this + 4) = v13;
      if ( v13 >= 0 )
      {
        v14 = *((_QWORD *)this + 1) + 5216LL;
        *((_BYTE *)this + 21) = 1;
        ExAcquirePushLockExclusiveEx(v14, 0LL);
        if ( !a3 || !a3->RequestorMode )
          v4 = 1;
        *(_BYTE *)(*((_QWORD *)this + 1) + 5256LL) = v4;
      }
    }
  }
  else
  {
    v11 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v11 + 24) = *((int *)this + 4);
    WdLogEvent5_WdError(v11);
  }
  return this;
}
