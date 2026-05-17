/*
 * XREFs of RtlpHpVsContextInitialize @ 0x180003D48
 * Callers:
 *     RtlpHpHeapCreate @ 0x180003E00 (RtlpHpHeapCreate.c)
 * Callees:
 *     memset @ 0x1800A6C80 (memset.c)
 */

__int64 __fastcall RtlpHpVsContextInitialize(unsigned __int64 a1, __int64 a2, __int128 *a3)
{
  __m128i v6; // xmm6
  __int128 v7; // xmm0
  __int64 v8; // rcx
  __int128 v9; // xmm1
  __int64 v10; // rax
  __m128i v11; // xmm1
  __int64 result; // rax

  v6 = _mm_unpacklo_epi64((__m128i)a1, (__m128i)a1);
  memset((void *)a1, 0, 0x70uLL);
  v7 = *a3;
  v8 = RtlpHeapKey;
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
  result = *(_QWORD *)(a1 + 96);
  if ( result )
  {
    result ^= a1 ^ v8;
    *(_QWORD *)(a1 + 96) = result;
  }
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  return result;
}
