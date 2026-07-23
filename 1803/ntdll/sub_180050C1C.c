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

__int64 __fastcall sub_180050C1C(ULONG *a1, _BYTE *a2)
{
  ULONG SizeOfBitMap; // ebx
  ULONG ClearBitsAndSet; // eax
  ULONG *Heap; // rax
  ULONG *v8; // r14

  SizeOfBitMap = BitMapHeader.SizeOfBitMap;
  if ( !BitMapHeader.SizeOfBitMap )
  {
    BitMapHeader.SizeOfBitMap = 8;
    BitMapHeader.Buffer = (PULONG)&unk_18015C1C8;
    qword_18015C1E0 = 1LL;
LABEL_6:
    RtlClearBits(&BitMapHeader, SizeOfBitMap + 1, 7u);
    _bittestandset((signed __int32 *)BitMapHeader.Buffer, SizeOfBitMap);
    *a1 = SizeOfBitMap;
    *a2 = 1;
    return 0LL;
  }
  ClearBitsAndSet = RtlFindClearBitsAndSet(&BitMapHeader, 1u, 0);
  if ( ClearBitsAndSet != -1 )
  {
    *a1 = ClearBitsAndSet;
    *a2 = 0;
    return 0LL;
  }
  if ( ((unsigned __int64)(BitMapHeader.SizeOfBitMap + 8) + 31) >> 5 <= qword_18015C1E0 )
  {
    BitMapHeader.SizeOfBitMap += 8;
    goto LABEL_6;
  }
  Heap = (ULONG *)RtlAllocateHeap(
                    NtCurrentPeb()->ProcessHeap,
                    Flags + 786432,
                    4 * (((unsigned __int64)(SizeOfBitMap + 8) + 31) >> 5));
  v8 = Heap;
  if ( Heap )
  {
    qword_18015C1E0 = ((unsigned __int64)(SizeOfBitMap + 8) + 31) >> 5;
    memmove(Heap, BitMapHeader.Buffer, (unsigned __int64)(SizeOfBitMap + 7) >> 3);
    if ( (_UNKNOWN *)BitMapHeader.Buffer != &unk_18015C1C8 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BitMapHeader.Buffer);
    BitMapHeader.SizeOfBitMap = SizeOfBitMap + 8;
    BitMapHeader.Buffer = v8;
    goto LABEL_6;
  }
  return 3221225495LL;
}
