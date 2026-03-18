/*
 * XREFs of rimUserMemAllocNodeFree @ 0x1C0004DF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall rimUserMemAllocNodeFree(struct _RTL_GENERIC_TABLE *Table, PVOID Buffer)
{
  Win32FreePool(Buffer);
}
