/*
 * XREFs of EmpSearchRuleDatabase @ 0x1400B0FAC
 * Callers:
 *     EmClientQueryRuleState @ 0x140424330 (EmClientQueryRuleState.c)
 *     EmClientRuleEvaluate @ 0x140424420 (EmClientRuleEvaluate.c)
 *     EmpClientRuleRegisterNotification @ 0x1406AEDF0 (EmpClientRuleRegisterNotification.c)
 *     EmpParseRuleTerm @ 0x140833CB0 (EmpParseRuleTerm.c)
 *     EmpParseRules @ 0x1408342C0 (EmpParseRules.c)
 *     EmpParseTargetRules @ 0x14083484C (EmpParseTargetRules.c)
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
