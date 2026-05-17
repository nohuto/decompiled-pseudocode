/*
 * XREFs of RtlpHeapTrkTrackAdd @ 0x1800F7A6C
 * Callers:
 *     RtlpHeapTrkInterceptor @ 0x1800F7530 (RtlpHeapTrkInterceptor.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHeapTrkHash @ 0x1800F748C (RtlpHeapTrkHash.c)
 *     RtlpHeapTrkTrackStack @ 0x1800F7D6C (RtlpHeapTrkTrackStack.c)
 */

signed __int64 __fastcall RtlpHeapTrkTrackAdd(__int64 a1, __int64 a2)
{
  signed __int64 result; // rax
  _QWORD *v5; // rbx
  __int64 v6; // rbp
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 *v9; // r8
  __int64 v10; // r9
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rax

  result = RtlAllocateHeap(qword_180160890, 0, 40LL);
  v5 = (_QWORD *)result;
  if ( result )
  {
    v6 = (unsigned int)RtlpHeapTrkHash(a2);
    v5[2] = a1;
    v5[3] = a2;
    v7 = RtlpHeapTrkTrackStack();
    v5[4] = v7;
    if ( v7 )
    {
      v11 = v6 & 0xF;
      RtlAcquireSRWLockExclusive(*(_QWORD *)(qword_180160870 + 8 * v11), v8, v9, v10);
      v12 = qword_1801607C8 + 16 * v6;
      v13 = *(_QWORD *)v12;
      if ( *(_QWORD *)(*(_QWORD *)v12 + 8LL) != v12 )
        __fastfail(3u);
      *v5 = v13;
      v5[1] = v12;
      *(_QWORD *)(v13 + 8) = v5;
      *(_QWORD *)v12 = v5;
      return RtlReleaseSRWLockExclusive(*(volatile signed __int64 **)(qword_180160870 + 8 * v11));
    }
    else
    {
      return RtlFreeHeap(qword_180160890, 0, (unsigned __int64)v5);
    }
  }
  return result;
}
