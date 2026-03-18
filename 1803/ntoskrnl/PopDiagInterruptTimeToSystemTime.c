/*
 * XREFs of PopDiagInterruptTimeToSystemTime @ 0x1404710C0
 * Callers:
 *     PopDiagTraceRtcWakeInfo @ 0x14014E370 (PopDiagTraceRtcWakeInfo.c)
 *     PopDiagTracePostSleepNotification @ 0x140470AB8 (PopDiagTracePostSleepNotification.c)
 *     PopTraceSystemIdleS0LowPowerDozeTimerArmed @ 0x14076A414 (PopTraceSystemIdleS0LowPowerDozeTimerArmed.c)
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
