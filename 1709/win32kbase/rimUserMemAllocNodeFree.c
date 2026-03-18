/*
 * XREFs of rimUserMemAllocNodeFree @ 0x1C008B0E0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 */

void __fastcall rimUserMemAllocNodeFree(struct _RTL_GENERIC_TABLE *Table, __int64 Buffer)
{
  Win32FreePool(Buffer);
}
