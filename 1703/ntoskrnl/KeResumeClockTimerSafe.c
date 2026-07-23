/*
 * XREFs of KeResumeClockTimerSafe @ 0x1401FD334
 * Callers:
 *     IopLiveDumpProcessCorralStateChange @ 0x140417064 (IopLiveDumpProcessCorralStateChange.c)
 *     PnprQuiesceProcessorDpc @ 0x140417D90 (PnprQuiesceProcessorDpc.c)
 *     PnprWakeProcessors @ 0x14041876C (PnprWakeProcessors.c)
 * Callees:
 *     KeGetEffectiveIrql @ 0x1400E2B60 (KeGetEffectiveIrql.c)
 *     KiResumeClockTimer @ 0x140137F00 (KiResumeClockTimer.c)
 */

LARGE_INTEGER KeResumeClockTimerSafe()
{
  unsigned __int8 CurrentIrql; // bl
  LARGE_INTEGER result; // rax

  if ( KeGetEffectiveIrql() >= 0xDu )
    return KiResumeClockTimer();
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xDuLL);
  KiResumeClockTimer();
  result.QuadPart = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
