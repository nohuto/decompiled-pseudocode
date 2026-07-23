/*
 * XREFs of sub_1800DA5D4 @ 0x1800DA5D4
 * Callers:
 *     RtlComputeImportTableHash @ 0x1800DA800 (RtlComputeImportTableHash.c)
 * Callees:
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     RtlAddressInSectionTable @ 0x1800782B0 (RtlAddressInSectionTable.c)
 *     sub_1800DA774 @ 0x1800DA774 (sub_1800DA774.c)
 */

__int64 __fastcall sub_1800DA5D4(__int64 a1, void *a2, _IMAGE_NT_HEADERS64 *a3, ULONG *a4)
{
  ULONG *v7; // rbx
  char *v8; // rax
  char *v9; // rdi
  _QWORD *Heap; // rax

  v7 = (ULONG *)RtlAddressInSectionTable(a3, a2, *a4);
  if ( v7 )
  {
    while ( *(_QWORD *)v7 )
    {
      if ( *(__int64 *)v7 >= 0 )
      {
        v8 = (char *)RtlAddressInSectionTable(a3, a2, *v7);
        if ( !v8 )
          return 3221225611LL;
        v9 = v8 + 2;
        if ( v8 == (char *)-2LL )
          return 3221225611LL;
        Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x10uLL);
        if ( !Heap )
          return 3221225495LL;
        *Heap = 0LL;
        Heap[1] = v9;
        sub_1800DA774(Heap, a1 + 16);
      }
      v7 += 2;
      if ( !v7 )
        return 0LL;
    }
  }
  return 0LL;
}
