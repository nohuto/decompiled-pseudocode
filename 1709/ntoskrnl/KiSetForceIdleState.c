/*
 * XREFs of KiSetForceIdleState @ 0x14020C768
 * Callers:
 *     KeClockInterruptNotify @ 0x140095E30 (KeClockInterruptNotify.c)
 *     KiCheckAndRearmForceIdle @ 0x14013171C (KiCheckAndRearmForceIdle.c)
 *     KeClearForceIdle @ 0x14020C1F4 (KeClearForceIdle.c)
 *     KeSetForceIdle @ 0x14020C2A0 (KeSetForceIdle.c)
 *     KiForceIdleStartDpcRoutine @ 0x14020C440 (KiForceIdleStartDpcRoutine.c)
 *     KiForceIdleStopDpcRoutine @ 0x14020C4C0 (KiForceIdleStopDpcRoutine.c)
 *     KiResetForceIdle @ 0x14020C668 (KiResetForceIdle.c)
 * Callees:
 *     PoTraceForceIdleStateChange @ 0x14024449C (PoTraceForceIdleStateChange.c)
 */

__int64 __fastcall KiSetForceIdleState(unsigned int a1)
{
  unsigned int v1; // ebx

  v1 = KiForceIdleState;
  KiForceIdleState = a1;
  PoTraceForceIdleStateChange(v1, a1);
  return v1;
}
