/*
 * XREFs of MiDeleteSessionPdes @ 0x14013BC30
 * Callers:
 *     MiUnloadSystemImage @ 0x1404B29B4 (MiUnloadSystemImage.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MiReturnCommit @ 0x1400CE240 (MiReturnCommit.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400D8DB0 (MiUnlockWorkingSetExclusive.c)
 *     MiDeletePteRange @ 0x14013BCF4 (MiDeletePteRange.c)
 */

ULONG_PTR *__fastcall MiDeleteSessionPdes(__int64 a1, __int64 a2)
{
  __int64 v4; // r14
  __int64 v5; // r8
  __int64 v6; // r15
  LONG *SharedVm; // rbx
  KIRQL v8; // al
  unsigned __int8 v9; // di
  unsigned __int64 v10; // rbx

  v4 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
  v5 = *(unsigned __int16 *)(v4 + 3180);
  v4 += 3008LL;
  v6 = *(_QWORD *)(qword_14036C8F8 + 8 * v5);
  SharedVm = MiGetSharedVm(v4);
  v8 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v9 = v8;
  v10 = MiDeletePteRange(v4, 1LL, a1, a2 + 8);
  MiUnlockWorkingSetExclusive(v4, v9);
  MiReturnCommit(v6, v10);
  return MiReturnSystemCharges(v6, v10, 1LL);
}
