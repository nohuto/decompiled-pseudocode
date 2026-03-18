/*
 * XREFs of MiVadDeleted @ 0x1400CE370
 * Callers:
 *     MiPrepareVadDelete @ 0x140430C44 (MiPrepareVadDelete.c)
 *     MmCleanProcessAddressSpace @ 0x14047ABC0 (MmCleanProcessAddressSpace.c)
 *     MiCleanVad @ 0x14047AE9C (MiCleanVad.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x14047AEF0 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MiPopulateCfgBitMap @ 0x14049B024 (MiPopulateCfgBitMap.c)
 *     MiAllocateUserStack @ 0x1404A434C (MiAllocateUserStack.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x1405160A8 (MiAllocateFromSubAllocatedRegion.c)
 *     MmQueryVirtualMemory @ 0x14051B090 (MmQueryVirtualMemory.c)
 *     MiAllocateVirtualMemory @ 0x14051BE20 (MiAllocateVirtualMemory.c)
 *     MiReturnPageTablePageCommitment @ 0x14051DC80 (MiReturnPageTablePageCommitment.c)
 *     MiLockVadRangeHelper @ 0x14054B948 (MiLockVadRangeHelper.c)
 *     NtAreMappedFilesTheSame @ 0x1405833D4 (NtAreMappedFilesTheSame.c)
 *     MmIsFileMapped @ 0x1406B81CC (MmIsFileMapped.c)
 *     MiScrubProcesses @ 0x1406C0060 (MiScrubProcesses.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiVadDeleted(__int64 a1)
{
  return (*(_DWORD *)(a1 + 48) >> 19) & 1;
}
