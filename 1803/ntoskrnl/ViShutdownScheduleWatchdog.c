/*
 * XREFs of ViShutdownScheduleWatchdog @ 0x140825A08
 * Callers:
 *     VfShutdownScheduleWatchdog @ 0x1402AAEBC (VfShutdownScheduleWatchdog.c)
 *     ViShutdownWatchdogExecuteDpc @ 0x140825A90 (ViShutdownWatchdogExecuteDpc.c)
 * Callees:
 *     KeInitializeDpc @ 0x140038FE0 (KeInitializeDpc.c)
 *     KiSetTimerEx @ 0x14005AB60 (KiSetTimerEx.c)
 *     KeInitializeTimerEx @ 0x1401325F0 (KeInitializeTimerEx.c)
 */

__int64 ViShutdownScheduleWatchdog()
{
  if ( !VfShutdownThread )
    VfShutdownThread = (ULONG_PTR)KeGetCurrentThread();
  KeInitializeDpc(&ViShutdownWatchdogDpc, ViShutdownWatchdogExecuteDpc, 0LL);
  KeInitializeTimerEx(&ViShutdownWatchdogTimer, NotificationTimer);
  return KiSetTimerEx((__int64)&ViShutdownWatchdogTimer, -6000000000LL, 0, 0, (__int64)&ViShutdownWatchdogDpc);
}
