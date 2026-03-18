/*
 * XREFs of PsRemoveVirtualizedTimer @ 0x14012B698
 * Callers:
 *     ExpDeleteTimer @ 0x14012B620 (ExpDeleteTimer.c)
 *     ExpDeleteTimer2 @ 0x14055E090 (ExpDeleteTimer2.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 __fastcall PsRemoveVirtualizedTimer(__int64 a1, _QWORD *a2)
{
  KSPIN_LOCK *v2; // rdi
  KIRQL v4; // al
  __int64 v5; // rdx
  KIRQL v6; // si
  _QWORD *v7; // r8
  __int64 result; // rax

  v2 = (KSPIN_LOCK *)(a1 + 1992);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 1992));
  v5 = *a2;
  v6 = v4;
  v7 = (_QWORD *)a2[1];
  if ( *(_QWORD **)(*a2 + 8LL) != a2 || (_QWORD *)*v7 != a2 )
    __fastfail(3u);
  *v7 = v5;
  *(_QWORD *)(v5 + 8) = v7;
  KxReleaseSpinLock(v2);
  result = v6;
  __writecr8(v6);
  return result;
}
