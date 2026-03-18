/*
 * XREFs of PopIsDataAccruedByPowerRequestStats @ 0x140525048
 * Callers:
 *     PopStatsDeletePowerRequest @ 0x140524A08 (PopStatsDeletePowerRequest.c)
 * Callees:
 *     PoQueryStopWatch @ 0x140077178 (PoQueryStopWatch.c)
 *     PopGetStopWatchByRequestType @ 0x140525114 (PopGetStopWatchByRequestType.c)
 */

char __fastcall PopIsDataAccruedByPowerRequestStats(__int64 a1)
{
  char v1; // bl
  unsigned int v3; // edi
  _QWORD *StopWatchByRequestType; // rax
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  v3 = 0;
  while ( 1 )
  {
    StopWatchByRequestType = (_QWORD *)PopGetStopWatchByRequestType(a1, v3, 0LL);
    if ( StopWatchByRequestType )
    {
      PoQueryStopWatch(StopWatchByRequestType, &v6, 0LL);
      if ( v6 )
        break;
    }
    if ( ++v3 >= 4 )
      return v1;
  }
  return 1;
}
