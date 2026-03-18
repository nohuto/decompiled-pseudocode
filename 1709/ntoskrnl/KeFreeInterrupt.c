/*
 * XREFs of KeFreeInterrupt @ 0x140129318
 * Callers:
 *     IopConnectInterrupt @ 0x1404EBE88 (IopConnectInterrupt.c)
 *     IoDisconnectInterrupt @ 0x14058E500 (IoDisconnectInterrupt.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x140188FB0 (RtlpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY __fastcall KeFreeInterrupt(PSLIST_ENTRY ListEntry)
{
  return RtlpInterlockedPushEntrySList((PSLIST_HEADER)&ListEntry[16].Next[732], ListEntry);
}
