/*
 * XREFs of MiVadDeleted @ 0x1401175E0
 * Callers:
 *     MiReturnPageTablePageCommitment @ 0x1404AF230 (MiReturnPageTablePageCommitment.c)
 *     MiPopulateCfgBitMap @ 0x1404B3B10 (MiPopulateCfgBitMap.c)
 *     MiMarkSharedImageCfgBits @ 0x1404B4820 (MiMarkSharedImageCfgBits.c)
 *     MiLockVadRangeHelper @ 0x1404C0260 (MiLockVadRangeHelper.c)
 *     MiAllocateUserStack @ 0x1404E88F4 (MiAllocateUserStack.c)
 *     MiPrepareVadDelete @ 0x140515520 (MiPrepareVadDelete.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x140592B34 (MiAllocateFromSubAllocatedRegion.c)
 *     MmCleanProcessAddressSpace @ 0x140595928 (MmCleanProcessAddressSpace.c)
 *     MiCleanVad @ 0x140595BD8 (MiCleanVad.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x140595C30 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MiAllocateVirtualMemory @ 0x1405B49A0 (MiAllocateVirtualMemory.c)
 *     MmQueryVirtualMemory @ 0x1405B5C20 (MmQueryVirtualMemory.c)
 *     NtAreMappedFilesTheSame @ 0x1405F1D00 (NtAreMappedFilesTheSame.c)
 *     MmIsFileMapped @ 0x14074F26C (MmIsFileMapped.c)
 *     MiFinishPlaceholderVadReplacement @ 0x1407550B8 (MiFinishPlaceholderVadReplacement.c)
 *     MiScrubProcesses @ 0x140757F60 (MiScrubProcesses.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiVadDeleted(__int64 a1)
{
  return (*(_DWORD *)(a1 + 48) >> 29) & 1;
}
