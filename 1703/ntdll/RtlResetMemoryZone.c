/*
 * XREFs of RtlResetMemoryZone @ 0x1800E9920
 * Callers:
 *     RtlResetMemoryBlockLookaside @ 0x1800E97C0 (RtlResetMemoryBlockLookaside.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall RtlResetMemoryZone(__int64 a1)
{
  __int64 *i; // rdx

  RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 32));
  for ( i = *(__int64 **)(a1 + 48); i != (__int64 *)a1; i = (__int64 *)*i )
    _InterlockedExchange64(i + 2, (__int64)(i + 4));
  _InterlockedExchange64((volatile __int64 *)(a1 + 16), a1 + 56);
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 32));
  return 0LL;
}
