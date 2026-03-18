/*
 * XREFs of MiInsertVadEvent @ 0x1400E4C88
 * Callers:
 *     MiWaitForVadDeletion @ 0x14026B614 (MiWaitForVadDeletion.c)
 *     MiMapViewOfImageSection @ 0x1404B4E30 (MiMapViewOfImageSection.c)
 *     MiAllocateUserStack @ 0x1404E88F4 (MiAllocateUserStack.c)
 *     MiCreateRotateView @ 0x14057FBA0 (MiCreateRotateView.c)
 *     MiAddSecureEntry @ 0x140593490 (MiAddSecureEntry.c)
 *     MiCreateVadEventBitmap @ 0x1405BABD8 (MiCreateVadEventBitmap.c)
 *     MiCreatePlaceholderStorage @ 0x140755004 (MiCreatePlaceholderStorage.c)
 *     MiCreateLargePageVad @ 0x140755658 (MiCreateLargePageVad.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400E6200 (MiUnlockWorkingSetExclusive.c)
 */

__int64 __fastcall MiInsertVadEvent(__int64 a1, __int64 *a2, int a3)
{
  __int64 *v3; // rsi
  LONG *v5; // rdi
  _KPROCESS *Process; // rbx
  char Flink; // al
  unsigned __int16 *v8; // rbx
  KIRQL v9; // al
  __int64 result; // rax

  v3 = a2;
  if ( a3 == 1 )
  {
    v5 = &dword_1403CCD40;
    Process = KeGetCurrentThread()->ApcState.Process;
    Flink = (char)Process[2].Header.WaitListHead.Flink;
    v8 = &Process[1].IdealNode[12];
    if ( (Flink & 7) != 2 )
      v5 = (LONG *)(v8 + 96);
    v9 = ExAcquireSpinLockExclusive(v5);
    v5[1] = 0;
    LOBYTE(a2) = v9;
  }
  else
  {
    LOBYTE(a2) = 17;
    v8 = 0LL;
  }
  result = *(_QWORD *)(a1 + 56);
  *v3 = result;
  *(_QWORD *)(a1 + 56) = v3;
  if ( (_BYTE)a2 != 17 )
    return MiUnlockWorkingSetExclusive(v8, a2);
  return result;
}
