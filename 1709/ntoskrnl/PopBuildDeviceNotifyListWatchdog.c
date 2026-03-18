/*
 * XREFs of PopBuildDeviceNotifyListWatchdog @ 0x1404372E0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     PnpBugcheckPowerTimeout @ 0x1401FEB24 (PnpBugcheckPowerTimeout.c)
 */

void __fastcall __noreturn PopBuildDeviceNotifyListWatchdog(
        struct _KDPC *Dpc,
        struct _KEVENT *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  KeSetEvent(DeferredContext, 0, 0);
  PnpBugcheckPowerTimeout();
}
