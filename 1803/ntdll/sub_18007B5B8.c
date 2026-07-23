/*
 * XREFs of sub_18007B5B8 @ 0x18007B5B8
 * Callers:
 *     sub_18002DF14 @ 0x18002DF14 (sub_18002DF14.c)
 *     sub_18007B5B8 @ 0x18007B5B8 (sub_18007B5B8.c)
 * Callees:
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     sub_18007B5B8 @ 0x18007B5B8 (sub_18007B5B8.c)
 */

void __fastcall sub_18007B5B8(__int64 a1, int a2)
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
          sub_18007B5B8(v7[1]);
        }
        while ( v7 != v6 );
      }
    }
  }
}
