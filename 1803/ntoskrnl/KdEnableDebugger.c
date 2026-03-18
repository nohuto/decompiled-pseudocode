/*
 * XREFs of KdEnableDebugger @ 0x14023E710
 * Callers:
 *     KdpStub @ 0x140131168 (KdpStub.c)
 *     NtSystemDebugControl @ 0x1407C9A08 (NtSystemDebugControl.c)
 *     KiVerifyXcpt15 @ 0x14087C330 (KiVerifyXcpt15.c)
 *     KiFilterFiberContext @ 0x14087CBB0 (KiFilterFiberContext.c)
 * Callees:
 *     KdEnableDebuggerWithLock @ 0x14023E74C (KdEnableDebuggerWithLock.c)
 *     KeRelaxTimingConstraints @ 0x14023F5C4 (KeRelaxTimingConstraints.c)
 */

NTSTATUS KdEnableDebugger(void)
{
  unsigned __int8 v0; // al
  __int64 v1; // rcx
  unsigned int v2; // edi
  NTSTATUS v3; // ebx

  v0 = KeRelaxTimingConstraints(1LL);
  LOBYTE(v1) = 1;
  v2 = v0;
  v3 = KdEnableDebuggerWithLock(v1);
  KeRelaxTimingConstraints(v2);
  return v3;
}
