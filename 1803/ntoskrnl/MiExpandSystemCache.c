/*
 * XREFs of MiExpandSystemCache @ 0x1400C2710
 * Callers:
 *     MiObtainSystemCacheView @ 0x1400DDFF0 (MiObtainSystemCacheView.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeZeroedPageTables @ 0x1400490A0 (MiMakeZeroedPageTables.c)
 *     MiObtainSystemVa @ 0x140049998 (MiObtainSystemVa.c)
 *     MiSetSystemCacheReverseMap @ 0x1400C28F0 (MiSetSystemCacheReverseMap.c)
 *     InsertTailListPte @ 0x1400E06C0 (InsertTailListPte.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall MiExpandSystemCache(__int16 *a1, unsigned __int64 *a2)
{
  __int64 *PoolWithTag; // rax
  __int64 *v5; // rsi
  __int64 *v6; // rcx
  unsigned __int64 v7; // r9
  __m128i v8; // xmm1
  __int64 v9; // rdx
  __m128i v10; // xmm1
  __m128i v11; // xmm0
  __m128i v12; // xmm0
  __int64 v13; // rdi
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rbp
  __int64 v16; // rbx
  __int64 v18; // [rsp+58h] [rbp+10h] BYREF

  *a2 = 0LL;
  if ( (unsigned __int64)qword_1403CB808 <= 0x4000000 )
    return 0LL;
  PoolWithTag = (__int64 *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x180uLL, 0x6353694Du);
  v5 = PoolWithTag;
  if ( !PoolWithTag )
    return 0LL;
  v6 = PoolWithTag + 10;
  v7 = _mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
  v8 = _mm_cvtsi32_si128(*a1);
  v9 = 4LL;
  v10 = _mm_slli_epi64(
          _mm_and_si128(
            _mm_unpacklo_epi32(
              _mm_unpacklo_epi16(_mm_shuffle_epi32(_mm_unpacklo_epi16(v8, v8), 0), (__m128i)0LL),
              (__m128i)0LL),
            (__m128i)_xmm),
          6u);
  do
  {
    v11.m128i_i64[0] = *(v6 - 6);
    v11.m128i_i64[1] = *v6;
    *(v6 - 8) = 0LL;
    v12 = _mm_or_si128(_mm_and_si128(v11, (__m128i)_xmm_ffffffffffff003fffffffffffff003f), v10);
    *(v6 - 6) = v12.m128i_i64[0];
    *v6 = _mm_srli_si128(v12, 8).m128i_u64[0];
    *(v6 - 2) = v7;
    v6 += 12;
    --v9;
  }
  while ( v9 );
  v13 = 8LL;
  v14 = MiObtainSystemVa(1LL, 8);
  v15 = v14;
  if ( !v14 )
  {
LABEL_11:
    ExFreePoolWithTag(v5, 0);
    return 0LL;
  }
  v16 = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( !(unsigned int)MiMakeZeroedPageTables(v16, v16 + 4088, 0, 8) )
  {
    *a2 = v15;
    goto LABEL_11;
  }
  v18 = MI_READ_PTE_LOCK_FREE((((v16 << 25 >> 16) & 0xFFFFFFE00000uLL) >> 18) - 0x904C0000000LL);
  *(_BYTE *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v18) >> 12) & 0xFFFFFFFFFLL)
           - 0x57FFFFFFFD9LL) = 0;
  MiSetSystemCacheReverseMap(v15, v5);
  do
  {
    InsertTailListPte(a1 + 856, v16);
    v16 += 512LL;
    --v13;
  }
  while ( v13 );
  return v16;
}
