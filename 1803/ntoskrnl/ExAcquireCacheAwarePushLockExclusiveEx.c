/*
 * XREFs of ExAcquireCacheAwarePushLockExclusiveEx @ 0x1402B9350
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x140008E50 (KeAbPreAcquire.c)
 *     ExfAcquireCacheAwarePushLockExclusiveEx @ 0x1400AB010 (ExfAcquireCacheAwarePushLockExclusiveEx.c)
 */

unsigned __int64 *__fastcall ExAcquireCacheAwarePushLockExclusiveEx(unsigned __int64 **a1, char a2)
{
  __int64 v3; // rbx
  unsigned __int64 *result; // rax

  if ( (a2 & 2) != 0 )
    v3 = 0LL;
  else
    v3 = KeAbPreAcquire((ULONG_PTR)a1, 0LL, 0);
  result = ExfAcquireCacheAwarePushLockExclusiveEx(a1, v3, (ULONG_PTR)a1);
  if ( v3 )
    *(_BYTE *)(v3 + 26) |= 1u;
  return result;
}
