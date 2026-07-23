/*
 * XREFs of sub_18000A534 @ 0x18000A534
 * Callers:
 *     sub_18000A268 @ 0x18000A268 (sub_18000A268.c)
 * Callees:
 *     sub_18000EE68 @ 0x18000EE68 (sub_18000EE68.c)
 *     RtlQueryResourcePolicy @ 0x18000F560 (RtlQueryResourcePolicy.c)
 *     RtlInitializeSListHead @ 0x1800779F0 (RtlInitializeSListHead.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

__int64 __fastcall sub_18000A534(unsigned __int64 a1, __int64 a2, char a3, __int128 *a4)
{
  __m128i v8; // xmm6
  __int128 v9; // xmm0
  __int64 v10; // rcx
  __int64 v11; // rax
  __int128 v12; // xmm1
  __m128i v13; // xmm1
  __int64 v14; // rax
  _SLIST_HEADER *v15; // rdi
  __int64 v16; // rbx
  unsigned __int8 v17; // al
  int v19; // [rsp+60h] [rbp+18h] BYREF

  v8 = _mm_unpacklo_epi64((__m128i)a1, (__m128i)a1);
  memset((void *)a1, 0, 0x4D0uLL);
  v9 = *a4;
  v10 = qword_18015BFA8;
  v11 = 0LL;
  v12 = a4[1];
  *(_QWORD *)a1 = a2;
  *(_OWORD *)(a1 + 8) = v9;
  *(_QWORD *)&v9 = *((_QWORD *)a4 + 4);
  *(_OWORD *)(a1 + 24) = v12;
  *(_QWORD *)(a1 + 40) = v9;
  v13 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v10, (__m128i)(unsigned __int64)v10);
  do
  {
    *(__m128i *)(a1 + 8 * v11 + 8) = _mm_xor_si128(
                                       _mm_xor_si128(_mm_loadu_si128((const __m128i *)(a1 + 8 * v11 + 8)), v13),
                                       v8);
    v11 += 2LL;
  }
  while ( v11 < 4 );
  v14 = *(_QWORD *)(a1 + 40);
  if ( v14 )
    *(_QWORD *)(a1 + 40) = a1 ^ v10 ^ v14;
  if ( (int)RtlQueryResourcePolicy(0LL, 0LL, &v19, 4LL) >= 0 && v19 <= 10 )
    a3 = 1;
  v15 = (_SLIST_HEADER *)(a1 + 80);
  v16 = 7LL;
  do
  {
    RtlInitializeSListHead(v15++);
    --v16;
  }
  while ( v16 );
  v17 = a3;
  if ( (unsigned __int8)a3 > 0x40u )
    v17 = 64;
  *(_BYTE *)(a1 + 56) = v17;
  if ( v17 > 1u )
    *(_QWORD *)(a1 + 64) = (char *)&unk_180113EF0
                         + ((unsigned __int64)((62 - (64 - v17)) * (64 - (unsigned int)v17 + 61)) >> 1);
  memset64((void *)(a1 + 192), 1uLL, 0x81uLL);
  return sub_18000EE68();
}
