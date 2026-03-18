/*
 * XREFs of EmpSearchRuleDatabase @ 0x140070B50
 * Callers:
 *     EmClientQueryRuleState @ 0x140404750 (EmClientQueryRuleState.c)
 *     EmClientRuleEvaluate @ 0x140404840 (EmClientRuleEvaluate.c)
 *     EmpClientRuleRegisterNotification @ 0x140683AF8 (EmpClientRuleRegisterNotification.c)
 *     EmpParseRuleTerm @ 0x140805944 (EmpParseRuleTerm.c)
 *     EmpParseRules @ 0x140805F54 (EmpParseRules.c)
 *     EmpParseTargetRules @ 0x1408064DC (EmpParseTargetRules.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall EmpSearchRuleDatabase(_QWORD *a1)
{
  _QWORD *i; // rdx
  _QWORD *v2; // r8
  __int64 v3; // r9

  for ( i = (_QWORD *)EmpRuleListHead; ; i = (_QWORD *)*i )
  {
    v2 = 0LL;
    if ( !i )
      break;
    v2 = i - 3;
    v3 = *(i - 3) - *a1;
    if ( !v3 )
      v3 = v2[1] - a1[1];
    if ( !v3 )
      break;
  }
  return v2;
}
