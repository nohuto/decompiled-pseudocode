/*
 * XREFs of PopAvlAllocatePowerRequestStats @ 0x14059E970
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall PopAvlAllocatePowerRequestStats(struct _RTL_AVL_TABLE *Table, CLONG ByteSize)
{
  return ExAllocatePoolWithTag(PagedPool, ByteSize, 0x54515750u);
}
