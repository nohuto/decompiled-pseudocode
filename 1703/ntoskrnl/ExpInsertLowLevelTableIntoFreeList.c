/*
 * XREFs of ExpInsertLowLevelTableIntoFreeList @ 0x14042BFF8
 * Callers:
 *     ExpAllocateHandleTableEntrySlow @ 0x14042B8B0 (ExpAllocateHandleTableEntrySlow.c)
 *     ExpAllocateHandleTable @ 0x14042BEEC (ExpAllocateHandleTable.c)
 * Callees:
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall ExpInsertLowLevelTableIntoFreeList(volatile signed __int32 *a1, _QWORD *a2, ULONG_PTR a3, char a4)
{
  __m128i v6; // xmm3
  __int64 result; // rax
  unsigned int v8; // r8d
  _QWORD *v9; // rdx
  unsigned __int64 v10; // r11
  __m128i v11; // xmm4
  __m128i v12; // xmm0
  __m128i v13; // xmm1
  __m128i v14; // xmm2
  __m128i v15; // xmm2

  v6 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a2, (__m128i)(unsigned __int64)a2);
  if ( a4 )
  {
    v8 = 1;
    v9 = a2 + 3;
    v10 = _mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
    v11 = _mm_cvtsi32_si128(4u);
    do
    {
      v12 = _mm_loadl_epi64(&_xmm);
      v13 = _mm_loadl_epi64(&_xmm);
      v14 = _mm_cvtsi32_si128(v8);
      v8 += 2;
      *(v9 - 1) = 0LL;
      v9[1] = v10;
      v15 = _mm_add_epi64(
              _mm_sll_epi64(
                _mm_unpacklo_epi32(_mm_add_epi32(_mm_add_epi32(_mm_shuffle_epi32(v14, 0), v12), v13), (__m128i)0LL),
                v11),
              v6);
      *v9 = v15.m128i_i64[0];
      v9 += 4;
      *(v9 - 2) = _mm_srli_si128(v15, 8).m128i_u64[0];
    }
    while ( v8 < 0xFF );
    a2[510] = 0LL;
    a2[511] = 0LL;
  }
  result = (unsigned int)_InterlockedExchangeAdd(a1, 0x400u);
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
