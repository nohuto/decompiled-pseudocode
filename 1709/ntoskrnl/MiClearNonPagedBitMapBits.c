/*
 * XREFs of MiClearNonPagedBitMapBits @ 0x140129BC4
 * Callers:
 *     MiFreeInitializationCode @ 0x14058F3A0 (MiFreeInitializationCode.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400578A0 (MiUnlockWorkingSetExclusive.c)
 *     RtlClearBits @ 0x140080ED0 (RtlClearBits.c)
 */

__int64 __fastcall MiClearNonPagedBitMapBits(__int64 a1, __int64 a2, ULONG a3, ULONG a4)
{
  _RTL_BITMAP *v4; // rsi
  LONG *SharedVm; // rbx
  KIRQL v9; // al
  KIRQL v10; // di
  __int64 v11; // rdx

  v4 = *(_RTL_BITMAP **)(a1 + 80);
  SharedVm = MiGetSharedVm(a2);
  v9 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v10 = v9;
  RtlClearBits(v4, a3, a4);
  LOBYTE(v11) = v10;
  return MiUnlockWorkingSetExclusive(a2, v11);
}
