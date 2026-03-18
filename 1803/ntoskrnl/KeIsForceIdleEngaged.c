/*
 * XREFs of KeIsForceIdleEngaged @ 0x1400382EC
 * Callers:
 *     KeSetTimer2 @ 0x140037E50 (KeSetTimer2.c)
 *     KePrepareClockTimerForIdle @ 0x1400396A0 (KePrepareClockTimerForIdle.c)
 *     KeClockInterruptNotify @ 0x14010A200 (KeClockInterruptNotify.c)
 *     KiResetForceIdle @ 0x14024A92C (KiResetForceIdle.c)
 * Callees:
 *     <none>
 */

bool KeIsForceIdleEngaged()
{
  return !KiForceIdleDisabled && KiForceIdleState == 4;
}
