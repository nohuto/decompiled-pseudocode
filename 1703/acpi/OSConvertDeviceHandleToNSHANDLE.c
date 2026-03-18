/*
 * XREFs of OSConvertDeviceHandleToNSHANDLE @ 0x1C0009384
 * Callers:
 *     ACPIQueryDeviceBiosName @ 0x1C008E2C4 (ACPIQueryDeviceBiosName.c)
 *     ACPIEcRemoveOpRegionHandler @ 0x1C009E264 (ACPIEcRemoveOpRegionHandler.c)
 *     AcpiGetFullyQualifiedBiosName @ 0x1C009E9B0 (AcpiGetFullyQualifiedBiosName.c)
 *     DeRegisterOpRegionHandler @ 0x1C00A0D70 (DeRegisterOpRegionHandler.c)
 *     RegisterOpRegionHandler @ 0x1C00A0DB0 (RegisterOpRegionHandler.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001600 (ACPIInternalGetDeviceExtension.c)
 */

__int64 __fastcall OSConvertDeviceHandleToNSHANDLE(ULONG_PTR a1)
{
  return *(_QWORD *)(ACPIInternalGetDeviceExtension(a1) + 712);
}
