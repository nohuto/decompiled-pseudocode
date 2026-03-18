/*
 * XREFs of PopDiagInterruptTimeToSystemTime @ 0x140438FC4
 * Callers:
 *     PopDiagTraceRtcWakeInfo @ 0x140246A9C (PopDiagTraceRtcWakeInfo.c)
 *     PopDiagTracePostSleepNotification @ 0x1404395A0 (PopDiagTracePostSleepNotification.c)
 *     PopTraceSystemIdleS0LowPowerDozeTimerArmed @ 0x1407064E8 (PopTraceSystemIdleS0LowPowerDozeTimerArmed.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopDiagInterruptTimeToSystemTime(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v3; // rcx

  result = MEMORY[0xFFFFF78000000014];
  if ( a1 >= 0 )
    v3 = a1 - MEMORY[0xFFFFF78000000008];
  else
    v3 = -a1;
  *a2 = MEMORY[0xFFFFF78000000014] + v3;
  return result;
}
