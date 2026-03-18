/*
 * XREFs of OSConvertDeviceHandleToNSHANDLE @ 0x1C00091E8
 * Callers:
 *     ACPIEcRemoveOpRegionHandler @ 0x1C007A26C (ACPIEcRemoveOpRegionHandler.c)
 *     AcpiGetFullyQualifiedBiosName @ 0x1C007AA10 (AcpiGetFullyQualifiedBiosName.c)
 *     DeRegisterOpRegionHandler @ 0x1C0080CB0 (DeRegisterOpRegionHandler.c)
 *     RegisterOpRegionHandler @ 0x1C0080CF0 (RegisterOpRegionHandler.c)
 *     ACPIQueryDeviceBiosName @ 0x1C008BEA0 (ACPIQueryDeviceBiosName.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C000169C (ACPIInternalGetDeviceExtension.c)
 */

__int64 __fastcall OSConvertDeviceHandleToNSHANDLE(ULONG_PTR a1)
{
  return *(_QWORD *)(ACPIInternalGetDeviceExtension(a1) + 712);
}
