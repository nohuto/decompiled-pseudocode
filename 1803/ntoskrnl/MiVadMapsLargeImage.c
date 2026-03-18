/*
 * XREFs of MiVadMapsLargeImage @ 0x140062430
 * Callers:
 *     MmOutSwapWorkingSet @ 0x140062868 (MmOutSwapWorkingSet.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x140083858 (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MiCloneVads @ 0x140140C44 (MiCloneVads.c)
 *     MiIsVadEligibleForCommitRelease @ 0x1402506DC (MiIsVadEligibleForCommitRelease.c)
 *     MiRemoveVad @ 0x140268864 (MiRemoveVad.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x1404D5D60 (MmSecureVirtualMemoryAgainstWrites.c)
 *     MmProtectVirtualMemory @ 0x1404D6080 (MmProtectVirtualMemory.c)
 *     MiMarkPrivateImageCfgBits @ 0x140574F8C (MiMarkPrivateImageCfgBits.c)
 *     MmQueryVirtualMemory @ 0x1405B5C20 (MmQueryVirtualMemory.c)
 *     MiCloneProcessAddressSpace @ 0x1405BF2F8 (MiCloneProcessAddressSpace.c)
 *     MiAllocateChildVads @ 0x1405BF6F8 (MiAllocateChildVads.c)
 *     MiDeletePartialCloneVads @ 0x140756210 (MiDeletePartialCloneVads.c)
 *     MiScrubProcesses @ 0x140757F60 (MiScrubProcesses.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiVadMapsLargeImage(__int64 a1)
{
  return (*(_DWORD *)(a1 + 48) & 7) == 2 && (*(_DWORD *)(a1 + 64) & 0x1000000) != 0;
}
