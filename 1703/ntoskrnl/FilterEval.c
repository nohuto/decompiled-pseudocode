/*
 * XREFs of FilterEval @ 0x1404B9E70
 * Callers:
 *     ConstraintEval @ 0x14044A89C (ConstraintEval.c)
 *     PiDqQueryEvaluateFilter @ 0x1404B9CB0 (PiDqQueryEvaluateFilter.c)
 *     ValidFilter @ 0x1404DBBC0 (ValidFilter.c)
 * Callees:
 *     FilterEvalStrict @ 0x1404B9EAC (FilterEvalStrict.c)
 *     FilterEvalImpliedAnd @ 0x1404BD870 (FilterEvalImpliedAnd.c)
 */

__int64 __fastcall FilterEval(int a1, int a2, int a3, _DWORD *a4, __int64 a5)
{
  if ( !a3 )
    return 3221225485LL;
  if ( (*a4 & 0xFF00000) != 0 )
    return FilterEvalStrict(a1, a2, a3, (_DWORD)a4, a5);
  return FilterEvalImpliedAnd(a1, a2, a3, (_DWORD)a4, a5);
}
