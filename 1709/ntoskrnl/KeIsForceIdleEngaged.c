/*
 * XREFs of KeIsForceIdleEngaged @ 0x14006238C
 * Callers:
 *     KeSetTimer2 @ 0x1400605A0 (KeSetTimer2.c)
 *     KeClockInterruptNotify @ 0x140095E30 (KeClockInterruptNotify.c)
 *     KePrepareClockTimerForIdle @ 0x14010F380 (KePrepareClockTimerForIdle.c)
 *     KiResetForceIdle @ 0x14020C668 (KiResetForceIdle.c)
 * Callees:
 *     <none>
 */

bool KeIsForceIdleEngaged()
{
  return !KiForceIdleDisabled && KiForceIdleState == 4;
}
