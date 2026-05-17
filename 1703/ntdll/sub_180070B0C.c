/*
 * XREFs of sub_180070B0C @ 0x180070B0C
 * Callers:
 *     sub_180070A6C @ 0x180070A6C (sub_180070A6C.c)
 *     sub_180070AA4 @ 0x180070AA4 (sub_180070AA4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180070B0C(__int64 a1)
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
