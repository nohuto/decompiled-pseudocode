/*
 * XREFs of sub_180050C1C @ 0x180050C1C
 * Callers:
 *     sub_180050AD8 @ 0x180050AD8 (sub_180050AD8.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     RtlFindClearBitsAndSet @ 0x180050D90 (RtlFindClearBitsAndSet.c)
 *     RtlClearBits @ 0x180053EB0 (RtlClearBits.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 */

__int64 __fastcall sub_180050C1C(unsigned int *a1, _BYTE *a2)
{
  unsigned int v2; // ebx
  unsigned int ClearBitsAndSet; // eax
  void *Heap; // rax
  void *v8; // r14

  v2 = dword_18015C1D0;
  if ( !dword_18015C1D0 )
  {
    dword_18015C1D0 = 8;
    Src = &unk_18015C1C8;
    qword_18015C1E0 = 1LL;
LABEL_6:
    RtlClearBits(&dword_18015C1D0, v2 + 1, 7LL);
    _bittestandset((signed __int32 *)Src, v2);
    *a1 = v2;
    *a2 = 1;
    return 0LL;
  }
  ClearBitsAndSet = RtlFindClearBitsAndSet(&dword_18015C1D0, 1LL, 0LL);
  if ( ClearBitsAndSet != -1 )
  {
    *a1 = ClearBitsAndSet;
    *a2 = 0;
    return 0LL;
  }
  if ( ((unsigned __int64)(unsigned int)(dword_18015C1D0 + 8) + 31) >> 5 <= qword_18015C1E0 )
  {
    dword_18015C1D0 += 8;
    goto LABEL_6;
  }
  Heap = (void *)RtlAllocateHeap(
                   (__int64)NtCurrentPeb()->ProcessHeap,
                   dword_18015C294 + 786432,
                   4 * (((unsigned __int64)(v2 + 8) + 31) >> 5));
  v8 = Heap;
  if ( Heap )
  {
    qword_18015C1E0 = ((unsigned __int64)(v2 + 8) + 31) >> 5;
    memmove(Heap, Src, (unsigned __int64)(v2 + 7) >> 3);
    if ( Src != &unk_18015C1C8 )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)Src);
    dword_18015C1D0 = v2 + 8;
    Src = v8;
    goto LABEL_6;
  }
  return 3221225495LL;
}
