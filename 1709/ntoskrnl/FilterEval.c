/*
 * XREFs of FilterEval @ 0x1405297BC
 * Callers:
 *     PiDqQueryEvaluateFilter @ 0x14052969C (PiDqQueryEvaluateFilter.c)
 *     ConstraintEval @ 0x140580B24 (ConstraintEval.c)
 *     ValidFilter @ 0x140594A04 (ValidFilter.c)
 * Callees:
 *     FilterEvalStrict @ 0x140529CE0 (FilterEvalStrict.c)
 *     FilterEvalImpliedAnd @ 0x14052E36C (FilterEvalImpliedAnd.c)
 */

__int64 __fastcall FilterEval(int a1, int a2, int a3, _DWORD *a4, __int64 a5)
{
  if ( !a3 )
    return 3221225485LL;
  if ( (*a4 & 0xFF00000) != 0 )
    return FilterEvalStrict(a1, a2, a3, (_DWORD)a4, a5);
  return FilterEvalImpliedAnd(a1, a2, a3, (_DWORD)a4, a5);
}
