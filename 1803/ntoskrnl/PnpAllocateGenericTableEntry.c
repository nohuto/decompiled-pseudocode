/*
 * XREFs of PnpAllocateGenericTableEntry @ 0x1405E85C0
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall PnpAllocateGenericTableEntry(struct _RTL_AVL_TABLE *Table, CLONG ByteSize)
{
  return ExAllocatePoolWithTag(PagedPool, ByteSize, 0x75737050u);
}
