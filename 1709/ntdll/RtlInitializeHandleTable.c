/*
 * XREFs of RtlInitializeHandleTable @ 0x180081960
 * Callers:
 *     RtlCreateAtomTableEx @ 0x180070258 (RtlCreateAtomTableEx.c)
 * Callees:
 *     memset @ 0x1800A6C80 (memset.c)
 */

void __cdecl RtlInitializeHandleTable(
        ULONG MaximumNumberOfHandles,
        ULONG SizeOfHandleTableEntry,
        PRTL_HANDLE_TABLE HandleTable)
{
  unsigned __int8 v3; // di
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
