/*
 * XREFs of PsInsertVirtualizedTimer @ 0x14012AA9C
 * Callers:
 *     ExpSetTimer @ 0x140049460 (ExpSetTimer.c)
 *     ExpSetTimer2 @ 0x140051C60 (ExpSetTimer2.c)
 *     NtCreateTimer @ 0x14053EE40 (NtCreateTimer.c)
 *     NtCreateTimer2 @ 0x14055DBA0 (NtCreateTimer2.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     ExpTimerPause @ 0x1400315B0 (ExpTimerPause.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 */

_QWORD *__fastcall PsInsertVirtualizedTimer(__int64 a1, __int64 a2, char a3, char a4, _QWORD *a5)
{
  KIRQL CurrentIrql; // bp
  _QWORD *v10; // rdx
  _QWORD *result; // rax

  CurrentIrql = KeGetCurrentIrql();
  if ( !a3 )
    CurrentIrql = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 1992));
  v10 = *(_QWORD **)(a1 + 2008);
  if ( *v10 != a1 + 2000 )
    __fastfail(3u);
  *(_QWORD *)a2 = a1 + 2000;
  *(_QWORD *)(a2 + 8) = v10;
  *v10 = a2;
  *(_QWORD *)(a1 + 2008) = a2;
  if ( a4 && (*(_BYTE *)(a2 + 16) & 8) == 0 )
    ExpTimerPause(a2 - 288, MEMORY[0xFFFFF78000000014], MEMORY[0xFFFFF78000000008], a3);
  if ( !a3 )
  {
    KxReleaseSpinLock((PKSPIN_LOCK)(a1 + 1992));
    __writecr8(CurrentIrql);
  }
  result = a5;
  *a5 = a1;
  return result;
}
