/*
 * XREFs of RtlpHpLfhContextInitialize @ 0x180004254
 * Callers:
 *     RtlpHpHeapCreate @ 0x180003E00 (RtlpHpHeapCreate.c)
 * Callees:
 *     RtlQueryResourcePolicy @ 0x180007560 (RtlQueryResourcePolicy.c)
 *     RtlInitializeSListHead @ 0x180076DA0 (RtlInitializeSListHead.c)
 *     memset @ 0x1800A6C80 (memset.c)
 */

__int64 __fastcall RtlpHpLfhContextInitialize(unsigned __int64 a1, __int64 a2, char a3, __int128 *a4, __int64 a5)
{
  __m128i v9; // xmm6
  __int128 v10; // xmm0
  __int64 v11; // rcx
  __int128 v12; // xmm1
  __int64 v13; // rax
  __m128i v14; // xmm2
  __int64 v15; // rax
  _SLIST_HEADER *v16; // rdi
  __int64 v17; // rbx
  unsigned __int8 v18; // al
  int v20; // [rsp+60h] [rbp+18h] BYREF

  v9 = _mm_unpacklo_epi64((__m128i)a1, (__m128i)a1);
  memset((void *)a1, 0, 0x4E0uLL);
  v10 = *a4;
  v11 = RtlpHeapKey;
  v12 = a4[1];
  *(_QWORD *)(a1 + 64) = a5;
  v13 = 0LL;
  *(_OWORD *)(a1 + 8) = v10;
  *(_QWORD *)a1 = a2;
  *(_QWORD *)&v10 = *((_QWORD *)a4 + 4);
  *(_OWORD *)(a1 + 24) = v12;
  *(_QWORD *)(a1 + 40) = v10;
  v14 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v11, (__m128i)(unsigned __int64)v11);
  do
  {
    *(__m128i *)(a1 + 8 * v13 + 8) = _mm_xor_si128(
                                       _mm_xor_si128(v14, _mm_loadu_si128((const __m128i *)(a1 + 8 * v13 + 8))),
                                       v9);
    v13 += 2LL;
  }
  while ( v13 < 4 );
  v15 = *(_QWORD *)(a1 + 40);
  if ( v15 )
    *(_QWORD *)(a1 + 40) = a1 ^ v11 ^ v15;
  if ( (int)RtlQueryResourcePolicy(0LL, 0LL, &v20, 4LL) >= 0 && v20 <= 10 )
    a3 = 1;
  v16 = (_SLIST_HEADER *)(a1 + 96);
  v17 = 7LL;
  do
  {
    RtlInitializeSListHead(v16++);
    --v17;
  }
  while ( v17 );
  v18 = a3;
  if ( (unsigned __int8)a3 > 0x40u )
    v18 = 64;
  *(_BYTE *)(a1 + 48) = v18;
  if ( v18 > 1u )
    *(_QWORD *)(a1 + 56) = (char *)&unk_180117440
                         + ((unsigned __int64)((62 - (64 - v18)) * (64 - (unsigned int)v18 + 61)) >> 1);
  a5 = 1LL;
  memset64((void *)(a1 + 208), 1uLL, 0x81uLL);
  return RtlpInitializeLfhRandomDataArray(0LL);
}
