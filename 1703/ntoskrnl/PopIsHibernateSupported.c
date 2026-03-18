/*
 * XREFs of PopIsHibernateSupported @ 0x1404C5968
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x140168960 (PopCheckAndHandleThermalConditions.c)
 *     PopPolicySystemIdle @ 0x1404C55E0 (PopPolicySystemIdle.c)
 *     PopIsDozeSupported @ 0x1404C592C (PopIsDozeSupported.c)
 *     PopVerifyPowerActionPolicy @ 0x140581174 (PopVerifyPowerActionPolicy.c)
 *     PopVerifySystemPowerState @ 0x140581AE8 (PopVerifySystemPowerState.c)
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
