/*
 * XREFs of PopBuildDeviceNotifyListWatchdog @ 0x140486D70
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     PnpBugcheckPowerTimeout @ 0x14023B4F0 (PnpBugcheckPowerTimeout.c)
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
