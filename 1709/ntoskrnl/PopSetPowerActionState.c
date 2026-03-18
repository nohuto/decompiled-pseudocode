/*
 * XREFs of PopSetPowerActionState @ 0x1402422E8
 * Callers:
 *     NtSetSystemPowerState @ 0x140437F10 (NtSetSystemPowerState.c)
 *     PopExecutePowerAction @ 0x1406FCCB4 (PopExecutePowerAction.c)
 *     PopPolicyWorkerAction @ 0x1406FD480 (PopPolicyWorkerAction.c)
 *     PopPolicyWorkerActionPromote @ 0x1406FD630 (PopPolicyWorkerActionPromote.c)
 * Callees:
 *     PopDeepSleepClearDisengageReason @ 0x1400AEF7C (PopDeepSleepClearDisengageReason.c)
 *     PopDeepSleepSetDisengageReason @ 0x1400AF04C (PopDeepSleepSetDisengageReason.c)
 */

__int64 __fastcall PopSetPowerActionState(char a1)
{
  __int64 result; // rax

  if ( byte_1403657E1 != a1 )
  {
    byte_1403657E1 = a1;
    if ( a1 )
      return PopDeepSleepSetDisengageReason(5);
    else
      return PopDeepSleepClearDisengageReason(5);
  }
  return result;
}
