/*
 * XREFs of PpmComputeIdleDurationHint @ 0x14015BD14
 * Callers:
 *     PpmIdleSelectStates @ 0x14015B9D0 (PpmIdleSelectStates.c)
 * Callees:
 *     PpmEstimateIdleDuration @ 0x14015BDC0 (PpmEstimateIdleDuration.c)
 */

__int64 __fastcall PpmComputeIdleDurationHint(__int64 a1, int a2, int a3)
{
  __int64 v3; // rbx
  unsigned __int64 v4; // r9
  __int64 result; // rax
  unsigned __int64 v7; // r8
  signed __int64 v8; // rax
  __int64 v9; // [rsp+40h] [rbp-18h] BYREF
  __int64 v10; // [rsp+48h] [rbp-10h] BYREF
  __int16 v11; // [rsp+60h] [rbp+8h] BYREF
  char v12; // [rsp+78h] [rbp+20h] BYREF

  v3 = *(_QWORD *)(a1 + 23936);
  LODWORD(v4) = 0;
  if ( KiSerializeTimerExpiration )
  {
    if ( !*(_BYTE *)(a1 + 33) )
    {
      _m_prefetchw(&PpmPlatformIdleHint);
      v7 = PpmPlatformIdleHint;
      if ( (_WORD)PpmPlatformIdleHint )
      {
        while ( 1 )
        {
          v8 = _InterlockedCompareExchange64(&PpmPlatformIdleHint, v7 ^ (unsigned __int16)(v7 ^ (v7 - 1)), v7);
          if ( v7 == v8 )
            break;
          v7 = v8;
          _mm_pause();
          if ( !(_WORD)v8 )
            goto LABEL_2;
        }
        v4 = v7 >> 16;
      }
    }
  }
LABEL_2:
  PpmEstimateIdleDuration(a1, a2, a3, v4, (__int64)&v10, (__int64)&v9, (__int64)&v12, (__int64)&v11);
  *(_WORD *)(v3 + 48) |= v11;
  *(_QWORD *)(v3 + 520) = v9;
  *(_BYTE *)(v3 + 541) = v12;
  result = v10;
  *(_QWORD *)(v3 + 512) = v10;
  return result;
}
