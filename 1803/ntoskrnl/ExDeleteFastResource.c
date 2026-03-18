/*
 * XREFs of ExDeleteFastResource @ 0x14015D760
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

__int64 __fastcall ExDeleteFastResource(__int64 *BugCheckParameter2)
{
  __int16 v1; // ax
  unsigned __int8 CurrentIrql; // cl
  KIRQL v4; // al
  __int64 *v5; // r8
  KIRQL v6; // di
  __int64 **v7; // rdx
  __int64 result; // rax

  v1 = *((_WORD *)BugCheckParameter2 + 13);
  if ( (v1 & 1) == 0 )
    KeBugCheckEx(0x1C6u, 3uLL, (ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 1u )
    KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 1uLL, 0LL);
  if ( *((_DWORD *)BugCheckParameter2 + 16) )
    KeBugCheckEx(0x1C6u, 4uLL, (ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
  *((_WORD *)BugCheckParameter2 + 13) = v1 & 0xFFBE;
  v4 = ExAcquireSpinLockExclusive(&ExpResourceSpinLock);
  v5 = (__int64 *)*BugCheckParameter2;
  v6 = v4;
  if ( *(__int64 **)(*BugCheckParameter2 + 8) != BugCheckParameter2
    || (v7 = (__int64 **)BugCheckParameter2[1], *v7 != BugCheckParameter2) )
  {
    __fastfail(3u);
  }
  *v7 = v5;
  v5[1] = (__int64)v7;
  ExReleaseSpinLockExclusiveFromDpcLevel(&ExpResourceSpinLock);
  result = v6;
  __writecr8(v6);
  *BugCheckParameter2 = 0LL;
  BugCheckParameter2[1] = 0LL;
  return result;
}
