/*
 * XREFs of KdDisableDebugger @ 0x14015CD40
 * Callers:
 *     NtSystemDebugControl @ 0x140761F40 (NtSystemDebugControl.c)
 *     KiVerifyXcpt15 @ 0x14080C330 (KiVerifyXcpt15.c)
 *     KiFilterFiberContext @ 0x14080CBA0 (KiFilterFiberContext.c)
 * Callees:
 *     KdDisableDebuggerWithLock @ 0x14015CD54 (KdDisableDebuggerWithLock.c)
 */

NTSTATUS KdDisableDebugger(void)
{
  return KdDisableDebuggerWithLock();
}
