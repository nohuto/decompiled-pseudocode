/*
 * XREFs of MiVadDeleted @ 0x14003D4D0
 * Callers:
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x140452B80 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MiPrepareVadDelete @ 0x14049465C (MiPrepareVadDelete.c)
 *     MiAllocateVirtualMemory @ 0x1404965C0 (MiAllocateVirtualMemory.c)
 *     MmQueryVirtualMemory @ 0x140497DA0 (MmQueryVirtualMemory.c)
 *     MiReturnPageTablePageCommitment @ 0x140499780 (MiReturnPageTablePageCommitment.c)
 *     MmCleanProcessAddressSpace @ 0x1404D2F70 (MmCleanProcessAddressSpace.c)
 *     MiCleanVad @ 0x1404D3230 (MiCleanVad.c)
 *     MiPopulateCfgBitMap @ 0x1404D355C (MiPopulateCfgBitMap.c)
 *     MiAllocateUserStack @ 0x1404D9354 (MiAllocateUserStack.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x14050946C (MiAllocateFromSubAllocatedRegion.c)
 *     MiLockVadRangeHelper @ 0x140540870 (MiLockVadRangeHelper.c)
 *     NtAreMappedFilesTheSame @ 0x1405DF264 (NtAreMappedFilesTheSame.c)
 *     MmIsFileMapped @ 0x1406E4E4C (MmIsFileMapped.c)
 *     MiScrubProcesses @ 0x1406EEA90 (MiScrubProcesses.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiVadDeleted(__int64 a1)
{
  return (*(_DWORD *)(a1 + 48) >> 19) & 1;
}
