/*
 * XREFs of MiClearCommitReleaseState @ 0x140212020
 * Callers:
 *     MmCleanProcessAddressSpace @ 0x1404D2F70 (MmCleanProcessAddressSpace.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400578A0 (MiUnlockWorkingSetExclusive.c)
 */

__int64 __fastcall MiClearCommitReleaseState(__int64 a1)
{
  LONG *SharedVm; // rbx
  KIRQL v3; // al
  __int64 v4; // rdx

  SharedVm = MiGetSharedVm(a1);
  v3 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  *(_BYTE *)(a1 + 195) &= 0x9Fu;
  LOBYTE(v4) = v3;
  return MiUnlockWorkingSetExclusive(a1, v4);
}
