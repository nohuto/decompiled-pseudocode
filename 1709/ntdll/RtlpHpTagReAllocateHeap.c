/*
 * XREFs of RtlpHpTagReAllocateHeap @ 0x1800494B8
 * Callers:
 *     RtlReAllocateHeap @ 0x18003C6F0 (RtlReAllocateHeap.c)
 *     RtlpHpReAllocWithExceptionProtection @ 0x180049470 (RtlpHpReAllocWithExceptionProtection.c)
 * Callees:
 *     RtlpReAllocateHeapInternal @ 0x18003C770 (RtlpReAllocateHeapInternal.c)
 *     RtlReleaseSRWLockShared @ 0x1800467D0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180046FA0 (RtlAcquireSRWLockShared.c)
 */

unsigned __int64 __fastcall RtlpHpTagReAllocateHeap(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, int a4)
{
  unsigned __int64 v5; // rsi
  __int64 v6; // rbx
  unsigned __int16 v8; // [rsp+30h] [rbp-18h] BYREF
  __int64 v9; // [rsp+38h] [rbp-10h] BYREF

  v5 = RtlpReAllocateHeapInternal(a1, a4, a2, a3, &v9, &v8);
  if ( v5 && v8 && a3 != v9 )
  {
    v6 = *(_QWORD *)(qword_18015D918 + 8LL * v8 - 8);
    RtlAcquireSRWLockShared(&RtlpHpTagContext);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 32), a3 - v9);
    RtlReleaseSRWLockShared(&RtlpHpTagContext);
  }
  return v5;
}
