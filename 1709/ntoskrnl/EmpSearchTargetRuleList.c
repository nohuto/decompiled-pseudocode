/*
 * XREFs of EmpSearchTargetRuleList @ 0x1400B0F88
 * Callers:
 *     EmpUpdateRuleState @ 0x1400B0FE4 (EmpUpdateRuleState.c)
 *     EmClientQueryRuleState @ 0x140424330 (EmClientQueryRuleState.c)
 *     EmClientRuleEvaluate @ 0x140424420 (EmClientRuleEvaluate.c)
 *     EmpClientRuleRegisterNotification @ 0x1406AEDF0 (EmpClientRuleRegisterNotification.c)
 *     EmpParseTargetRules @ 0x14083484C (EmpParseTargetRules.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall EmpSearchTargetRuleList(__int64 a1)
{
  _QWORD *i; // rdx
  _QWORD *result; // rax

  for ( i = (_QWORD *)EmpTargetRuleListHead; ; i = (_QWORD *)*i )
  {
    result = 0LL;
    if ( !i )
      break;
    result = i - 4;
    if ( *(i - 3) == a1 )
      break;
  }
  return result;
}
