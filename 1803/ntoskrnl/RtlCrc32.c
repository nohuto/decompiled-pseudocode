/*
 * XREFs of RtlCrc32 @ 0x1402894C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpComputeCrcInternal @ 0x140149C5C (RtlpComputeCrcInternal.c)
 */

DWORD __cdecl RtlCrc32(const void *Buffer, size_t Size, DWORD InitialCrc)
{
  return RtlpComputeCrcInternal((unsigned __int64)Buffer, Size, InitialCrc, &Crc32Ctrl);
}
