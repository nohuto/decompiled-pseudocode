/*
 * XREFs of KiSetForceIdleState @ 0x140206178
 * Callers:
 *     KiTimer2Expiration @ 0x140047B60 (KiTimer2Expiration.c)
 *     KeClockInterruptNotify @ 0x1400F3A30 (KeClockInterruptNotify.c)
 *     KeClearForceIdle @ 0x140205C10 (KeClearForceIdle.c)
 *     KeSetForceIdle @ 0x140205CBC (KeSetForceIdle.c)
 *     KiForceIdleStartDpcRoutine @ 0x140205E50 (KiForceIdleStartDpcRoutine.c)
 *     KiForceIdleStopDpcRoutine @ 0x140205ED0 (KiForceIdleStopDpcRoutine.c)
 *     KiResetForceIdle @ 0x140206078 (KiResetForceIdle.c)
 * Callees:
 *     PoTraceForceIdleStateChange @ 0x14022FC74 (PoTraceForceIdleStateChange.c)
 */

__int64 __fastcall KiSetForceIdleState(unsigned int a1)
{
  unsigned int v1; // ebx

  v1 = KiForceIdleState;
  KiForceIdleState = a1;
  PoTraceForceIdleStateChange(v1, a1);
  return v1;
}
