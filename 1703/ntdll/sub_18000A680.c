/*
 * XREFs of sub_18000A680 @ 0x18000A680
 * Callers:
 *     sub_18000A268 @ 0x18000A268 (sub_18000A268.c)
 * Callees:
 *     memset @ 0x1800ABDC0 (memset.c)
 */

_QWORD *__fastcall sub_18000A680(unsigned __int64 a1, __int64 a2, __int128 *a3)
{
  __m128i v6; // xmm6
  __int128 v7; // xmm0
  __int64 v8; // rcx
  __int128 v9; // xmm1
  __int64 v10; // rax
  __m128i v11; // xmm1
  __int64 v12; // rax
  _QWORD *result; // rax

  v6 = _mm_unpacklo_epi64((__m128i)a1, (__m128i)a1);
  memset((void *)a1, 0, 0x70uLL);
  v7 = *a3;
  v8 = qword_18015BFA8;
  v9 = a3[1];
  *(_DWORD *)(a1 + 104) = 0;
  v10 = 0LL;
  *(_OWORD *)(a1 + 64) = v7;
  *(_QWORD *)(a1 + 56) = a2;
  *(_QWORD *)&v7 = *((_QWORD *)a3 + 4);
  *(_OWORD *)(a1 + 80) = v9;
  *(_QWORD *)(a1 + 96) = v7;
  v11 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v8, (__m128i)(unsigned __int64)v8);
  do
  {
    *(__m128i *)(a1 + 8 * v10 + 64) = _mm_xor_si128(
                                        _mm_xor_si128(_mm_loadu_si128((const __m128i *)(a1 + 8 * v10 + 64)), v11),
                                        v6);
    v10 += 2LL;
  }
  while ( v10 < 4 );
  v12 = *(_QWORD *)(a1 + 96);
  if ( v12 )
    *(_QWORD *)(a1 + 96) = a1 ^ v8 ^ v12;
  result = (_QWORD *)(a1 + 24);
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 32) = a1 + 24;
  *(_QWORD *)(a1 + 24) = a1 + 24;
  return result;
}
