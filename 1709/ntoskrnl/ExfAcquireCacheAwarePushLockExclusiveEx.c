/*
 * XREFs of ExfAcquireCacheAwarePushLockExclusiveEx @ 0x1400BAB00
 * Callers:
 *     ExAcquireCacheAwarePushLockExclusive @ 0x1400BAAB0 (ExAcquireCacheAwarePushLockExclusive.c)
 *     ExAcquireCacheAwarePushLockExclusiveEx @ 0x140284C90 (ExAcquireCacheAwarePushLockExclusiveEx.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14005D890 (ExfAcquirePushLockExclusiveEx.c)
 */

unsigned __int64 *__fastcall ExfAcquireCacheAwarePushLockExclusiveEx(unsigned __int64 **a1, __int64 a2, __int16 *a3)
{
  unsigned __int64 *result; // rax
  volatile signed __int32 **v4; // rbx
  unsigned __int64 **v6; // rdi

  result = *a1;
  v4 = (volatile signed __int32 **)(a1 + 1);
  v6 = a1 + 32;
  if ( _interlockedbittestandset64((volatile signed __int32 *)*a1, 0LL) )
    result = (unsigned __int64 *)ExfAcquirePushLockExclusiveEx(*a1, a2, a3);
  while ( v4 < (volatile signed __int32 **)v6 )
  {
    result = (unsigned __int64 *)*v4;
    if ( _interlockedbittestandset64(*v4, 0LL) )
    {
      result = *--v6;
      if ( _interlockedbittestandset64((volatile signed __int32 *)result, 0LL) )
        result = (unsigned __int64 *)ExfAcquirePushLockExclusiveEx(*v6, a2, a3);
    }
    else
    {
      ++v4;
    }
  }
  return result;
}
