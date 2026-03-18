/*
 * XREFs of PopPowerRequestNotifyAudioStateChanged @ 0x14014D38C
 * Callers:
 *     PopWnfAudioCallback @ 0x1405E8F00 (PopWnfAudioCallback.c)
 * Callees:
 *     PopAcquirePowerRequestPushLock @ 0x14051D5A8 (PopAcquirePowerRequestPushLock.c)
 *     PopReleasePowerRequestPushLock @ 0x140524B6C (PopReleasePowerRequestPushLock.c)
 *     PopHandleExecutionRequiredEnablementUpdate @ 0x1405E8FEC (PopHandleExecutionRequiredEnablementUpdate.c)
 *     PopStatsNotifyAudioState @ 0x1405E9034 (PopStatsNotifyAudioState.c)
 */

__int64 __fastcall PopPowerRequestNotifyAudioStateChanged(__int64 a1)
{
  char v1; // bl
  __int64 v2; // rcx

  v1 = a1;
  LOBYTE(a1) = 1;
  PopAcquirePowerRequestPushLock(a1);
  LOBYTE(v2) = v1;
  BYTE1(PopExecutionRequiredContext) = v1;
  PopStatsNotifyAudioState(v2);
  PopHandleExecutionRequiredEnablementUpdate();
  return PopReleasePowerRequestPushLock();
}
