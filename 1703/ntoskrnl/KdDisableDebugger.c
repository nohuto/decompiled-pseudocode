/*
 * XREFs of KdDisableDebugger @ 0x140168320
 * Callers:
 *     NtSystemDebugControl @ 0x140722478 (NtSystemDebugControl.c)
 *     KiVerifyXcpt15 @ 0x1407DC2E0 (KiVerifyXcpt15.c)
 *     KiFilterFiberContext @ 0x1407DCB40 (KiFilterFiberContext.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS KdDisableDebugger(void)
{
  return KdDisableDebuggerWithLock();
}
