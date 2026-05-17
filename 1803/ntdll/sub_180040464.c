/*
 * XREFs of sub_180040464 @ 0x180040464
 * Callers:
 *     sub_1800403C4 @ 0x1800403C4 (sub_1800403C4.c)
 *     sub_1800403FC @ 0x1800403FC (sub_1800403FC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180040464(__int64 a1)
{
  __int64 result; // rax
  unsigned __int16 v2; // dx

  result = 0LL;
  if ( (*(_BYTE *)a1 & 1) != 0 )
    return 3221225485LL;
  v2 = *(_WORD *)(a1 + 2);
  if ( (v2 & 1) != 0 || *(_WORD *)a1 > v2 || v2 == 0xFFFF || !*(_QWORD *)(a1 + 8) && (*(_WORD *)a1 || v2) )
    return 3221225485LL;
  return result;
}
