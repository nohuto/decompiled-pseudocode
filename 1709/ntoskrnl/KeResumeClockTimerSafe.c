/*
 * XREFs of KeResumeClockTimerSafe @ 0x140203278
 * Callers:
 *     IopLiveDumpProcessCorralStateChange @ 0x14042C094 (IopLiveDumpProcessCorralStateChange.c)
 *     PnprQuiesceProcessorDpc @ 0x14042CDC0 (PnprQuiesceProcessorDpc.c)
 *     PnprWakeProcessors @ 0x14042D77C (PnprWakeProcessors.c)
 * Callees:
 *     KeGetEffectiveIrql @ 0x140088FA0 (KeGetEffectiveIrql.c)
 *     KiResumeClockTimer @ 0x1402034A8 (KiResumeClockTimer.c)
 */

__int64 KeResumeClockTimerSafe()
{
  unsigned __int8 CurrentIrql; // bl
  __int64 result; // rax

  if ( KeGetEffectiveIrql() >= 0xDu )
    return KiResumeClockTimer();
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xDuLL);
  KiResumeClockTimer();
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
