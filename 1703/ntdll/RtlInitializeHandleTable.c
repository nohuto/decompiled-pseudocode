/*
 * XREFs of RtlInitializeHandleTable @ 0x1800833B0
 * Callers:
 *     sub_180071FB8 @ 0x180071FB8 (sub_180071FB8.c)
 * Callees:
 *     memset @ 0x1800ABDC0 (memset.c)
 */

void __cdecl RtlInitializeHandleTable(
        ULONG MaximumNumberOfHandles,
        ULONG SizeOfHandleTableEntry,
        PRTL_HANDLE_TABLE HandleTable)
{
  ULONG v3; // esi
  ULONG v5; // ebx

  v3 = 0;
  v5 = SizeOfHandleTableEntry;
  if ( (SizeOfHandleTableEntry & 0x80000000) != 0 )
  {
    v5 = SizeOfHandleTableEntry & 0x7FFFFFFF;
    v3 = 1;
  }
  memset(HandleTable, 0, sizeof(_RTL_HANDLE_TABLE));
  HandleTable->MaximumNumberOfHandles = MaximumNumberOfHandles;
  HandleTable->SizeOfHandleTableEntry = v5;
  HandleTable->Reserved[0] = v3;
}
