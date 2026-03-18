/*
 * XREFs of MiGetEffectivePagePriorityThread @ 0x140028114
 * Callers:
 *     MiInitializePfn @ 0x140027CC0 (MiInitializePfn.c)
 *     MiIssueHardFault @ 0x14002C7B0 (MiIssueHardFault.c)
 *     MiWalkEntireImage @ 0x140039480 (MiWalkEntireImage.c)
 *     MiPrivateFixup @ 0x1400CD7E0 (MiPrivateFixup.c)
 *     MiInitializeImageProtos @ 0x1400ECF10 (MiInitializeImageProtos.c)
 *     MiGetPageForHeader @ 0x1400EE050 (MiGetPageForHeader.c)
 *     MiPrefetchRestOfCluster @ 0x140109954 (MiPrefetchRestOfCluster.c)
 *     NtLockVirtualMemory @ 0x14010ABA8 (NtLockVirtualMemory.c)
 *     MiUnlockWsle @ 0x14010C8E0 (MiUnlockWsle.c)
 *     MmCopyMemory @ 0x140218220 (MmCopyMemory.c)
 *     MiSetPagesModified @ 0x140218768 (MiSetPagesModified.c)
 *     MiSwitchToTransition @ 0x14021C340 (MiSwitchToTransition.c)
 *     MmPrefetchVirtualAddresses @ 0x140444690 (MmPrefetchVirtualAddresses.c)
 *     NtSetInformationVirtualMemory @ 0x1404D43D0 (NtSetInformationVirtualMemory.c)
 * Callees:
 *     PsGetPagePriorityThread @ 0x140061EB0 (PsGetPagePriorityThread.c)
 */

__int64 __fastcall MiGetEffectivePagePriorityThread(__int64 a1)
{
  unsigned int v1; // eax

  v1 = *(_DWORD *)(a1 + 1752);
  if ( (v1 & 0x100) != 0 )
    return (v1 >> 9) & 7;
  else
    return PsGetPagePriorityThread(a1);
}
