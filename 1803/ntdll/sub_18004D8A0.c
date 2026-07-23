/*
 * XREFs of sub_18004D8A0 @ 0x18004D8A0
 * Callers:
 *     RtlAddAtomToAtomTable_0 @ 0x18004D0E8 (RtlAddAtomToAtomTable_0.c)
 * Callees:
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 */

_QWORD *__fastcall sub_18004D8A0(unsigned int a1, _QWORD *a2)
{
  _QWORD *Heap; // rax
  _QWORD *v4; // rcx
  _WORD *v5; // rax

  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, a1 + 20LL);
  v4 = Heap;
  if ( !Heap )
    return 0LL;
  *Heap = 0LL;
  v5 = (_WORD *)Heap + 6;
  *v5 = 1;
  *((_WORD *)v4 + 7) = 0;
  *a2 = v5;
  return v4;
}
