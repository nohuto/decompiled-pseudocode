/*
 * XREFs of ?DpiGetVirtualGpuType@@YA?AW4DXG_VIRTUAL_GPU_TYPE@@PEAXPEAPEAU_DEVICE_OBJECT@@@Z @ 0x1C00410CC
 * Callers:
 *     ?DpiDdiGetDeviceLocation@@YAXPEAXGPEAGPEAE2@Z @ 0x1C0040A50 (-DpiDdiGetDeviceLocation@@YAXPEAXGPEAGPEAE2@Z.c)
 *     ?DpiDdiGetResourceForBar@@YAJPEAXGGPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@@Z @ 0x1C0040AF0 (-DpiDdiGetResourceForBar@@YAJPEAXGGPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@@Z.c)
 *     ?DpiDdiGetVendorAndDevice@@YAXPEAXGPEAG1@Z @ 0x1C0040B90 (-DpiDdiGetVendorAndDevice@@YAXPEAXGPEAG1@Z.c)
 *     ?DpiDdiQueryPhysicalFunctionLuid@@YAJPEAXPEAU_LUID@@@Z @ 0x1C0040C20 (-DpiDdiQueryPhysicalFunctionLuid@@YAJPEAXPEAU_LUID@@@Z.c)
 *     ?DpiDdiQueryProbedBars2@@YAJPEAXGPEAK@Z @ 0x1C0040CA0 (-DpiDdiQueryProbedBars2@@YAJPEAXGPEAK@Z.c)
 *     ?DpiDdiReadVirtualFunctionConfig@@YAJPEAX0GKK@Z @ 0x1C0040D30 (-DpiDdiReadVirtualFunctionConfig@@YAJPEAX0GKK@Z.c)
 *     ?DpiDdiReadVirtualFunctionConfigBlock@@YAJPEAXGK0K@Z @ 0x1C0040DE0 (-DpiDdiReadVirtualFunctionConfigBlock@@YAJPEAXGK0K@Z.c)
 *     ?DpiDdiResetVirtualFunction@@YAJPEAXG@Z @ 0x1C0040E90 (-DpiDdiResetVirtualFunction@@YAJPEAXG@Z.c)
 *     ?DpiDdiSetVirtualFunctionPowerState@@YAJPEAXGW4_DEVICE_POWER_STATE@@E@Z @ 0x1C0040ED0 (-DpiDdiSetVirtualFunctionPowerState@@YAJPEAXGW4_DEVICE_POWER_STATE@@E@Z.c)
 *     ?DpiDdiWriteVirtualFunctionConfig@@YAJPEAXPEBXGKK@Z @ 0x1C0040F70 (-DpiDdiWriteVirtualFunctionConfig@@YAJPEAXPEBXGKK@Z.c)
 *     ?DpiDdiWriteVirtualFunctionConfigBlock@@YAJPEAXGK0K@Z @ 0x1C0041020 (-DpiDdiWriteVirtualFunctionConfigBlock@@YAJPEAXGK0K@Z.c)
 *     ?DpiQueryVirtualFunctionIndexByLuid@@YAJPEAXU_LUID@@PEAG@Z @ 0x1C0041100 (-DpiQueryVirtualFunctionIndexByLuid@@YAJPEAXU_LUID@@PEAG@Z.c)
 *     ?DpiQueryVirtualFunctionLuid@@YAJPEAXGPEAU_LUID@@@Z @ 0x1C0041190 (-DpiQueryVirtualFunctionLuid@@YAJPEAXGPEAU_LUID@@@Z.c)
 *     DpiDoInterfaceDereferenceGpuP @ 0x1C0202030 (DpiDoInterfaceDereferenceGpuP.c)
 *     DpiDoInterfaceReferenceGpuP @ 0x1C0202080 (DpiDoInterfaceReferenceGpuP.c)
 *     DpiFdoHandleQueryFlexibleIovInterface @ 0x1C02020B0 (DpiFdoHandleQueryFlexibleIovInterface.c)
 *     DpiFdoHandleQueryPartitioningDeviceInterface @ 0x1C0202490 (DpiFdoHandleQueryPartitioningDeviceInterface.c)
 *     DpiFdoHandleQuerySrIovInterface @ 0x1C0202600 (DpiFdoHandleQuerySrIovInterface.c)
 *     DpiIovGetVirtualizationFlags @ 0x1C0202D50 (DpiIovGetVirtualizationFlags.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiGetVirtualGpuType(_DWORD *a1, _QWORD *a2)
{
  __int64 result; // rax

  result = 1LL;
  if ( *a1 == 1 )
  {
    *a2 = *((_QWORD *)a1 - 648);
  }
  else
  {
    *a2 = *((_QWORD *)a1 - 644);
    return 0LL;
  }
  return result;
}
