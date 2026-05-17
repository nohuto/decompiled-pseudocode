/*
 * XREFs of RtlCreateBoundaryDescriptor @ 0x18007C000
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     memmove @ 0x1800A6940 (memmove.c)
 */

_DWORD *__fastcall RtlCreateBoundaryDescriptor(const void **a1, int a2)
{
  char v2; // si
  unsigned int v4; // ebp
  _DWORD *Heap; // rax
  _DWORD *v6; // rbx
  int v7; // eax

  v2 = a2;
  if ( (a2 & 0xFFFFFFFE) != 0 )
    return 0LL;
  if ( !*(_WORD *)a1 )
    return 0LL;
  if ( (*(_BYTE *)a1 & 1) != 0 )
    return 0LL;
  v4 = (*(unsigned __int16 *)a1 + 31) & 0xFFFFFFF8;
  Heap = (_DWORD *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v4);
  v6 = Heap;
  if ( !Heap )
    return 0LL;
  Heap[1] = 1;
  Heap[2] = v4;
  *Heap = 1;
  if ( (v2 & 1) != 0 )
    Heap[3] = 1;
  v7 = *(unsigned __int16 *)a1;
  v6[4] = 1;
  v6[5] = v7 + 8;
  memmove(v6 + 6, a1[1], *(unsigned __int16 *)a1);
  return v6;
}
