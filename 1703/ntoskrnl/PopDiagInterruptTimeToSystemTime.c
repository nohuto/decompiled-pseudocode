/*
 * XREFs of PopDiagInterruptTimeToSystemTime @ 0x14040A480
 * Callers:
 *     PopDiagTraceRtcWakeInfo @ 0x140138514 (PopDiagTraceRtcWakeInfo.c)
 *     PopDiagTracePostSleepNotification @ 0x14040A5A0 (PopDiagTracePostSleepNotification.c)
 *     PopTraceSystemIdleS0LowPowerDozeTimerArmed @ 0x1406CEE74 (PopTraceSystemIdleS0LowPowerDozeTimerArmed.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopDiagInterruptTimeToSystemTime(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v3; // rcx

  result = MEMORY[0xFFFFF78000000014];
  if ( a1 < 0 )
    v3 = -a1;
  else
    v3 = a1 - MEMORY[0xFFFFF78000000008];
  *a2 = MEMORY[0xFFFFF78000000014] + v3;
  return result;
}
