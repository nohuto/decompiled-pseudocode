/*
 * XREFs of DbgBreakPointWithStatus @ 0x1401B2B50
 * Callers:
 *     vDbgPrintExWithPrefixInternal @ 0x140077340 (vDbgPrintExWithPrefixInternal.c)
 *     KdCheckForDebugBreak @ 0x14014F22C (KdCheckForDebugBreak.c)
 *     KiBugCheckDebugBreak @ 0x140243B30 (KiBugCheckDebugBreak.c)
 *     PopInvokeSystemStateHandler @ 0x140472BF4 (PopInvokeSystemStateHandler.c)
 *     NtSystemDebugControl @ 0x1407C9A08 (NtSystemDebugControl.c)
 *     ExpDebuggerWorker @ 0x140803030 (ExpDebuggerWorker.c)
 *     InitBootProcessor @ 0x1408A6138 (InitBootProcessor.c)
 * Callees:
 *     <none>
 */

void __stdcall DbgBreakPointWithStatus(ULONG Status)
{
  __debugbreak();
}
