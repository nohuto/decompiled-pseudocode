/*
 * XREFs of RtlCrc32 @ 0x180084900
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

DWORD __cdecl RtlCrc32(const void *Buffer, size_t Size, DWORD InitialCrc)
{
  return sub_180084910(Buffer, Size, InitialCrc, &off_180110850);
}
