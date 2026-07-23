/*
 * XREFs of KeResumeClockTimerSafe @ 0x1402408E4
 * Callers:
 *     IopLiveDumpProcessCorralStateChange @ 0x140482BC8 (IopLiveDumpProcessCorralStateChange.c)
 *     PnprQuiesceProcessorDpc @ 0x140483960 (PnprQuiesceProcessorDpc.c)
 *     PnprWakeProcessors @ 0x14048431C (PnprWakeProcessors.c)
 * Callees:
 *     KeGetEffectiveIrql @ 0x1400F0B10 (KeGetEffectiveIrql.c)
 *     KiResumeClockTimer @ 0x14014E908 (KiResumeClockTimer.c)
 */

LONGLONG KeResumeClockTimerSafe()
{
  unsigned __int8 CurrentIrql; // bl
  LONGLONG result; // rax

  if ( KeGetEffectiveIrql() >= 0xDu )
    return KiResumeClockTimer();
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xDuLL);
  KiResumeClockTimer();
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
