/*
 * XREFs of MiReferenceVad @ 0x1400CE328
 * Callers:
 *     MmCleanProcessAddressSpace @ 0x14047ABC0 (MmCleanProcessAddressSpace.c)
 *     MiCfgInitializeProcess @ 0x14049A54C (MiCfgInitializeProcess.c)
 *     MiMapViewOfImageSection @ 0x140511460 (MiMapViewOfImageSection.c)
 *     MiMapViewOfDataSection @ 0x140512AC0 (MiMapViewOfDataSection.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x1405160A8 (MiAllocateFromSubAllocatedRegion.c)
 *     MmQueryVirtualMemory @ 0x14051B090 (MmQueryVirtualMemory.c)
 *     MiAllocateVirtualMemory @ 0x14051BE20 (MiAllocateVirtualMemory.c)
 *     MiLockVadRangeHelper @ 0x14054B948 (MiLockVadRangeHelper.c)
 *     MiMapViewOfPhysicalSection @ 0x1405C6964 (MiMapViewOfPhysicalSection.c)
 *     MiAllocateEnclaveVad @ 0x1406BA9FC (MiAllocateEnclaveVad.c)
 *     MiDeleteAllPartialCloneVads @ 0x1406BF284 (MiDeleteAllPartialCloneVads.c)
 *     MiFreeRfgControlStack @ 0x1406BFE90 (MiFreeRfgControlStack.c)
 *     MiScrubProcesses @ 0x1406C0060 (MiScrubProcesses.c)
 * Callees:
 *     <none>
 */

void __fastcall MiReferenceVad(__int64 a1)
{
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 36));
}
