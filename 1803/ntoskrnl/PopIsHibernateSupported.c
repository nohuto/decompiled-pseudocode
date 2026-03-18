/*
 * XREFs of PopIsHibernateSupported @ 0x14051CCB0
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x140180F10 (PopCheckAndHandleThermalConditions.c)
 *     PopCaptureSleepStudyStatistics @ 0x14027B24C (PopCaptureSleepStudyStatistics.c)
 *     PopPolicySystemIdle @ 0x14051C940 (PopPolicySystemIdle.c)
 *     PopIsDozeSupported @ 0x14051CC74 (PopIsDozeSupported.c)
 *     PopVerifyPowerActionPolicy @ 0x14061019C (PopVerifyPowerActionPolicy.c)
 *     PopVerifySystemPowerState @ 0x1406110A4 (PopVerifySystemPowerState.c)
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
