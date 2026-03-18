/*
 * XREFs of KeFreeInterrupt @ 0x1401686B0
 * Callers:
 *     IoDisconnectInterrupt @ 0x14060B8E0 (IoDisconnectInterrupt.c)
 *     IopConnectInterrupt @ 0x14060BCDC (IopConnectInterrupt.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1401B2C10 (RtlpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY __fastcall KeFreeInterrupt(PSLIST_ENTRY ListEntry)
{
  return RtlpInterlockedPushEntrySList((PSLIST_HEADER)&ListEntry[16].Next[732], ListEntry);
}
