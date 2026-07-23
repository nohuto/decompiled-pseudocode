/*
 * XREFs of sub_1800E0C98 @ 0x1800E0C98
 * Callers:
 *     RtlComputeImportTableHash @ 0x1800E0F80 (RtlComputeImportTableHash.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     RtlAddressInSectionTable @ 0x18007FD90 (RtlAddressInSectionTable.c)
 *     sub_1800E0EF4 @ 0x1800E0EF4 (sub_1800E0EF4.c)
 */

__int64 __fastcall sub_1800E0C98(__int64 a1, void *a2, _IMAGE_NT_HEADERS64 *a3, ULONG *a4)
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
      sub_1800E0EF4(Heap, a1 + 16);
    }
  }
  return 0LL;
}
