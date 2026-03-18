/*
 * XREFs of ??1CInterfaceCallContext@@QEAA@XZ @ 0x1C003D6B8
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
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C00AA538 (DpiReleaseCoreSyncAccessSafe.c)
 */

void __fastcall CInterfaceCallContext::~CInterfaceCallContext(CInterfaceCallContext *this)
{
  __int64 v2; // rax

  if ( *((_BYTE *)this + 20) )
  {
    if ( *((_BYTE *)this + 21) )
    {
      *(_BYTE *)(*((_QWORD *)this + 1) + 5057LL) = 0;
      ExReleasePushLockExclusiveEx(*((_QWORD *)this + 1) + 5016LL, 0LL);
      DpiReleaseCoreSyncAccessSafe(*(_QWORD *)this, 0LL);
    }
    v2 = *((_QWORD *)this + 1);
    if ( *(_BYTE *)(v2 + 483) )
      _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v2 + 24) + 64LL) + 3888LL));
    ExReleaseResourceLite(*(PERESOURCE *)(*((_QWORD *)this + 1) + 168LL));
    KeLeaveCriticalRegion();
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(*((_QWORD *)this + 1) + 64LL), *((PVOID *)this + 1), 0x20u);
  }
}
