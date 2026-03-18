/*
 * XREFs of ExpInsertLowLevelTableIntoFreeList @ 0x140460010
 * Callers:
 *     ExpAllocateHandleTableEntrySlow @ 0x14045DC44 (ExpAllocateHandleTableEntrySlow.c)
 *     ExpAllocateHandleTable @ 0x14045FF04 (ExpAllocateHandleTable.c)
 * Callees:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 */

char __fastcall ExpInsertLowLevelTableIntoFreeList(volatile signed __int32 *a1, _QWORD *a2, ULONG_PTR a3, char a4)
{
  __m128i v6; // xmm3
  unsigned int v7; // r8d
  _QWORD *v8; // rdx
  unsigned __int64 v9; // r11
  __m128i v10; // xmm4
  __m128i v11; // xmm0
  __m128i v12; // xmm1
  __m128i v13; // xmm2
  __m128i v14; // xmm2
  char result; // al

  v6 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a2, (__m128i)(unsigned __int64)a2);
  if ( a4 )
  {
    v7 = 1;
    v8 = a2 + 3;
    v9 = _mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
    v10 = _mm_cvtsi32_si128(4u);
    do
    {
      v11 = _mm_loadl_epi64(&_xmm);
      v12 = _mm_loadl_epi64(&_xmm);
      v13 = _mm_cvtsi32_si128(v7);
      v7 += 2;
      *(v8 - 1) = 0LL;
      v8[1] = v9;
      v14 = _mm_add_epi64(
              _mm_sll_epi64(
                _mm_unpacklo_epi32(_mm_add_epi32(_mm_add_epi32(_mm_shuffle_epi32(v13, 0), v11), v12), (__m128i)0LL),
                v10),
              v6);
      *v8 = v14.m128i_i64[0];
      v8 += 4;
      *(v8 - 2) = _mm_srli_si128(v14, 8).m128i_u64[0];
    }
    while ( v7 < 0xFF );
    a2[510] = 0LL;
    a2[511] = 0LL;
  }
  result = _InterlockedExchangeAdd(a1, 0x400u);
  if ( a4 )
  {
    ExAcquirePushLockExclusiveEx(a3, 0LL);
    if ( *(_QWORD *)(a3 + 8) )
      *(_QWORD *)(*(_QWORD *)(a3 + 16) + 8LL) = a2 + 2;
    else
      *(_QWORD *)(a3 + 8) = a2 + 2;
    *(_QWORD *)(a3 + 16) = a2 + 510;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)a3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)a3);
    return KeAbPostRelease(a3);
  }
  return result;
}
