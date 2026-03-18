/*
 * XREFs of rimUserMemAllocNodeAlloc @ 0x1C0105800
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall rimUserMemAllocNodeAlloc(struct _RTL_AVL_TABLE *Table, CLONG ByteSize)
{
  return Win32AllocPool(ByteSize, 0x656D7552u);
}
