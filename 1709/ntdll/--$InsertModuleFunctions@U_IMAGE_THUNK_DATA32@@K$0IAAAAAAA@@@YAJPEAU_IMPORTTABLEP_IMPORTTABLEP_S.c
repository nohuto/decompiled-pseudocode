/*
 * XREFs of ??$InsertModuleFunctions@U_IMAGE_THUNK_DATA32@@K$0IAAAAAAA@@@YAJPEAU_IMPORTTABLEP_IMPORTTABLEP_SORTED_LIST_ENTRY@@PEAXPEAU_IMAGE_NT_HEADERS64@@PEFAU_IMAGE_IMPORT_DESCRIPTOR@@@Z @ 0x1800DF60C
 * Callers:
 *     RtlComputeImportTableHash @ 0x1800DF8F0 (RtlComputeImportTableHash.c)
 * Callees:
 *     RtlAddressInSectionTable @ 0x180020840 (RtlAddressInSectionTable.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     ImportTablepInsertFunctionSorted @ 0x1800DF868 (ImportTablepInsertFunctionSorted.c)
 */

__int64 __fastcall InsertModuleFunctions<_IMAGE_THUNK_DATA32,unsigned long,2147483648>(__int64 a1)
{
  int *v2; // rbx
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rdi
  _QWORD *Heap; // rax

  v2 = (int *)RtlAddressInSectionTable();
  if ( v2 )
  {
    while ( *v2 )
    {
      if ( *v2 >= 0 )
      {
        v3 = RtlAddressInSectionTable();
        if ( !v3 )
          return 3221225611LL;
        v4 = v3 + 2;
        if ( v3 == -2LL )
          return 3221225611LL;
        Heap = (_QWORD *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 16LL);
        if ( !Heap )
          return 3221225495LL;
        *Heap = 0LL;
        Heap[1] = v4;
        ImportTablepInsertFunctionSorted(Heap, a1 + 16);
      }
      if ( !++v2 )
        return 0LL;
    }
  }
  return 0LL;
}
