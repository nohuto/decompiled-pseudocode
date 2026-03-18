/*
 * XREFs of ?IsValidCheckSum@EDID_PARSER@MonDescParser@@AEBA_NPEAT_EDID_V1_BLOCK@@@Z @ 0x1C0003044
 * Callers:
 *     ?Initialize@EDID_PARSER@MonDescParser@@QEAAJPEAEI@Z @ 0x1C00031D4 (-Initialize@EDID_PARSER@MonDescParser@@QEAAJPEAEI@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall MonDescParser::EDID_PARSER::IsValidCheckSum(MonDescParser::EDID_PARSER *this, union _EDID_V1_BLOCK *a2)
{
  __m128i v2; // xmm1
  __int64 i; // rax
  __m128i v4; // xmm0
  __m128i v5; // xmm0
  __m128i v6; // xmm1
  __m128i v7; // xmm1
  __m128i v8; // xmm1

  v2 = 0LL;
  for ( i = 0LL; i < 128; i += 16LL )
  {
    v4 = _mm_loadu_si128((const __m128i *)((char *)a2 + i));
    v5 = _mm_add_epi8(v4, v2);
    v2 = v5;
  }
  v6 = _mm_add_epi8(v5, _mm_srli_si128(v5, 8));
  v7 = _mm_add_epi8(v6, _mm_srli_si128(v6, 4));
  v8 = _mm_add_epi8(v7, _mm_srli_si128(v7, 2));
  return (unsigned __int8)_mm_cvtsi128_si32(_mm_add_epi8(v8, _mm_srli_si128(v8, 1))) == 0;
}
