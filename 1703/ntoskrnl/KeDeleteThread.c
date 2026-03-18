/*
 * XREFs of KeDeleteThread @ 0x14003FA70
 * Callers:
 *     PspReaper @ 0x14010EF10 (PspReaper.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KiDecrementProcessStackCount @ 0x14003FB0C (KiDecrementProcessStackCount.c)
 *     KiWaitForContextSwap @ 0x14004080C (KiWaitForContextSwap.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 __fastcall KeDeleteThread(_QWORD *a1)
{
  __int64 result; // rax
  _QWORD *v3; // rbx
  KIRQL v4; // si
  __int64 v5; // rdx
  _QWORD *v6; // rcx

  KiWaitForContextSwap(a1);
  result = KiDecrementProcessStackCount(a1[23]);
  v3 = a1 + 179;
  if ( a1[179] != 1LL )
  {
    v4 = KeAcquireSpinLockRaiseToDpc(&qword_1403569D8);
    if ( *v3 != 1LL && a1[180] )
    {
      v5 = *v3;
      v6 = (_QWORD *)a1[180];
      if ( *(_QWORD **)(*v3 + 8LL) != v3 || (_QWORD *)*v6 != v3 )
        __fastfail(3u);
      *v6 = v5;
      *(_QWORD *)(v5 + 8) = v6;
    }
    KxReleaseSpinLock(&qword_1403569D8);
    result = v4;
    __writecr8(v4);
  }
  return result;
}
