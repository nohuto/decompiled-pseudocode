/*
 * XREFs of FilterEval @ 0x14050ACAC
 * Callers:
 *     PiDqQueryEvaluateFilter @ 0x14050AAEC (PiDqQueryEvaluateFilter.c)
 *     ValidFilter @ 0x140523E64 (ValidFilter.c)
 *     ConstraintEval @ 0x14056C1DC (ConstraintEval.c)
 * Callees:
 *     FilterEvalStrict @ 0x1404FDC24 (FilterEvalStrict.c)
 *     FilterEvalImpliedAnd @ 0x140572A2C (FilterEvalImpliedAnd.c)
 */

__int64 __fastcall FilterEval(
        __int64 (__fastcall *a1)(__int64, unsigned int *, unsigned int *, unsigned int *, __int64 *),
        __int64 a2,
        unsigned int a3,
        _DWORD *a4,
        _DWORD *a5)
{
  if ( !a3 )
    return 3221225485LL;
  if ( (*a4 & 0xFF00000) != 0 )
    return FilterEvalStrict(a1, a2, a3, a4, a5);
  return FilterEvalImpliedAnd((_DWORD)a1, a2, a3, (_DWORD)a4, (__int64)a5);
}
