/*
 * XREFs of KiSetPendingTick @ 0x140068070
 * Callers:
 *     KePrepareClockTimerForIdle @ 0x140067B60 (KePrepareClockTimerForIdle.c)
 *     KiSetClockTickRate @ 0x140067F14 (KiSetClockTickRate.c)
 *     KeClockInterruptNotify @ 0x1400F3A30 (KeClockInterruptNotify.c)
 *     KeResumeClockTimerFromIdle @ 0x1400F6D60 (KeResumeClockTimerFromIdle.c)
 *     KiResumeClockTimer @ 0x140137F00 (KiResumeClockTimer.c)
 *     KeInitializeClock @ 0x140819AAC (KeInitializeClock.c)
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
