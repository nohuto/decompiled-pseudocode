/*
 * XREFs of PsInsertVirtualizedTimer @ 0x1400B2880
 * Callers:
 *     ExpSetTimer @ 0x1400E1930 (ExpSetTimer.c)
 *     NtCreateTimer @ 0x1404EBB0C (NtCreateTimer.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExpTimerPause @ 0x1400D3370 (ExpTimerPause.c)
 */

_QWORD *__fastcall PsInsertVirtualizedTimer(__int64 a1, _QWORD *a2, char a3, __int64 a4, _QWORD *a5)
{
  char v5; // r14
  KIRQL CurrentIrql; // bp
  _QWORD *v10; // rdx
  _QWORD *result; // rax

  v5 = a4;
  CurrentIrql = KeGetCurrentIrql();
  if ( !a3 )
    CurrentIrql = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 2016));
  v10 = *(_QWORD **)(a1 + 2032);
  if ( *v10 != a1 + 2024 )
    __fastfail(3u);
  *a2 = a1 + 2024;
  a2[1] = v10;
  *v10 = a2;
  *(_QWORD *)(a1 + 2032) = a2;
  if ( v5 )
  {
    LOBYTE(a4) = a3;
    ExpTimerPause(a2 - 36, MEMORY[0xFFFFF78000000014], MEMORY[0xFFFFF78000000008], a4);
  }
  if ( !a3 )
  {
    KxReleaseSpinLock((PKSPIN_LOCK)(a1 + 2016));
    __writecr8(CurrentIrql);
  }
  result = a5;
  *a5 = a1;
  return result;
}
