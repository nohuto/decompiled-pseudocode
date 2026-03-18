/*
 * XREFs of KeCopyPage @ 0x1401AEA50
 * Callers:
 *     MiCopyKstack @ 0x14000265C (MiCopyKstack.c)
 *     MiCopyPage @ 0x14002ED70 (MiCopyPage.c)
 *     MiInitializeImageProtos @ 0x14004DF48 (MiInitializeImageProtos.c)
 *     MiCopyDataPageToImagePage @ 0x14004F194 (MiCopyDataPageToImagePage.c)
 *     MiCreateSystemPageTable @ 0x140070FD0 (MiCreateSystemPageTable.c)
 *     MiReplacePageOfProtoPool @ 0x1400BF848 (MiReplacePageOfProtoPool.c)
 *     MiFillCombinePage @ 0x140138480 (MiFillCombinePage.c)
 *     MiSlowRotateCopy @ 0x140258394 (MiSlowRotateCopy.c)
 *     MiScrubPage @ 0x140270A34 (MiScrubPage.c)
 *     MiValidateSectionCreate @ 0x14053BB84 (MiValidateSectionCreate.c)
 *     MiRevertRelocatedImagePfn @ 0x1405BA78C (MiRevertRelocatedImagePfn.c)
 *     MiCopyDirectMapHeader @ 0x14074E4AC (MiCopyDirectMapHeader.c)
 *     MxCopyPage @ 0x14089B084 (MxCopyPage.c)
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
    _mm_prefetch((const char *)(v3 + v4), 0);
    _mm_prefetch((const char *)(v3 + v4 + 64), 0);
    _mm_prefetch((const char *)(v3 + v4 + 128), 0);
    _mm_prefetch((const char *)(v3 + v4 + 192), 0);
    v4 += 256LL;
  }
  while ( v4 );
  result = -4096LL;
  do
  {
    v6 = *(__m128i *)(v3 + result + 16);
    v7 = *(__m128i *)(v3 + result + 32);
    v8 = *(__m128i *)(v3 + result + 48);
    _mm_stream_si128((__m128i *)(v2 + result), *(__m128i *)(v3 + result));
    _mm_stream_si128((__m128i *)(v2 + result + 16), v6);
    _mm_stream_si128((__m128i *)(v2 + result + 32), v7);
    _mm_stream_si128((__m128i *)(v2 + result + 48), v8);
    result += 64LL;
  }
  while ( result );
  _mm_sfence();
  return result;
}
