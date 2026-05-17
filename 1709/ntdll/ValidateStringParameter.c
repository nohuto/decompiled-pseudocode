/*
 * XREFs of ValidateStringParameter @ 0x18006B45C
 * Callers:
 *     RtlCreateProcessParametersEx @ 0x18006AFA0 (RtlCreateProcessParametersEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ValidateStringParameter(__int64 a1)
{
  if ( a1 && *(_WORD *)(a1 + 2) >= *(_WORD *)a1 && (!*(_WORD *)a1 || *(_QWORD *)(a1 + 8)) )
    return 0LL;
  else
    return 3221225485LL;
}
