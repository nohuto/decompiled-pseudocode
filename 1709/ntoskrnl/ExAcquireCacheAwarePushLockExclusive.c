/*
 * XREFs of ExAcquireCacheAwarePushLockExclusive @ 0x1400BAAB0
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquireCacheAwarePushLockExclusiveEx @ 0x1400BAB00 (ExfAcquireCacheAwarePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1400BAD80 (KeAbPreAcquire.c)
 */

__int64 __fastcall ExAcquireCacheAwarePushLockExclusive(ULONG_PTR a1)
{
  __int64 v2; // rdi
  __int64 result; // rax

  v2 = KeAbPreAcquire(a1, 0LL);
  result = ExfAcquireCacheAwarePushLockExclusiveEx(a1, v2, a1);
  if ( v2 )
    *(_BYTE *)(v2 + 26) |= 1u;
  return result;
}
