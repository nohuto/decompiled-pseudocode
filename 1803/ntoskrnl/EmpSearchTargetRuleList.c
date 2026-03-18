/*
 * XREFs of EmpSearchTargetRuleList @ 0x1400749A0
 * Callers:
 *     EmpUpdateRuleState @ 0x1400749FC (EmpUpdateRuleState.c)
 *     EmClientQueryRuleState @ 0x14046FAB0 (EmClientQueryRuleState.c)
 *     EmClientRuleEvaluate @ 0x14046FBA0 (EmClientRuleEvaluate.c)
 *     EmpClientRuleRegisterNotification @ 0x1407136A0 (EmpClientRuleRegisterNotification.c)
 *     EmpParseTargetRules @ 0x1408AAA58 (EmpParseTargetRules.c)
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
