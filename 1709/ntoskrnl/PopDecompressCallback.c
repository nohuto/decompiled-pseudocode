/*
 * XREFs of PopDecompressCallback @ 0x140432B00
 * Callers:
 *     <none>
 * Callees:
 *     PopRequestRead @ 0x140434168 (PopRequestRead.c)
 */

__int64 __fastcall PopDecompressCallback(ULONG_PTR a1)
{
  return PopRequestRead(a1);
}
