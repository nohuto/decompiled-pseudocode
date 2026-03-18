/*
 * XREFs of PopAvlDeleteStatsForPowerRequest @ 0x1405250AC
 * Callers:
 *     PopStatsDeletePowerRequest @ 0x140524A08 (PopStatsDeletePowerRequest.c)
 *     PopPublishAndPurgePowerRequestStats @ 0x14076F51C (PopPublishAndPurgePowerRequestStats.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvl @ 0x14006D290 (RtlDeleteElementGenericTableAvl.c)
 *     PoUninitializeStopWatch @ 0x140077140 (PoUninitializeStopWatch.c)
 *     PopGetStopWatchByRequestType @ 0x140525114 (PopGetStopWatchByRequestType.c)
 *     PopFreeUnicodeString @ 0x140525474 (PopFreeUnicodeString.c)
 */

__int64 __fastcall PopAvlDeleteStatsForPowerRequest(char *Buffer)
{
  unsigned int i; // ebx
  _QWORD *StopWatchByRequestType; // rax
  __int128 v5; // [rsp+20h] [rbp-18h] BYREF

  for ( i = 0; i < 4; ++i )
  {
    StopWatchByRequestType = (_QWORD *)PopGetStopWatchByRequestType(Buffer, i, 0LL);
    if ( StopWatchByRequestType )
      PoUninitializeStopWatch(StopWatchByRequestType);
  }
  v5 = *(_OWORD *)(Buffer + 8);
  RtlDeleteElementGenericTableAvl(&PowerRequestStatsDatabase, Buffer);
  return PopFreeUnicodeString(&v5);
}
