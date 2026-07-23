/*
 * XREFs of ExAcquireCacheAwarePushLockExclusiveEx @ 0x140284C90
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquireCacheAwarePushLockExclusiveEx @ 0x1400BAB00 (ExfAcquireCacheAwarePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1400BAD80 (KeAbPreAcquire.c)
 */

unsigned __int64 *__fastcall ExAcquireCacheAwarePushLockExclusiveEx(unsigned __int64 **a1, char a2)
{
  PRTL_BALANCED_NODE v3; // rbx
  unsigned __int64 *result; // rax

  if ( (a2 & 2) != 0 )
    v3 = 0LL;
  else
    v3 = KeAbPreAcquire((ULONG_PTR)a1, 0LL, 0);
  result = ExfAcquireCacheAwarePushLockExclusiveEx(a1, (__int64)v3, (__int16 *)a1);
  if ( v3 )
    BYTE2(v3[1].Left) |= 1u;
  return result;
}
