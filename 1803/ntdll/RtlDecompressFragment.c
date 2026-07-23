/*
 * XREFs of RtlDecompressFragment @ 0x1800EDFB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 */

NTSTATUS __cdecl RtlDecompressFragment(
        USHORT CompressionFormat,
        PUCHAR UncompressedFragment,
        ULONG UncompressedFragmentSize,
        PUCHAR CompressedBuffer,
        ULONG CompressedBufferSize,
        ULONG FragmentOffset,
        PULONG FinalUncompressedSize,
        PVOID WorkSpace)
{
  if ( (unsigned __int8)CompressionFormat < 2u )
    return -1073741811;
  if ( (unsigned __int8)CompressionFormat <= 4u )
    return qword_1801110E8[(unsigned __int8)CompressionFormat](
             UncompressedFragment,
             UncompressedFragmentSize,
             CompressedBuffer,
             CompressedBufferSize,
             FragmentOffset,
             0,
             FinalUncompressedSize,
             WorkSpace);
  return -1073741217;
}
