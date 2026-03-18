/*
 * XREFs of PiDqAllocateGenericTableEntry @ 0x140457A10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __fastcall PiDqAllocateGenericTableEntry(struct _RTL_AVL_TABLE *Table, CLONG ByteSize)
{
  return ExAllocatePoolWithTag(PagedPool, ByteSize, 0x58706E50u);
}
