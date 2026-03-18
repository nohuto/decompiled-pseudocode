/*
 * XREFs of MiGetEffectivePagePriorityThread @ 0x1400FE040
 * Callers:
 *     MiUnlockWsle @ 0x140017528 (MiUnlockWsle.c)
 *     MiPrefetchRestOfCluster @ 0x1400374F4 (MiPrefetchRestOfCluster.c)
 *     NtLockVirtualMemory @ 0x14007687C (NtLockVirtualMemory.c)
 *     MiIssueHardFault @ 0x140096E10 (MiIssueHardFault.c)
 *     MiWalkEntireImage @ 0x1400C9D50 (MiWalkEntireImage.c)
 *     MiAllocateKernelStackPages @ 0x1401059E0 (MiAllocateKernelStackPages.c)
 *     MiInitializePfn @ 0x1401099F8 (MiInitializePfn.c)
 *     MiGetPageForHeader @ 0x140109BE0 (MiGetPageForHeader.c)
 *     MiInitializeImageProtos @ 0x14010A158 (MiInitializeImageProtos.c)
 *     MiPrivateFixup @ 0x140117AB4 (MiPrivateFixup.c)
 *     MmCopyMemory @ 0x140210B00 (MmCopyMemory.c)
 *     MiSetPagesModified @ 0x140210F54 (MiSetPagesModified.c)
 *     MiSwitchToTransition @ 0x14021430C (MiSwitchToTransition.c)
 *     NtSetInformationVirtualMemory @ 0x14049A7B0 (NtSetInformationVirtualMemory.c)
 *     MmPrefetchVirtualAddresses @ 0x1404C9A70 (MmPrefetchVirtualAddresses.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetEffectivePagePriorityThread(__int64 a1)
{
  unsigned int v1; // eax

  v1 = *(_DWORD *)(a1 + 1744);
  if ( (v1 & 0x100) != 0 )
    return (v1 >> 9) & 7;
  else
    return PsGetPagePriorityThread(a1);
}
