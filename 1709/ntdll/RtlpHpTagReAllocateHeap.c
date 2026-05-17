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

__int64 __fastcall RtlpHpTagReAllocateHeap(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, int a4)
{
  __int64 v5; // rsi
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rbx
  unsigned __int16 v10; // [rsp+30h] [rbp-18h] BYREF
  __int64 v11; // [rsp+38h] [rbp-10h] BYREF

  v5 = RtlpReAllocateHeapInternal(a1, a4, a2, a3, &v11, &v10);
  if ( v5 && v10 && a3 != v11 )
  {
    v8 = *(_QWORD *)(qword_18015D918 + 8LL * v10 - 8);
    RtlAcquireSRWLockShared(&RtlpHpTagContext, (char *)v10, v6, v7);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 32), a3 - v11);
    RtlReleaseSRWLockShared(&RtlpHpTagContext);
  }
  return v5;
}
