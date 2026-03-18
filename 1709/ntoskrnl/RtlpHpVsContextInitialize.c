/*
 * XREFs of RtlpHpVsContextInitialize @ 0x14025D1C0
 * Callers:
 *     RtlpHpFixedHeapCreate @ 0x14025C100 (RtlpHpFixedHeapCreate.c)
 * Callees:
 *     memset @ 0x140192F40 (memset.c)
 */

__int64 __fastcall RtlpHpVsContextInitialize(unsigned __int64 a1, __int64 a2, __int128 *a3, int a4)
{
  __m128i v8; // xmm6
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int64 v11; // rax
  __m128i v12; // xmm1
  __m128i v13; // xmm1
  __int64 result; // rax

  v8 = _mm_unpacklo_epi64((__m128i)a1, (__m128i)a1);
  memset((void *)a1, 0, 0x70uLL);
  v9 = *a3;
  *(_DWORD *)(a1 + 104) = a4;
  v10 = a3[1];
  *(_QWORD *)(a1 + 56) = a2;
  v11 = 0LL;
  *(_OWORD *)(a1 + 64) = v9;
  *(_QWORD *)&v9 = *((_QWORD *)a3 + 4);
  *(_OWORD *)(a1 + 80) = v10;
  v12 = _mm_loadl_epi64((const __m128i *)&RtlpHeapKey);
  v13 = _mm_unpacklo_epi64(v12, v12);
  *(_QWORD *)(a1 + 96) = v9;
  do
  {
    *(__m128i *)(a1 + 8 * v11 + 64) = _mm_xor_si128(
                                        _mm_xor_si128(_mm_loadu_si128((const __m128i *)(a1 + 8 * v11 + 64)), v13),
                                        v8);
    v11 += 2LL;
  }
  while ( v11 < 4 );
  result = *(_QWORD *)(a1 + 96);
  if ( result )
  {
    result ^= a1 ^ RtlpHeapKey;
    *(_QWORD *)(a1 + 96) = result;
  }
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( (a4 & 0x8000000) != 0 )
    *(_BYTE *)(a1 + 16) |= 1u;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  return result;
}
