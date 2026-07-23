/*
 * XREFs of sub_1800593D8 @ 0x1800593D8
 * Callers:
 *     sub_180059294 @ 0x180059294 (sub_180059294.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     RtlFindClearBitsAndSet @ 0x180059710 (RtlFindClearBitsAndSet.c)
 *     RtlClearBits @ 0x180059C40 (RtlClearBits.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 */

__int64 __fastcall sub_1800593D8(ULONG *a1, _BYTE *a2)
{
  ULONG SizeOfBitMap; // ebx
  ULONG ClearBitsAndSet; // eax
  ULONG *Heap; // rax
  ULONG *v8; // r14

  SizeOfBitMap = BitMapHeader.SizeOfBitMap;
  if ( !BitMapHeader.SizeOfBitMap )
  {
    BitMapHeader.SizeOfBitMap = 8;
    BitMapHeader.Buffer = (PULONG)&unk_18015B1A8;
    qword_18015B1C0 = 1LL;
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
  if ( ((unsigned __int64)(BitMapHeader.SizeOfBitMap + 8) + 31) >> 5 <= qword_18015B1C0 )
  {
    BitMapHeader.SizeOfBitMap += 8;
    goto LABEL_6;
  }
  Heap = (ULONG *)RtlAllocateHeap(
                    NtCurrentPeb()->ProcessHeap,
                    dword_18015B268 + 786432,
                    4 * (((unsigned __int64)(SizeOfBitMap + 8) + 31) >> 5));
  v8 = Heap;
  if ( Heap )
  {
    qword_18015B1C0 = ((unsigned __int64)(SizeOfBitMap + 8) + 31) >> 5;
    memmove(Heap, BitMapHeader.Buffer, (unsigned __int64)(SizeOfBitMap + 7) >> 3);
    if ( (_UNKNOWN *)BitMapHeader.Buffer != &unk_18015B1A8 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BitMapHeader.Buffer);
    BitMapHeader.SizeOfBitMap = SizeOfBitMap + 8;
    BitMapHeader.Buffer = v8;
    goto LABEL_6;
  }
  return 3221225495LL;
}
