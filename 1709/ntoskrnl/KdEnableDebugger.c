/*
 * XREFs of KdEnableDebugger @ 0x140201630
 * Callers:
 *     KdpStub @ 0x1400DA644 (KdpStub.c)
 *     NtSystemDebugControl @ 0x140761F40 (NtSystemDebugControl.c)
 *     KiVerifyXcpt15 @ 0x14080C330 (KiVerifyXcpt15.c)
 *     KiFilterFiberContext @ 0x14080CBA0 (KiFilterFiberContext.c)
 * Callees:
 *     KdEnableDebuggerWithLock @ 0x14020166C (KdEnableDebuggerWithLock.c)
 *     KeRelaxTimingConstraints @ 0x1402024BC (KeRelaxTimingConstraints.c)
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
