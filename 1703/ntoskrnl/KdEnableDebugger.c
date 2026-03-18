/*
 * XREFs of KdEnableDebugger @ 0x1401FB920
 * Callers:
 *     KdpStub @ 0x14000822C (KdpStub.c)
 *     NtSystemDebugControl @ 0x140722478 (NtSystemDebugControl.c)
 *     KiVerifyXcpt15 @ 0x1407DC2E0 (KiVerifyXcpt15.c)
 *     KiFilterFiberContext @ 0x1407DCB40 (KiFilterFiberContext.c)
 * Callees:
 *     KdEnableDebuggerWithLock @ 0x1401FB95C (KdEnableDebuggerWithLock.c)
 *     KeRelaxTimingConstraints @ 0x1401FC72C (KeRelaxTimingConstraints.c)
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
