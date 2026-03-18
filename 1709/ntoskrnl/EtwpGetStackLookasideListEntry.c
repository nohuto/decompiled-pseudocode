/*
 * XREFs of EtwpGetStackLookasideListEntry @ 0x14027FA00
 * Callers:
 *     EtwpEventWriteFull @ 0x140087F40 (EtwpEventWriteFull.c)
 *     EtwpTraceStackWalk @ 0x14027FF24 (EtwpTraceStackWalk.c)
 *     EtwpWriteUserEvent @ 0x1404CC5B0 (EtwpWriteUserEvent.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x140188F70 (RtlpInterlockedPopEntrySList.c)
 */

PSLIST_ENTRY EtwpGetStackLookasideListEntry()
{
  PSLIST_ENTRY v0; // rax

  v0 = RtlpInterlockedPopEntrySList(&EtwpStackLookAsideList);
  if ( v0 )
    return v0 + 1;
  else
    return 0LL;
}
