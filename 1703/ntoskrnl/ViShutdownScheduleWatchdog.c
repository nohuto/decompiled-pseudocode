/*
 * XREFs of ViShutdownScheduleWatchdog @ 0x140776988
 * Callers:
 *     VfShutdownScheduleWatchdog @ 0x14025153C (VfShutdownScheduleWatchdog.c)
 *     ViShutdownWatchdogExecuteDpc @ 0x140776A10 (ViShutdownWatchdogExecuteDpc.c)
 * Callees:
 *     KiSetTimerEx @ 0x14004D040 (KiSetTimerEx.c)
 *     KeInitializeDpc @ 0x140088A30 (KeInitializeDpc.c)
 *     KeInitializeTimerEx @ 0x14010F0E0 (KeInitializeTimerEx.c)
 */

__int64 ViShutdownScheduleWatchdog()
{
  if ( !VfShutdownThread )
    VfShutdownThread = (__int64)KeGetCurrentThread();
  KeInitializeDpc(&ViShutdownWatchdogDpc, ViShutdownWatchdogExecuteDpc, 0LL);
  KeInitializeTimerEx(&ViShutdownWatchdogTimer, NotificationTimer);
  return KiSetTimerEx((__int64)&ViShutdownWatchdogTimer, -6000000000LL, 0, 0, (__int64)&ViShutdownWatchdogDpc);
}
