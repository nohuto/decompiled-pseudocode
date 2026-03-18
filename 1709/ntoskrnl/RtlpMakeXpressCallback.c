/*
 * XREFs of RtlpMakeXpressCallback @ 0x14025A984
 * Callers:
 *     RtlCompressBufferXpressLzStandard @ 0x140002F00 (RtlCompressBufferXpressLzStandard.c)
 *     RtlCompressBufferXpressHuffMax @ 0x140258244 (RtlCompressBufferXpressHuffMax.c)
 *     RtlCompressBufferXpressHuffStandard @ 0x1402588CC (RtlCompressBufferXpressHuffStandard.c)
 *     RtlCompressBufferXpressLzMax @ 0x14025908C (RtlCompressBufferXpressLzMax.c)
 *     RtlDecompressBufferXpressHuffProgress @ 0x140259734 (RtlDecompressBufferXpressHuffProgress.c)
 *     RtlDecompressBufferXpressLzProgress @ 0x14025A0D0 (RtlDecompressBufferXpressLzProgress.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

unsigned __int64 __fastcall RtlpMakeXpressCallback(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 result; // rax

  (*(void (__fastcall **)(_QWORD))a1)(*(_QWORD *)(a1 + 8));
  result = a3 + *(unsigned int *)(a1 + 16);
  if ( a2 < result )
    return a2;
  return result;
}
