/*
 * XREFs of KdDisableDebugger @ 0x140186DC0
 * Callers:
 *     NtSystemDebugControl @ 0x1407C9A08 (NtSystemDebugControl.c)
 *     KiVerifyXcpt15 @ 0x14087C330 (KiVerifyXcpt15.c)
 *     KiFilterFiberContext @ 0x14087CBB0 (KiFilterFiberContext.c)
 * Callees:
 *     KdDisableDebuggerWithLock @ 0x140186DD4 (KdDisableDebuggerWithLock.c)
 */

NTSTATUS KdDisableDebugger(void)
{
  return KdDisableDebuggerWithLock();
}
