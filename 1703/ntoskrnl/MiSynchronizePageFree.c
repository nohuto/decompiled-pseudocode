/*
 * XREFs of MiSynchronizePageFree @ 0x14021C678
 * Callers:
 *     NtFreeUserPhysicalPages @ 0x1406B9738 (NtFreeUserPhysicalPages.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 */

__int64 __fastcall MiSynchronizePageFree(__int64 a1)
{
  __int64 v1; // rdi
  LONG *SharedVm; // rbx
  KIRQL v3; // al

  v1 = a1 + 1280;
  SharedVm = MiGetSharedVm(a1 + 1280);
  v3 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  return MiUnlockWorkingSetExclusive(v1, v3);
}
