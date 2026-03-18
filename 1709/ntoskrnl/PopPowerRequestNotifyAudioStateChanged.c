/*
 * XREFs of PopPowerRequestNotifyAudioStateChanged @ 0x14000EF00
 * Callers:
 *     PopWnfAudioCallback @ 0x140451960 (PopWnfAudioCallback.c)
 * Callees:
 *     PopStatsNotifyAudioState @ 0x140451A2C (PopStatsNotifyAudioState.c)
 *     PopAcquirePowerRequestPushLock @ 0x1404E7E70 (PopAcquirePowerRequestPushLock.c)
 *     PopReleasePowerRequestPushLock @ 0x1404E9084 (PopReleasePowerRequestPushLock.c)
 *     PopHandleExecutionRequiredEnablementUpdate @ 0x14059F4BC (PopHandleExecutionRequiredEnablementUpdate.c)
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
