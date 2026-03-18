/*
 * XREFs of DbgBreakPointWithStatus @ 0x140188EF0
 * Callers:
 *     vDbgPrintExWithPrefixInternal @ 0x140132910 (vDbgPrintExWithPrefixInternal.c)
 *     KdCheckForDebugBreak @ 0x1401F8968 (KdCheckForDebugBreak.c)
 *     KiBugCheckDebugBreak @ 0x140206350 (KiBugCheckDebugBreak.c)
 *     PopInvokeSystemStateHandler @ 0x140439AE4 (PopInvokeSystemStateHandler.c)
 *     NtSystemDebugControl @ 0x140761F40 (NtSystemDebugControl.c)
 *     ExpDebuggerWorker @ 0x140796030 (ExpDebuggerWorker.c)
 *     InitBootProcessor @ 0x14082FD94 (InitBootProcessor.c)
 * Callees:
 *     <none>
 */

void __stdcall DbgBreakPointWithStatus(ULONG Status)
{
  __debugbreak();
}
