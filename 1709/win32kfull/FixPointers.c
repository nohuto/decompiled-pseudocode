/*
 * XREFs of FixPointers @ 0x1C02C6D20
 * Callers:
 *     fsc_MeasureGlyph @ 0x1C02BAC28 (fsc_MeasureGlyph.c)
 *     fsc_SetupScan @ 0x1C02C757C (fsc_SetupScan.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FixPointers(_QWORD *a1)
{
  unsigned __int64 v1; // r8
  _QWORD *v2; // rdx
  __int64 v3; // rax
  __m128i v4; // xmm2
  __int64 result; // rax

  v1 = a1[4];
  v2 = a1;
  v3 = 0LL;
  v4 = _mm_sub_epi64(
         _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1, (__m128i)(unsigned __int64)a1),
         _mm_unpacklo_epi64((__m128i)v1, (__m128i)v1));
  do
  {
    *(__m128i *)&a1[v3] = _mm_add_epi64(v4, _mm_loadu_si128((const __m128i *)&a1[v3]));
    v3 += 2LL;
  }
  while ( v3 < 4 );
  while ( *(_WORD *)*a1 != 0x7FFF )
  {
    a1 = (_QWORD *)(*a1 + 8LL);
    *a1 += (char *)v2 - v1;
  }
  for ( result = v2[1]; *(_WORD *)result != 0x7FFF; result = *(_QWORD *)(result + 8) )
    *(_QWORD *)(result + 8) += (char *)v2 - v1;
  v2[4] = v2;
  return result;
}
