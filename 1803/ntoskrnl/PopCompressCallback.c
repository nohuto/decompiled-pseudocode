/*
 * XREFs of PopCompressCallback @ 0x140474390
 * Callers:
 *     <none>
 * Callees:
 *     PopRequestWrite @ 0x1404743B4 (PopRequestWrite.c)
 */

__int64 __fastcall PopCompressCallback(ULONG_PTR a1)
{
  return PopRequestWrite(a1);
}
