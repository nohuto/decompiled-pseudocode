/*
 * XREFs of KeDeleteThread @ 0x1400B2DAC
 * Callers:
 *     PspReaper @ 0x1400B2C00 (PspReaper.c)
 * Callees:
 *     KiDecrementProcessStackCount @ 0x140008690 (KiDecrementProcessStackCount.c)
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiWaitForContextSwap @ 0x1400EB990 (KiWaitForContextSwap.c)
 */

__int64 __fastcall KeDeleteThread(__int64 *a1)
{
  __int64 result; // rax
  __int64 *v3; // rbx
  KIRQL v4; // al
  __int64 v5; // rdx
  KIRQL v6; // si
  __int64 **v7; // rcx

  KiWaitForContextSwap(a1);
  result = KiDecrementProcessStackCount(a1[23]);
  v3 = a1 + 179;
  if ( a1[179] != 1 )
  {
    v4 = KeAcquireSpinLockRaiseToDpc(&qword_1403B46D8);
    v5 = *v3;
    v6 = v4;
    if ( *v3 != 1 && a1[180] )
    {
      if ( *(__int64 **)(v5 + 8) != v3 || (v7 = (__int64 **)a1[180], *v7 != v3) )
        __fastfail(3u);
      *v7 = (__int64 *)v5;
      *(_QWORD *)(v5 + 8) = v7;
    }
    KxReleaseSpinLock(&qword_1403B46D8);
    result = v6;
    __writecr8(v6);
  }
  return result;
}
