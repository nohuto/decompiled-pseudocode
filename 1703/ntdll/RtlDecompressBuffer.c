/*
 * XREFs of RtlDecompressBuffer @ 0x18008F790
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 */

NTSTATUS __cdecl RtlDecompressBuffer(
        USHORT CompressionFormat,
        PUCHAR UncompressedBuffer,
        ULONG UncompressedBufferSize,
        PUCHAR CompressedBuffer,
        ULONG CompressedBufferSize,
        PULONG FinalUncompressedSize)
{
  if ( (unsigned __int8)CompressionFormat < 2u )
    return -1073741811;
  if ( (unsigned __int8)CompressionFormat > 4u )
    return -1073741217;
  return qword_180111210[(unsigned __int8)CompressionFormat](
           UncompressedBuffer,
           UncompressedBufferSize,
           CompressedBuffer,
           CompressedBufferSize,
           0,
           FinalUncompressedSize,
           0LL);
}
