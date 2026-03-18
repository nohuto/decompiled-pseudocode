/*
 * XREFs of PpmGetPlatformIdleDurationHint @ 0x14023AC10
 * Callers:
 *     PpmIdleSelectStates @ 0x14013A6A0 (PpmIdleSelectStates.c)
 * Callees:
 *     <none>
 */

unsigned __int64 PpmGetPlatformIdleDurationHint()
{
  __int64 v0; // r8
  unsigned __int64 v1; // rdx
  signed __int64 v2; // rax

  v0 = 0LL;
  _m_prefetchw(&PpmPlatformIdleHint);
  v1 = PpmPlatformIdleHint;
  if ( (_WORD)PpmPlatformIdleHint )
  {
    while ( 1 )
    {
      v2 = _InterlockedCompareExchange64(&PpmPlatformIdleHint, v1 ^ (unsigned __int16)(v1 ^ (v1 - 1)), v1);
      if ( v1 == v2 )
        break;
      v1 = v2;
      _mm_pause();
      if ( !(_WORD)v2 )
        return v0;
    }
    return v1 >> 16;
  }
  return v0;
}
