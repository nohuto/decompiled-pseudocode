/*
 * XREFs of MiClearNonPagedBitMapBits @ 0x14006BEE0
 * Callers:
 *     MiFreeInitializationCode @ 0x1404B1698 (MiFreeInitializationCode.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     RtlClearBits @ 0x14008CF40 (RtlClearBits.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 */

__int64 __fastcall MiClearNonPagedBitMapBits(__int64 a1, __int64 a2, ULONG a3, ULONG a4)
{
  _RTL_BITMAP *v4; // rsi
  __int64 SharedVm; // rbx
  KIRQL v9; // al
  KIRQL v10; // di
  __int64 v11; // rdx

  v4 = *(_RTL_BITMAP **)(a1 + 80);
  SharedVm = MiGetSharedVm(a2);
  v9 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
  *(_DWORD *)(SharedVm + 4) = 0;
  v10 = v9;
  RtlClearBits(v4, a3, a4);
  LOBYTE(v11) = v10;
  return MiUnlockWorkingSetExclusive(a2, v11);
}
