/*
 * XREFs of MiSynchronizePageFree @ 0x1402292B8
 * Callers:
 *     NtFreeUserPhysicalPages @ 0x1406E649C (NtFreeUserPhysicalPages.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400578A0 (MiUnlockWorkingSetExclusive.c)
 */

__int64 __fastcall MiSynchronizePageFree(__int64 a1)
{
  __int64 v1; // rdi
  LONG *SharedVm; // rbx
  KIRQL v3; // al
  __int64 v4; // rdx

  v1 = a1 + 1280;
  SharedVm = MiGetSharedVm(a1 + 1280);
  v3 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  LOBYTE(v4) = v3;
  return MiUnlockWorkingSetExclusive(v1, v4);
}
