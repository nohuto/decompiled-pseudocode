/*
 * XREFs of RtlpMakeXpressCallback @ 0x140137838
 * Callers:
 *     RtlCompressBufferXpressLzStandard @ 0x140057A40 (RtlCompressBufferXpressLzStandard.c)
 *     RtlDecompressBufferXpressLzProgress @ 0x140137080 (RtlDecompressBufferXpressLzProgress.c)
 *     RtlCompressBufferXpressHuffMax @ 0x140241D34 (RtlCompressBufferXpressHuffMax.c)
 *     RtlCompressBufferXpressHuffStandard @ 0x1402423BC (RtlCompressBufferXpressHuffStandard.c)
 *     RtlCompressBufferXpressLzMax @ 0x140242B7C (RtlCompressBufferXpressLzMax.c)
 *     RtlDecompressBufferXpressHuffProgress @ 0x140243164 (RtlDecompressBufferXpressHuffProgress.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
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
