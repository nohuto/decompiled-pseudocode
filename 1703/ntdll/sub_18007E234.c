/*
 * XREFs of sub_18007E234 @ 0x18007E234
 * Callers:
 *     sub_18001A58C @ 0x18001A58C (sub_18001A58C.c)
 *     sub_18007E234 @ 0x18007E234 (sub_18007E234.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     sub_18007E234 @ 0x18007E234 (sub_18007E234.c)
 */

void __fastcall sub_18007E234(__int64 a1, int a2)
{
  __int64 *i; // rax
  _DWORD *Heap; // rax
  _QWORD *v6; // rdi
  _QWORD *v7; // rbx

  if ( *(_DWORD *)(a1 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)a1 - 56LL) & 0x20) == 0 )
  {
    for ( i = *(__int64 **)(a1 + 16); i; i = (__int64 *)*i )
    {
      if ( *((_DWORD *)i + 2) == a2 )
        return;
    }
    Heap = RtlAllocateHeap(HeapHandle, 0, 0x10uLL);
    if ( Heap )
    {
      Heap[2] = a2;
      *(_QWORD *)Heap = *(_QWORD *)(a1 + 16);
      v6 = *(_QWORD **)(a1 + 40);
      *(_QWORD *)(a1 + 16) = Heap;
      if ( v6 )
      {
        v7 = v6;
        do
        {
          v7 = (_QWORD *)*v7;
          sub_18007E234(v7[1]);
        }
        while ( v7 != v6 );
      }
    }
  }
}
