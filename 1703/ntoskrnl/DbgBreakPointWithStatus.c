/*
 * XREFs of DbgBreakPointWithStatus @ 0x1401893F0
 * Callers:
 *     vDbgPrintExWithPrefixInternal @ 0x1400690F0 (vDbgPrintExWithPrefixInternal.c)
 *     KdCheckForDebugBreak @ 0x140137A34 (KdCheckForDebugBreak.c)
 *     KiBugCheckDebugBreak @ 0x1401FFED0 (KiBugCheckDebugBreak.c)
 *     PopInvokeSystemStateHandler @ 0x140405BB8 (PopInvokeSystemStateHandler.c)
 *     NtSystemDebugControl @ 0x140722478 (NtSystemDebugControl.c)
 *     ExpDebuggerWorker @ 0x140789040 (ExpDebuggerWorker.c)
 *     InitBootProcessor @ 0x140809FC8 (InitBootProcessor.c)
 * Callees:
 *     <none>
 */

void __stdcall DbgBreakPointWithStatus(ULONG Status)
{
  __debugbreak();
}
