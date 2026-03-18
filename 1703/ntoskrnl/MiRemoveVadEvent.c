/*
 * XREFs of MiRemoveVadEvent @ 0x140214988
 * Callers:
 *     MiMapViewOfImageSection @ 0x140511460 (MiMapViewOfImageSection.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 */

__int64 __fastcall MiRemoveVadEvent(__int64 a1, _QWORD *a2)
{
  _KPROCESS *Process; // rbp
  LONG *SharedVm; // rbx
  KIRQL v6; // al
  _QWORD *i; // rdi

  Process = KeGetCurrentThread()->ApcState.Process;
  SharedVm = MiGetSharedVm((__int64)&Process[1].IdealNode[12]);
  v6 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  for ( i = (_QWORD *)(a1 + 56); (_QWORD *)*i != a2; i = (_QWORD *)*i )
    ;
  *i = *a2;
  return MiUnlockWorkingSetExclusive((__int64)&Process[1].IdealNode[12], v6);
}
