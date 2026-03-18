/*
 * XREFs of RtlCompressBuffer @ 0x1400919B0
 * Callers:
 *     ?SmCompressCtxProcessEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PEAX2PEAU_SM_COMPRESS_ENTRY@1@@Z @ 0x1400917BC (-SmCompressCtxProcessEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PE.c)
 *     ?StDmpSinglePageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_WORK_ITEM@1@PEAK@Z @ 0x14009224C (-StDmpSinglePageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_W.c)
 *     EtwpCompressBuffer @ 0x1402B3178 (EtwpCompressBuffer.c)
 *     RtlCompressChunks @ 0x140781B00 (RtlCompressChunks.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

NTSTATUS __stdcall RtlCompressBuffer(
        USHORT CompressionFormatAndEngine,
        PUCHAR UncompressedBuffer,
        ULONG UncompressedBufferSize,
        PUCHAR CompressedBuffer,
        ULONG CompressedBufferSize,
        ULONG UncompressedChunkSize,
        PULONG FinalCompressedSize,
        PVOID WorkSpace)
{
  if ( (unsigned __int8)CompressionFormatAndEngine < 2u )
    return -1073741811;
  if ( (unsigned __int8)CompressionFormatAndEngine > 4u )
    return -1073741217;
  return ((__int64 (__fastcall *)(_QWORD, PUCHAR, ULONG, PUCHAR, ULONG, ULONG, PULONG, PVOID))RtlCompressBufferProcs[(unsigned __int8)CompressionFormatAndEngine])(
           CompressionFormatAndEngine & 0xFF00,
           UncompressedBuffer,
           UncompressedBufferSize,
           CompressedBuffer,
           CompressedBufferSize,
           UncompressedChunkSize,
           FinalCompressedSize,
           WorkSpace);
}
