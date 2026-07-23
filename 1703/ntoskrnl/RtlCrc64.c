/*
 * XREFs of RtlCrc64 @ 0x1401334A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONGLONG __cdecl RtlCrc64(const void *Buffer, size_t Size, ULONGLONG InitialCrc)
{
  return RtlpComputeCrcInternal(Buffer, Size, InitialCrc, &Crc64Ctrl);
}
