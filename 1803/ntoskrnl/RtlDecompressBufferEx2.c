/*
 * XREFs of RtlDecompressBufferEx2 @ 0x140144D90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

NTSTATUS __cdecl RtlDecompressBufferEx2(
        USHORT CompressionFormat,
        PUCHAR UncompressedBuffer,
        ULONG UncompressedBufferSize,
        PUCHAR CompressedBuffer,
        ULONG CompressedBufferSize,
        ULONG UncompressedChunkSize,
        PULONG FinalUncompressedSize,
        PVOID WorkSpace)
{
  if ( (unsigned __int8)CompressionFormat < 2u )
    return -1073741811;
  if ( (unsigned __int8)CompressionFormat > 4u )
    return -1073741217;
  return ((__int64 (__fastcall *)(PUCHAR, _QWORD, PUCHAR, _QWORD, ULONG, PULONG, PVOID))RtlDecompressBufferProcs[(unsigned __int8)CompressionFormat])(
           UncompressedBuffer,
           UncompressedBufferSize,
           CompressedBuffer,
           CompressedBufferSize,
           UncompressedChunkSize,
           FinalUncompressedSize,
           WorkSpace);
}
