/*
 * XREFs of PopSetPowerActionState @ 0x140138370
 * Callers:
 *     NtSetSystemPowerState @ 0x140408DF4 (NtSetSystemPowerState.c)
 *     PopPolicyWorkerAction @ 0x1405767C0 (PopPolicyWorkerAction.c)
 *     PopExecutePowerAction @ 0x140577024 (PopExecutePowerAction.c)
 *     PopPolicyWorkerActionPromote @ 0x14057A2B0 (PopPolicyWorkerActionPromote.c)
 * Callees:
 *     PopDeepSleepSetDisengageReason @ 0x14006F418 (PopDeepSleepSetDisengageReason.c)
 */

__int64 __fastcall PopSetPowerActionState(char a1)
{
  __int64 result; // rax

  if ( byte_14034B181 != a1 )
  {
    byte_14034B181 = a1;
    if ( a1 )
      return PopDeepSleepSetDisengageReason(5);
    else
      return PopDeepSleepClearDisengageReason(5);
  }
  return result;
}
