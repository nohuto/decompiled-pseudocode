/*
 * XREFs of RtlFreeHandle @ 0x18004CFB0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1800A16C0 (memset.c)
 */

BOOLEAN __cdecl RtlFreeHandle(PRTL_HANDLE_TABLE HandleTable, PRTL_HANDLE_TABLE_ENTRY Handle)
{
  BOOLEAN result; // al

  memset(Handle, 0, HandleTable->SizeOfHandleTableEntry);
  *Handle = (_RTL_HANDLE_TABLE_ENTRY)HandleTable->FreeHandles;
  result = 1;
  HandleTable->FreeHandles = Handle;
  return result;
}
