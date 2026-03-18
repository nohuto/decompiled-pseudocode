/*
 * XREFs of MiRemoveVadEvent @ 0x140258C0C
 * Callers:
 *     MiMapViewOfImageSection @ 0x1404B4E30 (MiMapViewOfImageSection.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x1400E47F8 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400E6200 (MiUnlockWorkingSetExclusive.c)
 */

void __fastcall MiRemoveVadEvent(__int64 a1, _QWORD *a2)
{
  _KPROCESS *Process; // rbp
  LONG *SharedVm; // rbx
  KIRQL v6; // al
  _QWORD **v7; // rdi
  _QWORD *i; // r8

  Process = KeGetCurrentThread()->ApcState.Process;
  SharedVm = MiGetSharedVm((__int64)&Process[1].IdealNode[12]);
  v6 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v7 = (_QWORD **)(a1 + 56);
  for ( i = *v7; i != a2; i = (_QWORD *)*i )
    v7 = (_QWORD **)i;
  *v7 = (_QWORD *)*a2;
  MiUnlockWorkingSetExclusive((__int64)&Process[1].IdealNode[12], v6);
}
