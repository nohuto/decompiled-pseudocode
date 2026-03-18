/*
 * XREFs of KeZeroPages @ 0x140184D60
 * Callers:
 *     MiZeroPage @ 0x14004E9F0 (MiZeroPage.c)
 *     MiZeroPhysicalPage @ 0x140075D00 (MiZeroPhysicalPage.c)
 *     MiMakePageAvoidRead @ 0x140076C10 (MiMakePageAvoidRead.c)
 *     MiZeroInParallelWorker @ 0x1400CC570 (MiZeroInParallelWorker.c)
 *     MiZeroLargePage @ 0x1400CFBFC (MiZeroLargePage.c)
 *     MiFreePagesFromMdl @ 0x1400E10B0 (MiFreePagesFromMdl.c)
 *     MiPageNotZero @ 0x14022A530 (MiPageNotZero.c)
 *     MxMapVa @ 0x14082B594 (MxMapVa.c)
 *     MxFillPhysicalPage @ 0x14082C5B4 (MxFillPhysicalPage.c)
 *     MiMapBBTMemory @ 0x14085826C (MiMapBBTMemory.c)
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
