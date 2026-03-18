/*
 * XREFs of PopBatteryUpdateCurrentState @ 0x14057D4B4
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x1402301D4 (PopCaptureSleepStudyStatistics.c)
 *     NtPowerInformation @ 0x1404C2F2C (NtPowerInformation.c)
 *     PopCurrentPowerStatePrecise @ 0x140577B60 (PopCurrentPowerStatePrecise.c)
 * Callees:
 *     ExBlockOnAddressPushLock @ 0x14006BD30 (ExBlockOnAddressPushLock.c)
 *     PopBatteryQueueWork @ 0x14014A7C0 (PopBatteryQueueWork.c)
 */

__int64 PopBatteryUpdateCurrentState()
{
  unsigned __int64 v0; // rbx
  __int64 result; // rax
  __int64 v2; // [rsp+40h] [rbp+8h] BYREF

  v0 = MEMORY[0xFFFFF78000000008];
  while ( 1 )
  {
    v2 = qword_14034B518;
    result = qword_14034B518 + 50000000;
    if ( qword_14034B518 + 50000000 > v0 )
      break;
    PopBatteryQueueWork(1u);
    ExBlockOnAddressPushLock((__int64)&qword_14034B520, &qword_14034B518, &v2, 8uLL, 0LL);
  }
  return result;
}
