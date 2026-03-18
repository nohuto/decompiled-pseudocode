/*
 * XREFs of ACPIDeviceHasFirmwareDependencies @ 0x1C0022174
 * Callers:
 *     ACPIBuildProcessRunMethodPhaseCheckSta @ 0x1C000D3D0 (ACPIBuildProcessRunMethodPhaseCheckSta.c)
 *     ACPIThermalLoopEx @ 0x1C0021610 (ACPIThermalLoopEx.c)
 *     ACPIDetectCouldExtensionBeInRelation @ 0x1C008DACC (ACPIDetectCouldExtensionBeInRelation.c)
 * Callees:
 *     <none>
 */

bool __fastcall ACPIDeviceHasFirmwareDependencies(__int64 a1)
{
  return (*(_BYTE *)(a1 + 952) & 0x40) != 0 || *(_QWORD *)(a1 + 600) != 0LL;
}
