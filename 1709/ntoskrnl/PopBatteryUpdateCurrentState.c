/*
 * XREFs of PopBatteryUpdateCurrentState @ 0x1406FEBF8
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x140244A94 (PopCaptureSleepStudyStatistics.c)
 *     NtPowerInformation @ 0x1404E90A0 (NtPowerInformation.c)
 *     PopCurrentPowerStatePrecise @ 0x1406FECD0 (PopCurrentPowerStatePrecise.c)
 * Callees:
 *     ExBlockOnAddressPushLock @ 0x1400BD710 (ExBlockOnAddressPushLock.c)
 *     PopBatteryQueueWork @ 0x14014745C (PopBatteryQueueWork.c)
 */

__int64 PopBatteryUpdateCurrentState()
{
  unsigned __int64 v0; // rbx
  __int64 result; // rax
  __int64 v2; // [rsp+40h] [rbp+8h] BYREF

  v0 = MEMORY[0xFFFFF78000000008];
  while ( 1 )
  {
    v2 = qword_140365AB0;
    result = qword_140365AB0 + 50000000;
    if ( qword_140365AB0 + 50000000 > v0 )
      break;
    PopBatteryQueueWork(1u);
    ExBlockOnAddressPushLock(&qword_140365AB8, &qword_140365AB0, &v2, 8uLL, 0LL);
  }
  return result;
}
