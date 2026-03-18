/*
 * XREFs of RtlpHeapRemoveListEntry @ 0x140293DD8
 * Callers:
 *     RtlpAllocateHeap @ 0x1402894E0 (RtlpAllocateHeap.c)
 *     RtlpCoalesceFreeBlocks @ 0x140289EB0 (RtlpCoalesceFreeBlocks.c)
 *     RtlpCreateSplitBlock @ 0x14028A28C (RtlpCreateSplitBlock.c)
 *     RtlpPopulateListIndex @ 0x140293EC8 (RtlpPopulateListIndex.c)
 *     RtlZeroHeap @ 0x140786EC0 (RtlZeroHeap.c)
 * Callees:
 *     RtlpHeapListCompare @ 0x140293D64 (RtlpHeapListCompare.c)
 */

__int64 *__fastcall RtlpHeapRemoveListEntry(
        ULONG_PTR a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        unsigned int a5,
        __int64 a6)
{
  unsigned int v8; // ebx
  unsigned int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // r10d
  __int64 v12; // r14
  unsigned int v13; // r8d
  __int64 *result; // rax
  __int64 v15; // rbp

  v8 = a5 - *(_DWORD *)(a2 + 24);
  v9 = 2 * v8;
  if ( !*(_DWORD *)(a2 + 12) )
    v9 = a5 - *(_DWORD *)(a2 + 24);
  v10 = *(_QWORD *)(a2 + 48);
  v11 = *(_DWORD *)(a2 + 8);
  v12 = v9;
  v13 = v11 - 1;
  result = *(__int64 **)(v10 + 8LL * v9);
  --*(_DWORD *)(a2 + 16);
  if ( a5 == v11 - 1 )
    --*(_DWORD *)(a2 + 20);
  if ( result == a4 )
  {
    v15 = *a4;
    result = *(__int64 **)(a2 + 32);
    if ( *(_QWORD *)a2 )
      v13 = v11;
    if ( a5 >= v13 )
    {
      if ( (__int64 *)v15 != result )
      {
        *(_QWORD *)(v10 + 8 * v12) = v15;
        return result;
      }
      *(_QWORD *)(v10 + 8 * v12) = 0LL;
    }
    else
    {
      if ( (__int64 *)v15 != result && !(unsigned int)RtlpHeapListCompare(a1, v15, a6, 1) )
      {
        result = *(__int64 **)(a2 + 48);
        result[v12] = v15;
        return result;
      }
      *(_QWORD *)(*(_QWORD *)(a2 + 48) + 8 * v12) = 0LL;
    }
    result = *(__int64 **)(a2 + 40);
    *((_DWORD *)result + ((unsigned __int64)v8 >> 5)) &= ~(1 << (v8 & 0x1F));
  }
  return result;
}
