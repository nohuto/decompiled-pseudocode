/*
 * XREFs of MiUnlockProbePacketWorkingSet @ 0x14010030C
 * Callers:
 *     MiProbeLeafFrame @ 0x1400BE690 (MiProbeLeafFrame.c)
 *     MiProbeAndLockComplete @ 0x1401002BC (MiProbeAndLockComplete.c)
 *     MiSplitReducedCommitClonePage @ 0x140215F00 (MiSplitReducedCommitClonePage.c)
 *     MmStoreProbeAndLockPages @ 0x14022DB24 (MmStoreProbeAndLockPages.c)
 * Callees:
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400578A0 (MiUnlockWorkingSetExclusive.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140065040 (ExReleaseSpinLockSharedFromDpcLevel.c)
 */

void __fastcall MiUnlockProbePacketWorkingSet(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbx
  LONG *SharedVm; // rax

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
      SharedVm = MiGetSharedVm(*(_QWORD *)(a1 + 80));
      ExReleaseSpinLockSharedFromDpcLevel(SharedVm);
      __writecr8(v2);
    }
  }
}
