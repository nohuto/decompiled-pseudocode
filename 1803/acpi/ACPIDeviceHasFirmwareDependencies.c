/*
 * XREFs of ACPIDeviceHasFirmwareDependencies @ 0x1C001202C
 * Callers:
 *     ACPIBuildProcessRunMethodPhaseCheckSta @ 0x1C000F660 (ACPIBuildProcessRunMethodPhaseCheckSta.c)
 *     ACPIThermalLoopEx @ 0x1C003CE8C (ACPIThermalLoopEx.c)
 *     ACPIDetectCouldExtensionBeInRelation @ 0x1C00791CC (ACPIDetectCouldExtensionBeInRelation.c)
 * Callees:
 *     <none>
 */

bool __fastcall ACPIDeviceHasFirmwareDependencies(__int64 a1)
{
  return (*(_BYTE *)(a1 + 952) & 0x40) != 0 || *(_QWORD *)(a1 + 600) != 0LL;
}
