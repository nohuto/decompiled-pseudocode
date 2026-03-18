/*
 * XREFs of RtlpHpVsContextInitialize @ 0x140245CC8
 * Callers:
 *     RtlpHpFixedHeapCreate @ 0x140244D50 (RtlpHpFixedHeapCreate.c)
 * Callees:
 *     memset @ 0x140192D80 (memset.c)
 */

_QWORD *__fastcall RtlpHpVsContextInitialize(unsigned __int64 a1, __int64 a2, __int128 *a3, int a4)
{
  __m128i v8; // xmm6
  __int128 v9; // xmm0
  __int64 v10; // rcx
  __int128 v11; // xmm1
  __int64 v12; // rax
  __m128i v13; // xmm1
  __int64 v14; // rax
  _QWORD *result; // rax

  v8 = _mm_unpacklo_epi64((__m128i)a1, (__m128i)a1);
  memset((void *)a1, 0, 0x70uLL);
  v9 = *a3;
  v10 = RtlpHeapKey;
  v11 = a3[1];
  *(_DWORD *)(a1 + 104) = a4;
  v12 = 0LL;
  *(_OWORD *)(a1 + 64) = v9;
  *(_QWORD *)(a1 + 56) = a2;
  *(_QWORD *)&v9 = *((_QWORD *)a3 + 4);
  *(_OWORD *)(a1 + 80) = v11;
  *(_QWORD *)(a1 + 96) = v9;
  v13 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v10, (__m128i)(unsigned __int64)v10);
  do
  {
    *(__m128i *)(a1 + 8 * v12 + 64) = _mm_xor_si128(
                                        _mm_xor_si128(_mm_loadu_si128((const __m128i *)(a1 + 8 * v12 + 64)), v13),
                                        v8);
    v12 += 2LL;
  }
  while ( v12 < 4 );
  v14 = *(_QWORD *)(a1 + 96);
  if ( v14 )
    *(_QWORD *)(a1 + 96) = a1 ^ v10 ^ v14;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( (a4 & 0x8000000) != 0 )
    *(_BYTE *)(a1 + 16) |= 1u;
  result = (_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 32) = a1 + 24;
  *(_QWORD *)(a1 + 24) = a1 + 24;
  return result;
}
