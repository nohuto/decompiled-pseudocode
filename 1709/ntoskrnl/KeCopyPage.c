/*
 * XREFs of KeCopyPage @ 0x140184E30
 * Callers:
 *     MiCopyDataPageToImagePage @ 0x140027210 (MiCopyDataPageToImagePage.c)
 *     MiCopyPage @ 0x14005A3E0 (MiCopyPage.c)
 *     MiMakeZeroedPageTableRange @ 0x1400C3F64 (MiMakeZeroedPageTableRange.c)
 *     MiFillCombinePage @ 0x1400CD09C (MiFillCombinePage.c)
 *     MiCopyKstack @ 0x1400D0608 (MiCopyKstack.c)
 *     MiInitializeImageProtos @ 0x1400ECF10 (MiInitializeImageProtos.c)
 *     MiSlowRotateCopy @ 0x14021C23C (MiSlowRotateCopy.c)
 *     MiScrubPage @ 0x140238F30 (MiScrubPage.c)
 *     MiValidateSectionCreate @ 0x1404F6218 (MiValidateSectionCreate.c)
 *     MiRevertRelocatedImagePfn @ 0x140509A84 (MiRevertRelocatedImagePfn.c)
 *     MiCopyDirectMapHeader @ 0x1406E40C0 (MiCopyDirectMapHeader.c)
 *     MxCopyPage @ 0x14082BAD0 (MxCopyPage.c)
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
