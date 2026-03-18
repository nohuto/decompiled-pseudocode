/*
 * XREFs of KeCopyPage @ 0x140185390
 * Callers:
 *     MiFillCombinePage @ 0x140025418 (MiFillCombinePage.c)
 *     MiCopyKstack @ 0x140027EA0 (MiCopyKstack.c)
 *     MiCopyDataPageToImagePage @ 0x140095B10 (MiCopyDataPageToImagePage.c)
 *     MiCopyPage @ 0x1400A0320 (MiCopyPage.c)
 *     MiMakeZeroedPageTableRange @ 0x140109D80 (MiMakeZeroedPageTableRange.c)
 *     MiInitializeImageProtos @ 0x14010A158 (MiInitializeImageProtos.c)
 *     MiSlowRotateCopy @ 0x140214204 (MiSlowRotateCopy.c)
 *     MiScrubPage @ 0x140226824 (MiScrubPage.c)
 *     MiValidateSectionCreate @ 0x140422CC0 (MiValidateSectionCreate.c)
 *     MiRevertRelocatedImagePfn @ 0x140423750 (MiRevertRelocatedImagePfn.c)
 *     MiCopyDirectMapHeader @ 0x1406B74BC (MiCopyDirectMapHeader.c)
 *     MxCopyPage @ 0x140801AEC (MxCopyPage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeCopyPage(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 result; // rax
  __m128i v6; // xmm1
  __m128i v7; // xmm2
  __m128i v8; // xmm3

  v2 = a1 + 4096;
  v3 = a2 + 4096;
  v4 = -4096LL;
  do
  {
    _mm_prefetch((const char *)(v4 + v3), 0);
    _mm_prefetch((const char *)(v4 + v3 + 64), 0);
    _mm_prefetch((const char *)(v4 + v3 + 128), 0);
    _mm_prefetch((const char *)(v4 + v3 + 192), 0);
    v4 += 256LL;
  }
  while ( v4 );
  result = -4096LL;
  do
  {
    v6 = *(__m128i *)(result + v3 + 16);
    v7 = *(__m128i *)(result + v3 + 32);
    v8 = *(__m128i *)(result + v3 + 48);
    _mm_stream_si128((__m128i *)(result + v2), *(__m128i *)(result + v3));
    _mm_stream_si128((__m128i *)(result + v2 + 16), v6);
    _mm_stream_si128((__m128i *)(result + v2 + 32), v7);
    _mm_stream_si128((__m128i *)(result + v2 + 48), v8);
    result += 64LL;
  }
  while ( result );
  _mm_sfence();
  return result;
}
