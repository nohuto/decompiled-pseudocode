/*
 * XREFs of mitUserModeHandleEntryAlloc @ 0x1C00917B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __fastcall mitUserModeHandleEntryAlloc(struct _RTL_AVL_TABLE *Table, CLONG ByteSize)
{
  return Win32AllocPoolZInit(ByteSize, 1885947971LL);
}
