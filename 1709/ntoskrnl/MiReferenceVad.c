/*
 * XREFs of MiReferenceVad @ 0x14003D48C
 * Callers:
 *     MiCfgInitializeProcess @ 0x14045F104 (MiCfgInitializeProcess.c)
 *     MiAllocateVirtualMemory @ 0x1404965C0 (MiAllocateVirtualMemory.c)
 *     MmQueryVirtualMemory @ 0x140497DA0 (MmQueryVirtualMemory.c)
 *     MiMapViewOfDataSection @ 0x1404CEDF0 (MiMapViewOfDataSection.c)
 *     MiMapViewOfImageSection @ 0x1404D1270 (MiMapViewOfImageSection.c)
 *     MmCleanProcessAddressSpace @ 0x1404D2F70 (MmCleanProcessAddressSpace.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x14050946C (MiAllocateFromSubAllocatedRegion.c)
 *     MiLockVadRangeHelper @ 0x140540870 (MiLockVadRangeHelper.c)
 *     MiMapViewOfPhysicalSection @ 0x1405D96D4 (MiMapViewOfPhysicalSection.c)
 *     MiAllocateEnclaveVad @ 0x1406E77E0 (MiAllocateEnclaveVad.c)
 *     MiDeleteInsertedCloneVads @ 0x1406EC594 (MiDeleteInsertedCloneVads.c)
 *     MiFreeRfgControlStack @ 0x1406EDAF0 (MiFreeRfgControlStack.c)
 *     MiScrubProcesses @ 0x1406EEA90 (MiScrubProcesses.c)
 * Callees:
 *     <none>
 */

void __fastcall MiReferenceVad(__int64 a1)
{
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 36));
}
