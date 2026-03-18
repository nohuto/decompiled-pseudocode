/*
 * XREFs of KeZeroPages @ 0x1401AE9B0
 * Callers:
 *     MiZeroPage @ 0x1400299B0 (MiZeroPage.c)
 *     MiGetPoolPages @ 0x1400F0860 (MiGetPoolPages.c)
 *     MiZeroPhysicalPage @ 0x14010F800 (MiZeroPhysicalPage.c)
 *     MiFreePagesFromMdl @ 0x140136794 (MiFreePagesFromMdl.c)
 *     MiZeroLargePage @ 0x140138310 (MiZeroLargePage.c)
 *     MiZeroInParallelWorker @ 0x1401386E0 (MiZeroInParallelWorker.c)
 *     MiPageNotZero @ 0x140265130 (MiPageNotZero.c)
 *     MxMapVa @ 0x14089ABC4 (MxMapVa.c)
 *     MxFillPhysicalPage @ 0x14089BA60 (MxFillPhysicalPage.c)
 *     MiMapBBTMemory @ 0x14089D6E4 (MiMapBBTMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeZeroPages(__m128i *a1, unsigned __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // rdx

  result = 128LL;
  v3 = a2 >> 7;
  do
  {
    _mm_stream_si128(a1, (__m128i)0LL);
    _mm_stream_si128(a1 + 1, (__m128i)0LL);
    _mm_stream_si128(a1 + 2, (__m128i)0LL);
    _mm_stream_si128(a1 + 3, (__m128i)0LL);
    a1 += 8;
    _mm_stream_si128(a1 - 4, (__m128i)0LL);
    _mm_stream_si128(a1 - 3, (__m128i)0LL);
    --v3;
    _mm_stream_si128(a1 - 2, (__m128i)0LL);
    _mm_stream_si128(a1 - 1, (__m128i)0LL);
  }
  while ( v3 );
  _mm_sfence();
  return result;
}
