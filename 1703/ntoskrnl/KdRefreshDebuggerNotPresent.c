/*
 * XREFs of KdRefreshDebuggerNotPresent @ 0x140168660
 * Callers:
 *     KeBugCheck2 @ 0x1401FEE60 (KeBugCheck2.c)
 * Callees:
 *     KdEnterDebugger @ 0x140789A24 (KdEnterDebugger.c)
 *     KdExitDebugger @ 0x140789B30 (KdExitDebugger.c)
 *     KdpPrintString @ 0x14078CD54 (KdpPrintString.c)
 */

BOOLEAN KdRefreshDebuggerNotPresent(void)
{
  char v1; // di
  BOOLEAN v2; // bl
  __int64 v3; // rcx
  __int16 v4; // [rsp+20h] [rbp-18h] BYREF
  const char *v5; // [rsp+28h] [rbp-10h]

  if ( KdPitchDebugger )
    return 1;
  v5 = "KDTARGET: Refreshing KD connection\n";
  v4 = 35;
  v1 = KdEnterDebugger(0LL);
  KdpPrintString(&v4);
  v2 = (unsigned __int8)KdDebuggerNotPresent;
  LOBYTE(v3) = v1;
  KdExitDebugger(v3);
  return v2;
}
