/*
 * XREFs of FastZeroMemory @ 0x1C006CF00
 * Callers:
 *     ?ZeroMultirangeMemory@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C006C234 (-ZeroMultirangeMemory@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 * Callees:
 *     memset @ 0x1C0018400 (memset.c)
 */

__m128i *__fastcall FastZeroMemory(__m128i *a1, size_t Size)
{
  size_t v2; // rbx
  bool v4; // si
  __m128i *result; // rax
  unsigned int v6; // ebx
  __m128i v7; // xmm0
  __int64 v8; // rcx
  __m128i v9; // [rsp+20h] [rbp-18h] BYREF

  v2 = (unsigned int)Size;
  v4 = (Size & 0x3F) == 0;
  if ( ((unsigned __int8)a1 & 0x3F) != 0 || !ExIsProcessorFeaturePresent(0xAu) || !v4 )
    return (__m128i *)memset(a1, 0, v2);
  result = 0LL;
  v6 = (unsigned int)v2 >> 6;
  v9 = 0uLL;
  if ( v6 )
  {
    v7 = _mm_load_si128(&v9);
    result = a1 + 2;
    v8 = v6;
    do
    {
      _mm_stream_si128(result - 2, v7);
      _mm_stream_si128(result - 1, v7);
      _mm_stream_si128(result, v7);
      _mm_stream_si128(result + 1, v7);
      result += 4;
      --v8;
    }
    while ( v8 );
  }
  _mm_mfence();
  return result;
}
