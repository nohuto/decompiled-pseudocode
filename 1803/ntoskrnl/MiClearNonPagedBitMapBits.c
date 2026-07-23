/*
 * XREFs of MiClearNonPagedBitMapBits @ 0x140160DA4
 * Callers:
 *     MiFreeInitializationCode @ 0x1405F84EC (MiFreeInitializationCode.c)
 * Callees:
 *     RtlClearBits @ 0x140072BD0 (RtlClearBits.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x1400E47F8 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400E6200 (MiUnlockWorkingSetExclusive.c)
 */

void __fastcall MiClearNonPagedBitMapBits(__int64 a1, __int64 a2, ULONG a3, ULONG a4)
{
  _RTL_BITMAP *v4; // rsi
  LONG *SharedVm; // rbx
  KIRQL v9; // al
  unsigned __int8 v10; // di

  v4 = *(_RTL_BITMAP **)(a1 + 104);
  SharedVm = MiGetSharedVm(a2);
  v9 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v10 = v9;
  RtlClearBits(v4, a3, a4);
  MiUnlockWorkingSetExclusive(a2, v10);
}
