/*
 * XREFs of ?WakeInjectedFlushWaiter@@YAXXZ @ 0x1C010CDD0
 * Callers:
 *     ProcessQueuedMouseEvents @ 0x1C00FF6A4 (ProcessQueuedMouseEvents.c)
 *     EditionForegroundQAccessibleToMouseProducer @ 0x1C0106FD0 (EditionForegroundQAccessibleToMouseProducer.c)
 * Callees:
 *     <none>
 */

void __fastcall WakeInjectedFlushWaiter(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( (unsigned int)IsDwmInputThread(a1, a2, a3, a4) )
  {
    if ( gbMouseInjectionBlockedOnDIT )
      KeSetEvent(gpkeDITMouseInjectionResponseEvent, 1, 0);
  }
}
