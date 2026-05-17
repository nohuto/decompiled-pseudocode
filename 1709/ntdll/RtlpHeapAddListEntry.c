/*
 * XREFs of RtlpHeapAddListEntry @ 0x1800094B4
 * Callers:
 *     RtlpPopulateListIndex @ 0x180008AC0 (RtlpPopulateListIndex.c)
 *     RtlpCreateSplitBlock @ 0x1800090BC (RtlpCreateSplitBlock.c)
 *     RtlpFreeHeap @ 0x18003AD60 (RtlpFreeHeap.c)
 *     RtlpAllocateHeap @ 0x1800437B0 (RtlpAllocateHeap.c)
 *     RtlpCreateUCREntry @ 0x180047904 (RtlpCreateUCREntry.c)
 *     RtlpUpdateUCRIndexInsert @ 0x1800869AC (RtlpUpdateUCRIndexInsert.c)
 *     RtlpInitializeUCRIndex @ 0x180087F70 (RtlpInitializeUCRIndex.c)
 *     RtlZeroHeap @ 0x1800F25E0 (RtlZeroHeap.c)
 *     RtlpValidateHeapSegment @ 0x1801053B8 (RtlpValidateHeapSegment.c)
 * Callees:
 *     RtlpHeapListCompare @ 0x1800097E8 (RtlpHeapListCompare.c)
 */

__int64 __fastcall RtlpHeapAddListEntry(__int64 a1, __int64 a2, char a3, __int64 a4, int a5, __int64 a6)
{
  __int64 v6; // r15
  unsigned int v7; // ebx
  unsigned int v9; // eax
  __int64 v10; // r14
  __int64 v11; // rax
  __int64 v12; // rbp
  __int64 result; // rax

  v6 = a4;
  v7 = a5 - *(_DWORD *)(a2 + 24);
  v9 = 2 * v7;
  if ( !*(_DWORD *)(a2 + 12) )
    v9 = a5 - *(_DWORD *)(a2 + 24);
  v10 = v9;
  v11 = *(_QWORD *)(a2 + 48);
  ++*(_DWORD *)(a2 + 16);
  v12 = *(_QWORD *)(v11 + 8 * v10);
  if ( a5 == *(_DWORD *)(a2 + 8) - 1 )
    ++*(_DWORD *)(a2 + 20);
  if ( !v12 || (LOBYTE(a4) = a3, result = RtlpHeapListCompare(a1, v12, a6, a4), (int)result <= 0) )
  {
    result = *(_QWORD *)(a2 + 48);
    *(_QWORD *)(result + 8 * v10) = v6;
  }
  if ( !v12 )
  {
    result = *(_QWORD *)(a2 + 40);
    *(_DWORD *)(result + 4 * ((unsigned __int64)v7 >> 5)) |= 1 << (v7 & 0x1F);
  }
  return result;
}
