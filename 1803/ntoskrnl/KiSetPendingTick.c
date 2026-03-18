/*
 * XREFs of KiSetPendingTick @ 0x140005DDC
 * Callers:
 *     KiRestoreClockTickRate @ 0x140005B28 (KiRestoreClockTickRate.c)
 *     KiSetClockTickRate @ 0x140005C44 (KiSetClockTickRate.c)
 *     KePrepareClockTimerForIdle @ 0x1400396A0 (KePrepareClockTimerForIdle.c)
 *     KeResumeClockTimerFromIdle @ 0x14010DC30 (KeResumeClockTimerFromIdle.c)
 *     KeInitializeClock @ 0x1408C3688 (KeInitializeClock.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall KiSetPendingTick(char a1)
{
  char v1; // r8
  struct _KPRCB *CurrentPrcb; // rdx
  unsigned __int8 result; // al
  __int64 v4; // rcx

  v1 = a1 & 1;
  if ( KiClockTimerPerCpu )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    result = v1 | CurrentPrcb->PendingTickFlags & 0xFE;
    CurrentPrcb->PendingTickFlags = result;
  }
  else
  {
    v4 = KiProcessorBlock[KiClockTimerOwner];
    result = v1 | *(_BYTE *)(v4 + 34) & 0xFE;
    *(_BYTE *)(v4 + 34) = result;
  }
  return result;
}
