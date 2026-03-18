/*
 * XREFs of PerformMutexResourceBindings @ 0x1C0047A6C
 * Callers:
 *     ParseAcquire @ 0x1C0054260 (ParseAcquire.c)
 * Callees:
 *     PerformMutexDriverCallbacks @ 0x1C00478C8 (PerformMutexDriverCallbacks.c)
 */

__int64 __fastcall PerformMutexResourceBindings(__int64 a1, __int64 a2, __int64 a3)
{
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 32), 0, 0) == 2
    && (int)PerformMutexDriverCallbacks(4, a2, a1, a3, 0) >= 0 )
  {
    _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 32), 3, 2);
  }
  return 0LL;
}
