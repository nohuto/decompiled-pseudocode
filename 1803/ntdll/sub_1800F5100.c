/*
 * XREFs of sub_1800F5100 @ 0x1800F5100
 * Callers:
 *     RtlIsNameInExpression @ 0x1800F49F0 (RtlIsNameInExpression.c)
 *     RtlIsNameInUnUpcasedExpression @ 0x1800F4AA0 (RtlIsNameInUnUpcasedExpression.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 */

__int64 __fastcall sub_1800F5100(__int64 a1, unsigned __int16 *a2)
{
  unsigned int v4; // eax
  PVOID Heap; // rax
  unsigned int v6; // r8d
  unsigned int v8; // r10d
  __int64 v9; // rsi
  unsigned __int16 v10; // r9

  v4 = *a2;
  *(_WORD *)(a1 + 2) = v4;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
  *(_QWORD *)(a1 + 8) = Heap;
  v6 = 0;
  if ( !Heap )
    return 3221225495LL;
  v8 = *a2 >> 1;
  v9 = qword_18015B238;
  while ( v6 < v8 )
  {
    v10 = *(_WORD *)(*((_QWORD *)a2 + 1) + 2LL * v6);
    if ( v10 >= 0x61u )
    {
      if ( v10 > 0x7Au )
        v10 += *(_WORD *)(v9
                        + 2LL
                        * ((v10 & 0xF)
                         + (unsigned int)*(unsigned __int16 *)(v9
                                                             + 2LL
                                                             * (((v10 >> 4) & 0xF)
                                                              + (unsigned int)*(unsigned __int16 *)(v9
                                                                                                  + 2 * ((unsigned __int64)v10 >> 8))))));
      else
        v10 -= 32;
    }
    *(_WORD *)(*(_QWORD *)(a1 + 8) + 2LL * v6++) = v10;
  }
  *(_WORD *)a1 = *a2;
  return 0LL;
}
