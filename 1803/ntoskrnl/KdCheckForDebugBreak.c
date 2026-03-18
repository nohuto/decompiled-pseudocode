/*
 * XREFs of KdCheckForDebugBreak @ 0x14014F22C
 * Callers:
 *     KeAccumulateTicks @ 0x14010D530 (KeAccumulateTicks.c)
 *     IoWriteCrashDump @ 0x140233E8C (IoWriteCrashDump.c)
 *     MiAddRangeToCrashDump @ 0x140256F18 (MiAddRangeToCrashDump.c)
 *     PopHiberCheckForDebugBreak @ 0x140474DD8 (PopHiberCheckForDebugBreak.c)
 * Callees:
 *     DbgBreakPointWithStatus @ 0x1401B2B50 (DbgBreakPointWithStatus.c)
 *     KdPollBreakIn @ 0x14023F130 (KdPollBreakIn.c)
 */

void KdCheckForDebugBreak()
{
  if ( !KdPitchDebugger && (_BYTE)KdDebuggerEnabled || KdEventLoggingEnabled )
  {
    if ( (unsigned __int8)KdPollBreakIn() )
      DbgBreakPointWithStatus(1u);
  }
}
