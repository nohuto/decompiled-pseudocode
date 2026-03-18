/*
 * XREFs of PopIsHibernateSupported @ 0x1404E8714
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x1402436CC (PopCheckAndHandleThermalConditions.c)
 *     PopPolicySystemIdle @ 0x1404E8080 (PopPolicySystemIdle.c)
 *     PopIsDozeSupported @ 0x1404E86D8 (PopIsDozeSupported.c)
 *     PopVerifyPowerActionPolicy @ 0x1405B977C (PopVerifyPowerActionPolicy.c)
 *     PopVerifySystemPowerState @ 0x1405B987C (PopVerifySystemPowerState.c)
 * Callees:
 *     <none>
 */

bool __fastcall PopIsHibernateSupported(_BYTE *a1)
{
  bool result; // al

  result = 0;
  if ( a1[6] )
  {
    if ( a1[8] )
      return a1[22] == 2;
  }
  return result;
}
