/*
 * XREFs of KeZeroPages @ 0x1401852C0
 * Callers:
 *     MiZeroInParallelWorker @ 0x14007CF90 (MiZeroInParallelWorker.c)
 *     MiZeroPhysicalPage @ 0x1400A59A0 (MiZeroPhysicalPage.c)
 *     MiFreePagesFromMdl @ 0x1400B3890 (MiFreePagesFromMdl.c)
 *     MiZeroLargePage @ 0x1400B5CC0 (MiZeroLargePage.c)
 *     MiZeroSinglePage @ 0x1400C6290 (MiZeroSinglePage.c)
 *     MiPageNotZero @ 0x14021F048 (MiPageNotZero.c)
 *     MiZeroAndConvertLargePage @ 0x140225624 (MiZeroAndConvertLargePage.c)
 *     MxMapVa @ 0x1408015E0 (MxMapVa.c)
 *     MxFillPhysicalPage @ 0x1408025BC (MxFillPhysicalPage.c)
 *     MiMapBBTMemory @ 0x14080308C (MiMapBBTMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeZeroPages(int *a1, unsigned __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // rdx

  result = 0LL;
  v3 = a2 >> 7;
  do
  {
    _mm_stream_si32(a1, 0);
    _mm_stream_si32(a1 + 2, 0);
    _mm_stream_si32(a1 + 4, 0);
    _mm_stream_si32(a1 + 6, 0);
    _mm_stream_si32(a1 + 8, 0);
    _mm_stream_si32(a1 + 10, 0);
    _mm_stream_si32(a1 + 12, 0);
    _mm_stream_si32(a1 + 14, 0);
    a1 += 32;
    _mm_stream_si32(a1 - 16, 0);
    _mm_stream_si32(a1 - 14, 0);
    _mm_stream_si32(a1 - 12, 0);
    _mm_stream_si32(a1 - 10, 0);
    _mm_stream_si32(a1 - 8, 0);
    _mm_stream_si32(a1 - 6, 0);
    _mm_stream_si32(a1 - 4, 0);
    _mm_stream_si32(a1 - 2, 0);
    --v3;
  }
  while ( v3 );
  _mm_sfence();
  return result;
}
