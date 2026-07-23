/*
 * XREFs of RtlIsValidIndexHandle @ 0x180072A10
 * Callers:
 *     sub_18007210C @ 0x18007210C (sub_18007210C.c)
 *     sub_1800729D8 @ 0x1800729D8 (sub_1800729D8.c)
 * Callees:
 *     RtlIsValidHandle @ 0x180072A50 (RtlIsValidHandle.c)
 */

BOOLEAN __cdecl RtlIsValidIndexHandle(
        PRTL_HANDLE_TABLE HandleTable,
        ULONG HandleIndex,
        PRTL_HANDLE_TABLE_ENTRY *Handle)
{
  _RTL_HANDLE_TABLE_ENTRY *v4; // rbx

  v4 = (PRTL_HANDLE_TABLE_ENTRY)((char *)HandleTable->CommittedHandles
                               + HandleIndex * HandleTable->SizeOfHandleTableEntry);
  if ( !RtlIsValidHandle(HandleTable, v4) )
    return 0;
  *Handle = v4;
  return 1;
}
