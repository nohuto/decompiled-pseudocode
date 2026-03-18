/*
 * XREFs of PopBatteryUpdateCurrentState @ 0x140611B78
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x14027B24C (PopCaptureSleepStudyStatistics.c)
 *     NtPowerInformation @ 0x1405203C4 (NtPowerInformation.c)
 *     PopCurrentPowerStatePrecise @ 0x1405EA830 (PopCurrentPowerStatePrecise.c)
 * Callees:
 *     ExBlockOnAddressPushLock @ 0x1400A1CF0 (ExBlockOnAddressPushLock.c)
 *     PopBatteryQueueWork @ 0x14016CA8C (PopBatteryQueueWork.c)
 */

__int64 PopBatteryUpdateCurrentState()
{
  unsigned __int64 v0; // rbx
  __int64 result; // rax
  __int64 v2; // [rsp+40h] [rbp+8h] BYREF

  v0 = MEMORY[0xFFFFF78000000008];
  while ( 1 )
  {
    v2 = qword_1403AA410;
    result = qword_1403AA410 + 50000000;
    if ( qword_1403AA410 + 50000000 > v0 )
      break;
    PopBatteryQueueWork(1u);
    ExBlockOnAddressPushLock((__int64)&qword_1403AA418, &qword_1403AA410, &v2, 8uLL, 0LL);
  }
  return result;
}
