/*
 * XREFs of EmpSearchTargetRuleList @ 0x140070B2C
 * Callers:
 *     EmpUpdateRuleState @ 0x140070B88 (EmpUpdateRuleState.c)
 *     EmClientQueryRuleState @ 0x140404750 (EmClientQueryRuleState.c)
 *     EmClientRuleEvaluate @ 0x140404840 (EmClientRuleEvaluate.c)
 *     EmpClientRuleRegisterNotification @ 0x140683AF8 (EmpClientRuleRegisterNotification.c)
 *     EmpParseTargetRules @ 0x1408064DC (EmpParseTargetRules.c)
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
