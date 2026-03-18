/*
 * XREFs of VfShutdownScheduleWatchdog @ 0x140277DAC
 * Callers:
 *     PopGracefulShutdown @ 0x140431740 (PopGracefulShutdown.c)
 * Callees:
 *     ViShutdownScheduleWatchdog @ 0x1407B8778 (ViShutdownScheduleWatchdog.c)
 */

__int64 VfShutdownScheduleWatchdog()
{
  __int64 result; // rax

  if ( ViVerifierEnabled )
    return ViShutdownScheduleWatchdog();
  return result;
}
