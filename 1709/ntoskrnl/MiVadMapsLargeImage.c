/*
 * XREFs of MiVadMapsLargeImage @ 0x140015000
 * Callers:
 *     MmOutSwapWorkingSet @ 0x140014900 (MmOutSwapWorkingSet.c)
 *     MiCloneVads @ 0x1400E6F20 (MiCloneVads.c)
 *     MiIsVadEligibleForCommitRelease @ 0x140212198 (MiIsVadEligibleForCommitRelease.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x140215448 (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x1404625C8 (MmSecureVirtualMemoryAgainstWrites.c)
 *     MmQueryVirtualMemory @ 0x140497DA0 (MmQueryVirtualMemory.c)
 *     MmProtectVirtualMemory @ 0x140498B10 (MmProtectVirtualMemory.c)
 *     MiCloneProcessAddressSpace @ 0x14057A87C (MiCloneProcessAddressSpace.c)
 *     MiAllocateChildVads @ 0x14057AC60 (MiAllocateChildVads.c)
 *     MiMarkPrivateImageCfgBits @ 0x1405873F8 (MiMarkPrivateImageCfgBits.c)
 *     MiDeletePartialCloneVads @ 0x1406EC69C (MiDeletePartialCloneVads.c)
 *     MiScrubProcesses @ 0x1406EEA90 (MiScrubProcesses.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiVadMapsLargeImage(__int64 a1)
{
  return (*(_DWORD *)(a1 + 48) & 7) == 2 && (*(_DWORD *)(a1 + 64) & 0x1000000) != 0;
}
