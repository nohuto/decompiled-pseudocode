/*
 * XREFs of RtlInitializeHandleTable @ 0x18007EE30
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1800A16C0 (memset.c)
 */

void __cdecl RtlInitializeHandleTable(
        ULONG MaximumNumberOfHandles,
        ULONG SizeOfHandleTableEntry,
        PRTL_HANDLE_TABLE HandleTable)
{
  ULONG v6; // eax

  memset(HandleTable, 0, sizeof(_RTL_HANDLE_TABLE));
  HandleTable->MaximumNumberOfHandles = MaximumNumberOfHandles;
  v6 = SizeOfHandleTableEntry & 0x7FFFFFFF;
  if ( (SizeOfHandleTableEntry & 0x80000000) == 0 )
    v6 = SizeOfHandleTableEntry;
  HandleTable->Reserved[0] = SizeOfHandleTableEntry >> 31;
  HandleTable->SizeOfHandleTableEntry = v6;
}
