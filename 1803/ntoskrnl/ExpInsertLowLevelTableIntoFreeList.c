/*
 * XREFs of ExpInsertLowLevelTableIntoFreeList @ 0x140553AE8
 * Callers:
 *     ExpAllocateHandleTable @ 0x14055390C (ExpAllocateHandleTable.c)
 *     ExpAllocateHandleTableEntrySlow @ 0x140553A18 (ExpAllocateHandleTableEntrySlow.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 */

char __fastcall ExpInsertLowLevelTableIntoFreeList(volatile signed __int32 *a1, _QWORD *a2, ULONG_PTR a3, char a4)
{
  __m128i v6; // xmm3
  _QWORD *v7; // rsi
  char result; // al
  unsigned int v9; // r8d
  _QWORD *v10; // rdx
  unsigned __int64 v11; // r11
  __m128i v12; // xmm4
  __m128i v13; // xmm0
  __m128i v14; // xmm1
  __m128i v15; // xmm2
  __m128i v16; // xmm2
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  _QWORD *v20; // rdi

  v6 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a2, (__m128i)(unsigned __int64)a2);
  if ( a4 )
  {
    v9 = 1;
    v10 = a2 + 3;
    v11 = _mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
    v12 = _mm_cvtsi32_si128(4u);
    do
    {
      v13 = _mm_loadl_epi64((const __m128i *)&_xmm);
      v14 = _mm_loadl_epi64(&_xmm);
      v15 = _mm_cvtsi32_si128(v9);
      v9 += 2;
      *(v10 - 1) = 0LL;
      v10[1] = v11;
      v16 = _mm_add_epi64(
              _mm_sll_epi64(
                _mm_unpacklo_epi32(_mm_add_epi32(_mm_add_epi32(_mm_shuffle_epi32(v15, 0), v13), v14), (__m128i)0LL),
                v12),
              v6);
      *v10 = v16.m128i_i64[0];
      v10 += 4;
      *(v10 - 2) = _mm_srli_si128(v16, 8).m128i_u64[0];
    }
    while ( v9 < 0xFF );
    v7 = a2 + 510;
    a2[510] = 0LL;
    a2[511] = 0LL;
  }
  else
  {
    v7 = a2 + 510;
  }
  result = _InterlockedExchangeAdd(a1, 0x400u);
  if ( a4 )
  {
    ExAcquirePushLockExclusiveEx(a3, 0LL);
    v20 = a2 + 2;
    if ( *(_QWORD *)(a3 + 8) )
      *(_QWORD *)(*(_QWORD *)(a3 + 16) + 8LL) = v20;
    else
      *(_QWORD *)(a3 + 8) = v20;
    *(_QWORD *)(a3 + 16) = v7;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)a3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)a3, v17, v18, v19);
    return KeAbPostRelease(a3);
  }
  return result;
}
