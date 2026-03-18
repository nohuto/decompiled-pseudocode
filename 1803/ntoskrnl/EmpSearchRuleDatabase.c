/*
 * XREFs of EmpSearchRuleDatabase @ 0x1400749C4
 * Callers:
 *     EmClientQueryRuleState @ 0x14046FAB0 (EmClientQueryRuleState.c)
 *     EmClientRuleEvaluate @ 0x14046FBA0 (EmClientRuleEvaluate.c)
 *     EmpClientRuleRegisterNotification @ 0x1407136A0 (EmpClientRuleRegisterNotification.c)
 *     EmpParseRuleTerm @ 0x1408A9EDC (EmpParseRuleTerm.c)
 *     EmpParseRules @ 0x1408AA4CC (EmpParseRules.c)
 *     EmpParseTargetRules @ 0x1408AAA58 (EmpParseTargetRules.c)
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
