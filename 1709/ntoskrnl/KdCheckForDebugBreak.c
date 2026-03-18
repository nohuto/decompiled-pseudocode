/*
 * XREFs of KdCheckForDebugBreak @ 0x1401F8968
 * Callers:
 *     KeAccumulateTicks @ 0x1400987C0 (KeAccumulateTicks.c)
 *     IoWriteCrashDump @ 0x1401F6B7C (IoWriteCrashDump.c)
 *     MiAddRangeToCrashDump @ 0x14021A994 (MiAddRangeToCrashDump.c)
 *     PopHiberCheckForDebugBreak @ 0x14043356C (PopHiberCheckForDebugBreak.c)
 * Callees:
 *     DbgBreakPointWithStatus @ 0x140188EF0 (DbgBreakPointWithStatus.c)
 *     KdPollBreakIn @ 0x140201FD0 (KdPollBreakIn.c)
 */

void KdCheckForDebugBreak()
{
  if ( !KdPitchDebugger && (_BYTE)KdDebuggerEnabled || KdEventLoggingEnabled )
  {
    if ( (unsigned __int8)KdPollBreakIn() )
      DbgBreakPointWithStatus(1u);
  }
}
