/*
 * XREFs of KiSetForceIdleState @ 0x14024AA4C
 * Callers:
 *     KiCheckAndRearmForceIdle @ 0x1400D14A4 (KiCheckAndRearmForceIdle.c)
 *     KeClockInterruptNotify @ 0x14010A200 (KeClockInterruptNotify.c)
 *     KeClearForceIdle @ 0x14024A3AC (KeClearForceIdle.c)
 *     KeSetForceIdle @ 0x14024A488 (KeSetForceIdle.c)
 *     KiForceIdleStartDpcRoutine @ 0x14024A690 (KiForceIdleStartDpcRoutine.c)
 *     KiForceIdleStopDpcRoutine @ 0x14024A750 (KiForceIdleStopDpcRoutine.c)
 *     KiResetForceIdle @ 0x14024A92C (KiResetForceIdle.c)
 * Callees:
 *     PoTraceForceIdleStateChange @ 0x14027AC1C (PoTraceForceIdleStateChange.c)
 */

__int64 __fastcall KiSetForceIdleState(unsigned int a1)
{
  unsigned int v1; // ebx

  v1 = KiForceIdleState;
  KiForceIdleState = a1;
  PoTraceForceIdleStateChange(v1, a1);
  return v1;
}
