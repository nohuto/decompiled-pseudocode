/*
 * XREFs of KeTryToAcquireSpinLockAtDpcLevel @ 0x140143D90
 * Callers:
 *     ExpDeleteTimer @ 0x1400E0CF0 (ExpDeleteTimer.c)
 * Callees:
 *     KiTryToAcquireSpinLockInstrumented @ 0x140205068 (KiTryToAcquireSpinLockInstrumented.c)
 */

BOOLEAN __stdcall KeTryToAcquireSpinLockAtDpcLevel(PKSPIN_LOCK SpinLock)
{
  BOOLEAN result; // al

  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    return KiTryToAcquireSpinLockInstrumented(SpinLock);
  if ( !_interlockedbittestandset64((volatile signed __int32 *)SpinLock, 0LL) )
    return 1;
  result = 0;
  _mm_pause();
  return result;
}
