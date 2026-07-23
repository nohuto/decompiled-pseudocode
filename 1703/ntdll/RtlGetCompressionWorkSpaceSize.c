/*
 * XREFs of RtlGetCompressionWorkSpaceSize @ 0x1800836A0
 * Callers:
 *     sub_180004B3C @ 0x180004B3C (sub_180004B3C.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlGetCompressionWorkSpaceSize(
        USHORT CompressionFormatAndEngine,
        PULONG CompressBufferWorkSpaceSize,
        PULONG CompressFragmentWorkSpaceSize)
{
  if ( (unsigned __int8)CompressionFormatAndEngine < 2u )
    return -1073741811;
  if ( (unsigned __int8)CompressionFormatAndEngine > 4u )
    return -1073741217;
  return qword_180110F30[(unsigned __int8)CompressionFormatAndEngine](
           CompressionFormatAndEngine & 0xFF00,
           CompressBufferWorkSpaceSize,
           CompressFragmentWorkSpaceSize);
}
