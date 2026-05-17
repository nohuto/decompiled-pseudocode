/*
 * XREFs of RtlpHeapRemoveListEntry @ 0x18004650C
 * Callers:
 *     RtlpPopulateListIndex @ 0x180008AC0 (RtlpPopulateListIndex.c)
 *     RtlpCreateSplitBlock @ 0x1800090BC (RtlpCreateSplitBlock.c)
 *     RtlpAllocateHeap @ 0x1800437B0 (RtlpAllocateHeap.c)
 *     RtlpFindAndCommitPages @ 0x180047558 (RtlpFindAndCommitPages.c)
 *     RtlpUpdateUCRIndexRemove @ 0x180084CE8 (RtlpUpdateUCRIndexRemove.c)
 *     RtlpCoalesceHeap @ 0x180090494 (RtlpCoalesceHeap.c)
 *     RtlZeroHeap @ 0x1800F25E0 (RtlZeroHeap.c)
 *     RtlpValidateHeapSegment @ 0x1801053B8 (RtlpValidateHeapSegment.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x18009FBBC (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpHeapRemoveListEntry(__int64 a1, __int64 a2, char a3, __int64 *a4, unsigned int a5, int a6)
{
  unsigned int v8; // edi
  unsigned int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rbp
  __int64 result; // rax
  __int64 *v13; // r11
  __int64 v14; // rsi
  int v15; // ecx
  int v16; // [rsp+38h] [rbp-10h]

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
    if ( a5 < (unsigned int)result )
    {
      v14 = *a4;
      if ( *a4 != *(_QWORD *)(a2 + 32) )
      {
        if ( a3 )
        {
          v16 = *(_DWORD *)(v14 - 16 + 8);
          if ( *(_DWORD *)(a1 + 124) )
          {
            v16 = *(_DWORD *)(a1 + 136) ^ *(_DWORD *)(v14 - 16 + 8);
            if ( HIBYTE(v16) != ((unsigned __int8)v16 ^ (unsigned __int8)(BYTE1(v16) ^ BYTE2(v16))) )
              RtlpLogHeapFailure(3, a1, v14 - 16, 0, 0LL, 0LL);
          }
          v15 = a6 - (unsigned __int16)v16;
        }
        else
        {
          v15 = a6 - *(_DWORD *)(v14 + 40);
        }
        if ( !v15 )
        {
          result = *(_QWORD *)(a2 + 48);
          *(_QWORD *)(result + 8 * v11) = v14;
          return result;
        }
      }
      *(_QWORD *)(*(_QWORD *)(a2 + 48) + 8 * v11) = 0LL;
    }
    else
    {
      result = *a4;
      if ( *a4 != *(_QWORD *)(a2 + 32) )
      {
        *(_QWORD *)(v10 + 8 * v11) = result;
        return result;
      }
      *(_QWORD *)(v10 + 8 * v11) = 0LL;
    }
    result = *(_QWORD *)(a2 + 40);
    *(_DWORD *)(result + 4 * ((unsigned __int64)v8 >> 5)) &= ~(1 << (v8 & 0x1F));
  }
  return result;
}
