/*
 * XREFs of MiLockWorkingSetExclusive @ 0x14021EED8
 * Callers:
 *     MiDeleteProcessShadow @ 0x14017C830 (MiDeleteProcessShadow.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 */

KIRQL __fastcall MiLockWorkingSetExclusive(__int64 a1)
{
  LONG *SharedVm; // rbx
  KIRQL result; // al

  SharedVm = MiGetSharedVm(a1);
  result = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  return result;
}
