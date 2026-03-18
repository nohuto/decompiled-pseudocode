/*
 * XREFs of MiUnlockProbePacketWorkingSet @ 0x140026948
 * Callers:
 *     MmStoreProbeAndLockPages @ 0x1400266C0 (MmStoreProbeAndLockPages.c)
 *     MiProbeAndLockComplete @ 0x1400268F8 (MiProbeAndLockComplete.c)
 *     MiProbeLeafFrame @ 0x1400B44D0 (MiProbeLeafFrame.c)
 *     MiSplitReducedCommitClonePage @ 0x14020E7A4 (MiSplitReducedCommitClonePage.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400A5D60 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 */

void __fastcall MiUnlockProbePacketWorkingSet(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbx
  volatile LONG *SharedVm; // rax

  if ( *(PVOID *)(a1 + 80) != MmBadPointer )
  {
    if ( *(_BYTE *)(a1 + 55) == 1 )
    {
      LOBYTE(a2) = *(_BYTE *)(a1 + 52);
      MiUnlockWorkingSetExclusive(*(_QWORD *)(a1 + 80), a2);
    }
    else
    {
      v2 = *(unsigned __int8 *)(a1 + 52);
      SharedVm = (volatile LONG *)MiGetSharedVm(*(_QWORD *)(a1 + 80));
      ExReleaseSpinLockSharedFromDpcLevel(SharedVm);
      __writecr8(v2);
    }
  }
}
