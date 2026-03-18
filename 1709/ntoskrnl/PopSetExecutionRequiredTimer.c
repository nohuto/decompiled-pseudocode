/*
 * XREFs of PopSetExecutionRequiredTimer @ 0x1405F17F8
 * Callers:
 *     PopExecutionRequiredSettingCallback @ 0x1405F1760 (PopExecutionRequiredSettingCallback.c)
 *     PopPowerRequestNotifyStandbyStateChanged @ 0x1406F5B90 (PopPowerRequestNotifyStandbyStateChanged.c)
 * Callees:
 *     KiSetTimerEx @ 0x1400E1F70 (KiSetTimerEx.c)
 */

__int64 PopSetExecutionRequiredTimer()
{
  unsigned __int64 v0; // rcx
  __int64 v1; // rdx
  __int64 result; // rax

  if ( qword_1403671E8 && PopExecutionRequiredTimeout )
  {
    v0 = 10000000LL * (unsigned int)PopExecutionRequiredTimeout;
    if ( MEMORY[0xFFFFF78000000008] - qword_1403671E8 < v0 )
      v1 = MEMORY[0xFFFFF78000000008] - qword_1403671E8 - v0;
    else
      v1 = -10000000LL;
    return KiSetTimerEx((__int64)&PopExecutionRequiredTimer, v1, 0, 0, (__int64)&PopExecutionRequiredTimeoutDpc);
  }
  return result;
}
