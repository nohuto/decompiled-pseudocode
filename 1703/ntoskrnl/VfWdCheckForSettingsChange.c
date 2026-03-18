/*
 * XREFs of VfWdCheckForSettingsChange @ 0x14077C3C4
 * Callers:
 *     ViSettingsIoCheckForChanges @ 0x14077BF00 (ViSettingsIoCheckForChanges.c)
 *     VfWdSetCancelTimeout @ 0x14077C510 (VfWdSetCancelTimeout.c)
 * Callees:
 *     KeRemoveQueueDpcEx @ 0x14001B6F0 (KeRemoveQueueDpcEx.c)
 *     KeCancelTimer @ 0x14004D010 (KeCancelTimer.c)
 *     KiSetTimerEx @ 0x14004D040 (KiSetTimerEx.c)
 */

__int64 __fastcall VfWdCheckForSettingsChange(char a1)
{
  __int64 result; // rax

  if ( !VfSafeMode )
  {
    _InterlockedExchange(&ViWdCancelling, 1);
    KeCancelTimer(&ViWdIrpTimer);
    KeRemoveQueueDpcEx((int *)&ViWdIrpTimerDpc, 1);
    result = (unsigned int)_InterlockedExchange(&ViWdCancelling, 0);
    if ( (a1 & 0x10) != 0 )
    {
      result = (unsigned int)VfWdCancelTimeoutTicks;
      if ( VfWdCancelTimeoutTicks )
        return KiSetTimerEx((__int64)&ViWdIrpTimer, -10000000LL, 0, 0, (__int64)&ViWdIrpTimerDpc);
    }
  }
  return result;
}
