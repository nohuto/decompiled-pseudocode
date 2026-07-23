/*
 * XREFs of KeFreeInterrupt @ 0x14014B93C
 * Callers:
 *     IoDisconnectInterrupt @ 0x1405883B0 (IoDisconnectInterrupt.c)
 *     IopConnectInterrupt @ 0x14058887C (IopConnectInterrupt.c)
 * Callees:
 *     <none>
 */

PSLIST_ENTRY __fastcall KeFreeInterrupt(_SLIST_ENTRY *a1)
{
  return RtlpInterlockedPushEntrySList((PSLIST_HEADER)&a1[16].Next[1550], a1);
}
