/*
 * XREFs of OSConvertDeviceHandleToNSHANDLE @ 0x1C0002A1C
 * Callers:
 *     ACPIQueryDeviceBiosName @ 0x1C0087CB0 (ACPIQueryDeviceBiosName.c)
 *     ACPIEcRemoveOpRegionHandler @ 0x1C00A123C (ACPIEcRemoveOpRegionHandler.c)
 *     AcpiGetFullyQualifiedBiosName @ 0x1C00A19A0 (AcpiGetFullyQualifiedBiosName.c)
 *     DeRegisterOpRegionHandler @ 0x1C00A39C0 (DeRegisterOpRegionHandler.c)
 *     RegisterOpRegionHandler @ 0x1C00A3A00 (RegisterOpRegionHandler.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0004AB0 (ACPIInternalGetDeviceExtension.c)
 */

__int64 __fastcall OSConvertDeviceHandleToNSHANDLE(ULONG_PTR a1)
{
  return *(_QWORD *)(ACPIInternalGetDeviceExtension(a1) + 712);
}
