/*
 * XREFs of KiGetPendingTick @ 0x1400C6A38
 * Callers:
 *     KeResumeClockTimerFromIdle @ 0x14010DC30 (KeResumeClockTimerFromIdle.c)
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
