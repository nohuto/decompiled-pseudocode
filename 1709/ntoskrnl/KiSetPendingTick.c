/*
 * XREFs of KiSetPendingTick @ 0x14010F828
 * Callers:
 *     KeClockInterruptNotify @ 0x140095E30 (KeClockInterruptNotify.c)
 *     KeResumeClockTimerFromIdle @ 0x140098E10 (KeResumeClockTimerFromIdle.c)
 *     KiSetClockTickRate @ 0x14010F264 (KiSetClockTickRate.c)
 *     KePrepareClockTimerForIdle @ 0x14010F380 (KePrepareClockTimerForIdle.c)
 *     KiResumeClockTimer @ 0x1402034A8 (KiResumeClockTimer.c)
 *     KeInitializeClock @ 0x140848FF0 (KeInitializeClock.c)
 * Callees:
 *     <none>
 */

char __fastcall KiSetPendingTick(char a1)
{
  struct _KPRCB *CurrentPrcb; // rdx
  char result; // al
  __int64 v4; // rcx

  if ( KiClockTimerPerCpu )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    result = (a1 ^ CurrentPrcb->PendingTickFlags) & 1;
    CurrentPrcb->PendingTickFlags ^= result;
  }
  else
  {
    v4 = KiProcessorBlock[KiClockTimerOwner];
    result = (a1 ^ *(_BYTE *)(v4 + 34)) & 1;
    *(_BYTE *)(v4 + 34) ^= result;
  }
  return result;
}
