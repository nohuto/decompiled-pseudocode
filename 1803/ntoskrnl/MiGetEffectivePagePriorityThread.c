/*
 * XREFs of MiGetEffectivePagePriorityThread @ 0x14005605C
 * Callers:
 *     MiWalkEntireImage @ 0x140030B50 (MiWalkEntireImage.c)
 *     MiPrivateFixup @ 0x14004C8E8 (MiPrivateFixup.c)
 *     MiGetPageForHeader @ 0x14004DD9C (MiGetPageForHeader.c)
 *     MiInitializeImageProtos @ 0x14004DF48 (MiInitializeImageProtos.c)
 *     MiUnlockWsle @ 0x14004EB38 (MiUnlockWsle.c)
 *     MiInitializePfn @ 0x140056084 (MiInitializePfn.c)
 *     MiIssueHardFault @ 0x140059D80 (MiIssueHardFault.c)
 *     MiPrefetchRestOfCluster @ 0x1400CFC78 (MiPrefetchRestOfCluster.c)
 *     NtLockVirtualMemory @ 0x14013B8F4 (NtLockVirtualMemory.c)
 *     MmCopyMemory @ 0x14015B270 (MmCopyMemory.c)
 *     MiSetPagesModified @ 0x14025545C (MiSetPagesModified.c)
 *     MiSwitchToTransition @ 0x140258498 (MiSwitchToTransition.c)
 *     NtSetInformationVirtualMemory @ 0x1404B30D0 (NtSetInformationVirtualMemory.c)
 *     MmPrefetchVirtualAddresses @ 0x14052C6E0 (MmPrefetchVirtualAddresses.c)
 * Callees:
 *     PsGetPagePriorityThread @ 0x140128140 (PsGetPagePriorityThread.c)
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
