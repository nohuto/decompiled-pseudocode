/*
 * XREFs of sub_180062954 @ 0x180062954
 * Callers:
 *     RtlCreateProcessParametersEx @ 0x180062490 (RtlCreateProcessParametersEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180062954(__int64 a1)
{
  if ( a1 && *(_WORD *)(a1 + 2) >= *(_WORD *)a1 && (!*(_WORD *)a1 || *(_QWORD *)(a1 + 8)) )
    return 0LL;
  else
    return 3221225485LL;
}
