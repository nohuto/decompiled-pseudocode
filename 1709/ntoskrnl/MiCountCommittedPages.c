/*
 * XREFs of MiCountCommittedPages @ 0x140229554
 * Callers:
 *     MiLoadSectionIntoVsmEnclave @ 0x1406E8AAC (MiLoadSectionIntoVsmEnclave.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400578A0 (MiUnlockWorkingSetExclusive.c)
 *     MiComputePageCommitment @ 0x140112BF0 (MiComputePageCommitment.c)
 */

__int64 __fastcall MiCountCommittedPages(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  LONG *SharedVm; // rbx
  KIRQL v9; // al
  KIRQL v10; // di
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rbx

  SharedVm = MiGetSharedVm(a4);
  v9 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v10 = v9;
  v11 = MiComputePageCommitment(a1, a2, a3, v9, 0LL);
  LOBYTE(v12) = v10;
  v13 = v11;
  MiUnlockWorkingSetExclusive(a4, v12);
  return v13;
}
