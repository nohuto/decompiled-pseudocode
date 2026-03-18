/*
 * XREFs of PopDecompressCallback @ 0x140486030
 * Callers:
 *     <none>
 * Callees:
 *     PopRequestRead @ 0x1404865F4 (PopRequestRead.c)
 */

__int64 __fastcall PopDecompressCallback(ULONG_PTR a1)
{
  return PopRequestRead(a1);
}
