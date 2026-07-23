/*
 * XREFs of RtlCrc32 @ 0x18007DDA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

DWORD __cdecl RtlCrc32(const void *Buffer, size_t Size, DWORD InitialCrc)
{
  return sub_18007DDB0(Buffer, Size, InitialCrc, &off_180110870);
}
