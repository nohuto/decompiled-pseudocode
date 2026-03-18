/*
 * XREFs of PopAvlDeleteStatsForPowerRequest @ 0x14058D1BC
 * Callers:
 *     PopStatsDeletePowerRequest @ 0x1404E7920 (PopStatsDeletePowerRequest.c)
 *     PopPublishAndPurgePowerRequestStats @ 0x14070C050 (PopPublishAndPurgePowerRequestStats.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvl @ 0x1400DFA50 (RtlDeleteElementGenericTableAvl.c)
 *     PoUninitializeStopWatch @ 0x140128D18 (PoUninitializeStopWatch.c)
 *     PopGetStopWatchByRequestType @ 0x14058D224 (PopGetStopWatchByRequestType.c)
 *     PopFreeUnicodeString @ 0x14058D284 (PopFreeUnicodeString.c)
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
