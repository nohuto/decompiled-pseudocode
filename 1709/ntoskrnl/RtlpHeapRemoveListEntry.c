/*
 * XREFs of RtlpHeapRemoveListEntry @ 0x14010E60C
 * Callers:
 *     RtlpCreateSplitBlock @ 0x14010CFC4 (RtlpCreateSplitBlock.c)
 *     RtlpCoalesceFreeBlocks @ 0x14010D830 (RtlpCoalesceFreeBlocks.c)
 *     RtlpAllocateHeap @ 0x14010DCD4 (RtlpAllocateHeap.c)
 *     RtlpPopulateListIndex @ 0x14014EF48 (RtlpPopulateListIndex.c)
 *     RtlZeroHeap @ 0x1407235F0 (RtlZeroHeap.c)
 * Callees:
 *     RtlpHeapListCompare @ 0x14010E940 (RtlpHeapListCompare.c)
 */

__int64 __fastcall RtlpHeapRemoveListEntry(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        unsigned int a5,
        __int64 a6)
{
  unsigned int v8; // edi
  unsigned int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rbp
  __int64 result; // rax
  __int64 *v13; // r8
  __int64 v14; // r14

  v8 = a5 - *(_DWORD *)(a2 + 24);
  v9 = 2 * v8;
  if ( !*(_DWORD *)(a2 + 12) )
    v9 = a5 - *(_DWORD *)(a2 + 24);
  v10 = *(_QWORD *)(a2 + 48);
  v11 = v9;
  result = *(unsigned int *)(a2 + 8);
  v13 = *(__int64 **)(v10 + 8 * v11);
  --*(_DWORD *)(a2 + 16);
  if ( a5 == (_DWORD)result - 1 )
    --*(_DWORD *)(a2 + 20);
  if ( v13 == a4 )
  {
    if ( !*(_QWORD *)a2 )
      LODWORD(result) = result - 1;
    if ( a5 >= (unsigned int)result )
    {
      result = *a4;
      if ( *a4 != *(_QWORD *)(a2 + 32) )
      {
        *(_QWORD *)(v10 + 8 * v11) = result;
        return result;
      }
      *(_QWORD *)(v10 + 8 * v11) = 0LL;
    }
    else
    {
      v14 = *a4;
      if ( *a4 != *(_QWORD *)(a2 + 32) )
      {
        LOBYTE(a4) = 1;
        if ( !(unsigned int)RtlpHeapListCompare(a1, v14, a6, a4) )
        {
          result = *(_QWORD *)(a2 + 48);
          *(_QWORD *)(result + 8 * v11) = v14;
          return result;
        }
      }
      *(_QWORD *)(*(_QWORD *)(a2 + 48) + 8 * v11) = 0LL;
    }
    result = *(_QWORD *)(a2 + 40);
    *(_DWORD *)(result + 4 * ((unsigned __int64)v8 >> 5)) &= ~(1 << (v8 & 0x1F));
  }
  return result;
}
