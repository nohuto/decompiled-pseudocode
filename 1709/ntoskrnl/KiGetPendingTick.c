/*
 * XREFs of KiGetPendingTick @ 0x14012AE9C
 * Callers:
 *     KeResumeClockTimerFromIdle @ 0x140098E10 (KeResumeClockTimerFromIdle.c)
 * Callees:
 *     <none>
 */

char KiGetPendingTick()
{
  struct _KPRCB *CurrentPrcb; // rax

  if ( KiClockTimerPerCpu )
    CurrentPrcb = KeGetCurrentPrcb();
  else
    CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[KiClockTimerOwner];
  return CurrentPrcb->PendingTickFlags & 1;
}
