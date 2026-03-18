/*
 * XREFs of MiDeleteSessionPdes @ 0x14021989C
 * Callers:
 *     MiUnloadSystemImage @ 0x140515B1C (MiUnloadSystemImage.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiReturnCommit @ 0x140036530 (MiReturnCommit.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400578A0 (MiUnlockWorkingSetExclusive.c)
 *     MiReturnSystemCharges @ 0x1400C3258 (MiReturnSystemCharges.c)
 *     MiDeletePteRange @ 0x1402151D4 (MiDeletePteRange.c)
 */

void __fastcall MiDeleteSessionPdes(unsigned __int64 a1, __int64 a2)
{
  __int64 v4; // r14
  __int64 v5; // r8
  __int64 v6; // r15
  LONG *SharedVm; // rbx
  KIRQL v8; // al
  KIRQL v9; // di
  __int64 v10; // rax
  __int64 v11; // rdx
  unsigned __int64 v12; // rbx

  v4 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
  v5 = *(unsigned __int16 *)(v4 + 3180);
  v4 += 3008LL;
  v6 = *(_QWORD *)(qword_140388AF0 + 8 * v5);
  SharedVm = MiGetSharedVm(v4);
  v8 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v9 = v8;
  v10 = MiDeletePteRange((char *)v4, 1, a1, a2 + 8);
  LOBYTE(v11) = v9;
  v12 = v10;
  MiUnlockWorkingSetExclusive(v4, v11);
  MiReturnCommit(v6, v12);
  MiReturnSystemCharges(v6, v12, 1);
}
