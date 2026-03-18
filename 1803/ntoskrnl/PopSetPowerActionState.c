/*
 * XREFs of PopSetPowerActionState @ 0x14014E860
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x1404714E0 (PopTransitionSystemPowerStateEx.c)
 *     PopExecutePowerAction @ 0x1405EB7B4 (PopExecutePowerAction.c)
 *     PopPolicyWorkerAction @ 0x1405EBDD0 (PopPolicyWorkerAction.c)
 *     PopPolicyWorkerActionPromote @ 0x1405EF2E0 (PopPolicyWorkerActionPromote.c)
 * Callees:
 *     PopDeepSleepClearDisengageReason @ 0x1400732CC (PopDeepSleepClearDisengageReason.c)
 *     PopDeepSleepSetDisengageReason @ 0x1400733E0 (PopDeepSleepSetDisengageReason.c)
 */

__int64 __fastcall PopSetPowerActionState(char a1)
{
  __int64 result; // rax

  if ( byte_1403AA061 != a1 )
  {
    byte_1403AA061 = a1;
    if ( a1 )
      return PopDeepSleepSetDisengageReason(5);
    else
      return PopDeepSleepClearDisengageReason(5);
  }
  return result;
}
