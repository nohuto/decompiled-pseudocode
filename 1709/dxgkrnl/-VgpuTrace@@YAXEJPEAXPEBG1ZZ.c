/*
 * XREFs of ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x1C00248BC
 * Callers:
 *     DxgkDdiCreateVirtualGpu @ 0x1C0189CE0 (DxgkDdiCreateVirtualGpu.c)
 *     DxgkDdiDestroyVirtualGpu @ 0x1C0189DB8 (DxgkDdiDestroyVirtualGpu.c)
 *     DxgkDdiGetDeviceLocation @ 0x1C0189E24 (DxgkDdiGetDeviceLocation.c)
 *     DxgkDdiGetGpuPartitionInfo @ 0x1C0189EF0 (DxgkDdiGetGpuPartitionInfo.c)
 *     DxgkDdiGetResourceForBar @ 0x1C0189F5C (DxgkDdiGetResourceForBar.c)
 *     DxgkDdiGetVendorAndDevice @ 0x1C0189FF8 (DxgkDdiGetVendorAndDevice.c)
 *     DxgkDdiGetVirtualGpuInfo @ 0x1C018A094 (DxgkDdiGetVirtualGpuInfo.c)
 *     DxgkDdiGetVirtualGpuProfile @ 0x1C018A10C (DxgkDdiGetVirtualGpuProfile.c)
 *     DxgkDdiQueryMitigatedRangeCount @ 0x1C018A178 (DxgkDdiQueryMitigatedRangeCount.c)
 *     DxgkDdiQueryMitigatedRanges @ 0x1C018A1E0 (DxgkDdiQueryMitigatedRanges.c)
 *     DxgkDdiQueryPhysicalFunctionLuid @ 0x1C018A254 (DxgkDdiQueryPhysicalFunctionLuid.c)
 *     DxgkDdiQueryProbedBars @ 0x1C018A2C8 (DxgkDdiQueryProbedBars.c)
 *     DxgkDdiQueryVirtualFunctionIndexByLuid @ 0x1C018A378 (DxgkDdiQueryVirtualFunctionIndexByLuid.c)
 *     DxgkDdiQueryVirtualFunctionLuid @ 0x1C018A428 (DxgkDdiQueryVirtualFunctionLuid.c)
 *     DxgkDdiReadVirtualFunctionConfig @ 0x1C018A4A8 (DxgkDdiReadVirtualFunctionConfig.c)
 *     DxgkDdiReadVirtualFunctionConfigBlock @ 0x1C018A560 (DxgkDdiReadVirtualFunctionConfigBlock.c)
 *     DxgkDdiResetVirtualFunction @ 0x1C018A61C (DxgkDdiResetVirtualFunction.c)
 *     DxgkDdiSetGpuPartitionCount @ 0x1C018A6BC (DxgkDdiSetGpuPartitionCount.c)
 *     DxgkDdiSetVirtualFunctionPowerState @ 0x1C018A728 (DxgkDdiSetVirtualFunctionPowerState.c)
 *     DxgkDdiSetVirtualGpuVmBus @ 0x1C018A7D8 (DxgkDdiSetVirtualGpuVmBus.c)
 *     DxgkDdiWriteVirtualFunctionConfig @ 0x1C018A87C (DxgkDdiWriteVirtualFunctionConfig.c)
 *     DxgkDdiWriteVirtualFunctionConfigBlock @ 0x1C018A934 (DxgkDdiWriteVirtualFunctionConfigBlock.c)
 *     ?VirtualGpuDriverEscape@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGK_VIRTUALGPUDRIVERESCAPE@@@Z @ 0x1C018E640 (-VirtualGpuDriverEscape@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGK_VIRTUALGPUDRIVERESCAPE@@@Z.c)
 *     ?VmBusChannelClosed@DXG_HOST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x1C0191390 (-VmBusChannelClosed@DXG_HOST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z.c)
 *     ?VmBusChannelClosed@DXG_HOST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x1C01913D0 (-VmBusChannelClosed@DXG_HOST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z.c)
 *     ?VmBusChannelOpened@DXG_HOST_GLOBAL_VMBUS@@SAJPEAUVMBCHANNEL__@@@Z @ 0x1C0191410 (-VmBusChannelOpened@DXG_HOST_GLOBAL_VMBUS@@SAJPEAUVMBCHANNEL__@@@Z.c)
 *     ?VmBusChannelOpened@DXG_HOST_VIRTUALGPU_VMBUS@@SAJPEAUVMBCHANNEL__@@@Z @ 0x1C0191450 (-VmBusChannelOpened@DXG_HOST_VIRTUALGPU_VMBUS@@SAJPEAUVMBCHANNEL__@@@Z.c)
 *     ?VmBusChannelPostStarted@DXG_HOST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x1C0191490 (-VmBusChannelPostStarted@DXG_HOST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z.c)
 *     ?VmBusChannelPostStarted@DXG_HOST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x1C01914D0 (-VmBusChannelPostStarted@DXG_HOST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z.c)
 *     ?VmBusChannelStarted@DXG_HOST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x1C0191510 (-VmBusChannelStarted@DXG_HOST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z.c)
 *     ?VmBusChannelStarted@DXG_HOST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x1C0191550 (-VmBusChannelStarted@DXG_HOST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z.c)
 *     ?VmBusChannelSuspend@DXG_HOST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x1C0191590 (-VmBusChannelSuspend@DXG_HOST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z.c)
 *     ?VmBusChannelSuspend@DXG_HOST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x1C01915D0 (-VmBusChannelSuspend@DXG_HOST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z.c)
 *     DpiGetVirtualizationFlags @ 0x1C01DFC40 (DpiGetVirtualizationFlags.c)
 *     DpiSriovAttach @ 0x1C01DFE70 (DpiSriovAttach.c)
 *     DpiSriovDetach @ 0x1C01DFFC0 (DpiSriovDetach.c)
 *     DpiSriovEventComplete @ 0x1C01E01BC (DpiSriovEventComplete.c)
 *     DpiSriovMitigationUpdate @ 0x1C01E0318 (DpiSriovMitigationUpdate.c)
 *     DpiSriovNotification @ 0x1C01E04C0 (DpiSriovNotification.c)
 *     DpiFdoHandleQueryFlexibleIovInterface @ 0x1C01E3EA0 (DpiFdoHandleQueryFlexibleIovInterface.c)
 *     DpiFdoHandleQueryPartitioningDeviceInterface @ 0x1C01E4190 (DpiFdoHandleQueryPartitioningDeviceInterface.c)
 *     DpiFdoHandleQuerySrIovInterface @ 0x1C01E4300 (DpiFdoHandleQuerySrIovInterface.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     McTemplateK0pzzq @ 0x1C002498C (McTemplateK0pzzq.c)
 */

void VgpuTrace(char a1, char a2, void *a3, const unsigned __int16 *a4, wchar_t *Format, ...)
{
  int v5; // ebx
  int v9; // ecx
  int v10; // r8d
  wchar_t Dst[256]; // [rsp+40h] [rbp-238h] BYREF
  va_list ArgList; // [rsp+2A8h] [rbp+30h] BYREF

  va_start(ArgList, Format);
  v5 = (int)a3;
  memset(Dst, 0, sizeof(Dst));
  v10 = (int)Format;
  if ( Format )
    vswprintf_s(Dst, 0x100uLL, Format, ArgList);
  if ( a1 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
      McTemplateK0pzzq(v9, (unsigned int)&EventGpuPartitioningStart, v10, v5, (__int64)a4, (__int64)Dst, 0);
  }
  else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
  {
    McTemplateK0pzzq(v9, (unsigned int)&EventGpuPartitioningEnd, v10, v5, (__int64)a4, (__int64)Dst, a2);
  }
}
