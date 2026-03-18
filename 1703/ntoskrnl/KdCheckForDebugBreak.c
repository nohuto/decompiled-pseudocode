/*
 * XREFs of KdCheckForDebugBreak @ 0x140137A34
 * Callers:
 *     KeAccumulateTicks @ 0x1400F6700 (KeAccumulateTicks.c)
 *     IoWriteCrashDump @ 0x1401F1224 (IoWriteCrashDump.c)
 *     MiAddRangeToCrashDump @ 0x140212C24 (MiAddRangeToCrashDump.c)
 *     ConsumerPeekAndConsumeBuffer @ 0x140407A10 (ConsumerPeekAndConsumeBuffer.c)
 *     PopHiberCheckForDebugBreak @ 0x140408000 (PopHiberCheckForDebugBreak.c)
 * Callees:
 *     KdPollBreakIn @ 0x1401FC2C0 (KdPollBreakIn.c)
 */

void KdCheckForDebugBreak()
{
  if ( !KdPitchDebugger && (_BYTE)KdDebuggerEnabled || KdEventLoggingEnabled )
  {
    if ( (unsigned __int8)KdPollBreakIn() )
      DbgBreakPointWithStatus(1u);
  }
}
