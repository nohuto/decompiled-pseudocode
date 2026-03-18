/*
 * XREFs of VfShutdownScheduleWatchdog @ 0x1402AAEBC
 * Callers:
 *     PopGracefulShutdown @ 0x140485D40 (PopGracefulShutdown.c)
 * Callees:
 *     ViShutdownScheduleWatchdog @ 0x140825A08 (ViShutdownScheduleWatchdog.c)
 */

__int64 VfShutdownScheduleWatchdog()
{
  __int64 result; // rax

  if ( ViVerifierEnabled )
    return ViShutdownScheduleWatchdog();
  return result;
}
