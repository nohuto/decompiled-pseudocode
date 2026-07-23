/*
 * XREFs of sub_1800DA518 @ 0x1800DA518
 * Callers:
 *     RtlComputeImportTableHash @ 0x1800DA800 (RtlComputeImportTableHash.c)
 * Callees:
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     RtlAddressInSectionTable @ 0x1800782B0 (RtlAddressInSectionTable.c)
 *     sub_1800DA774 @ 0x1800DA774 (sub_1800DA774.c)
 */

__int64 __fastcall sub_1800DA518(__int64 a1, void *a2, _IMAGE_NT_HEADERS64 *a3, ULONG *a4)
{
  signed int *i; // rbx
  signed int v8; // r8d
  char *v9; // rax
  char *v10; // rdi
  _QWORD *Heap; // rax

  for ( i = (signed int *)RtlAddressInSectionTable(a3, a2, *a4); i; ++i )
  {
    v8 = *i;
    if ( !*i )
      break;
    if ( v8 >= 0 )
    {
      v9 = (char *)RtlAddressInSectionTable(a3, a2, v8);
      if ( !v9 )
        return 3221225611LL;
      v10 = v9 + 2;
      if ( v9 == (char *)-2LL )
        return 3221225611LL;
      Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x10uLL);
      if ( !Heap )
        return 3221225495LL;
      *Heap = 0LL;
      Heap[1] = v10;
      sub_1800DA774(Heap, a1 + 16);
    }
  }
  return 0LL;
}
