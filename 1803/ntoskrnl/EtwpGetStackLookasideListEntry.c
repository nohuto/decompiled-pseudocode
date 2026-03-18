/*
 * XREFs of EtwpGetStackLookasideListEntry @ 0x1402AE040
 * Callers:
 *     EtwpEventWriteFull @ 0x1400EFAB0 (EtwpEventWriteFull.c)
 *     EtwpTraceStackWalk @ 0x1402AE564 (EtwpTraceStackWalk.c)
 *     EtwpWriteUserEvent @ 0x1404D3060 (EtwpWriteUserEvent.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x1401B2BD0 (RtlpInterlockedPopEntrySList.c)
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
