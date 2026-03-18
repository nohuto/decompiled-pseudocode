/*
 * XREFs of KdRefreshDebuggerNotPresent @ 0x14015D520
 * Callers:
 *     KeBugCheck2 @ 0x1402052B0 (KeBugCheck2.c)
 * Callees:
 *     KdEnterDebugger @ 0x140796C6C (KdEnterDebugger.c)
 *     KdExitDebugger @ 0x140796D74 (KdExitDebugger.c)
 *     KdpPrintString @ 0x140799F70 (KdpPrintString.c)
 */

BOOLEAN KdRefreshDebuggerNotPresent(void)
{
  __int64 v1; // rax
  char v2; // di
  BOOLEAN v3; // bl
  __int64 v4; // rcx
  __int16 v5; // [rsp+20h] [rbp-18h] BYREF
  const char *v6; // [rsp+28h] [rbp-10h]

  if ( KdPitchDebugger )
    return 1;
  v1 = -1LL;
  v6 = "KDTARGET: Refreshing KD connection\n";
  do
    ++v1;
  while ( aKdtargetRefres[v1] );
  v5 = v1;
  v2 = KdEnterDebugger(0LL);
  KdpPrintString(&v5);
  v3 = (unsigned __int8)KdDebuggerNotPresent;
  LOBYTE(v4) = v2;
  KdExitDebugger(v4);
  return v3;
}
