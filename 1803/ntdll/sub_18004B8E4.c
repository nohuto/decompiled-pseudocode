/*
 * XREFs of sub_18004B8E4 @ 0x18004B8E4
 * Callers:
 *     RtlCreateProcessParametersEx @ 0x18004B3F0 (RtlCreateProcessParametersEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18004B8E4(__int64 a1)
{
  if ( a1 && *(_WORD *)(a1 + 2) >= *(_WORD *)a1 && (!*(_WORD *)a1 || *(_QWORD *)(a1 + 8)) )
    return 0LL;
  else
    return 3221225485LL;
}
