/*
 * XREFs of VfShutdownScheduleWatchdog @ 0x14025153C
 * Callers:
 *     PopGracefulShutdown @ 0x1404199F0 (PopGracefulShutdown.c)
 * Callees:
 *     ViShutdownScheduleWatchdog @ 0x140776988 (ViShutdownScheduleWatchdog.c)
 */

__int64 VfShutdownScheduleWatchdog()
{
  __int64 result; // rax

  if ( ViVerifierEnabled )
    return ViShutdownScheduleWatchdog();
  return result;
}
