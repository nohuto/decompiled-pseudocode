/*
 * XREFs of RtlDecompressBufferProgress @ 0x140259674
 * Callers:
 *     PopDecompressHiberBlocks @ 0x140432B24 (PopDecompressHiberBlocks.c)
 * Callees:
 *     RtlDecompressBufferXpressHuffProgress @ 0x140259734 (RtlDecompressBufferXpressHuffProgress.c)
 *     RtlDecompressBufferXpressLzProgress @ 0x14025A0D0 (RtlDecompressBufferXpressLzProgress.c)
 */

__int64 __fastcall RtlDecompressBufferProgress(
        char a1,
        int a2,
        int a3,
        int a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  if ( a1 == 3 )
    return RtlDecompressBufferXpressLzProgress(a2, a3, a4, a5, a6, a8, a9);
  if ( a1 == 4 )
    return RtlDecompressBufferXpressHuffProgress(a2, a3, a4, a5, a6, a7, a8, a9);
  return 3221226079LL;
}
