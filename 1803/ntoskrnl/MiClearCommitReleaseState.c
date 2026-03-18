/*
 * XREFs of MiClearCommitReleaseState @ 0x140250524
 * Callers:
 *     MmCleanProcessAddressSpace @ 0x140595928 (MmCleanProcessAddressSpace.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x1400E47F8 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400E6200 (MiUnlockWorkingSetExclusive.c)
 */

void __fastcall MiClearCommitReleaseState(__int64 a1)
{
  LONG *SharedVm; // rbx
  KIRQL v3; // al

  SharedVm = MiGetSharedVm(a1);
  v3 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  *(_BYTE *)(a1 + 187) &= 0x9Fu;
  MiUnlockWorkingSetExclusive(a1, v3);
}
