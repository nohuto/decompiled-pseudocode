/*
 * XREFs of RtlCrc64 @ 0x1800F1D00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONGLONG __cdecl RtlCrc64(const void *Buffer, size_t Size, ULONGLONG InitialCrc)
{
  return sub_180084910((unsigned __int64)Buffer, Size, InitialCrc, &off_180111500);
}
