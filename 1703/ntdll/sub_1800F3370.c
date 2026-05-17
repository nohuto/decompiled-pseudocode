/*
 * XREFs of sub_1800F3370 @ 0x1800F3370
 * Callers:
 *     sub_1800F33B4 @ 0x1800F33B4 (sub_1800F33B4.c)
 *     sub_1800F36F0 @ 0x1800F36F0 (sub_1800F36F0.c)
 *     sub_1800F38C8 @ 0x1800F38C8 (sub_1800F38C8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800F3370(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rax

  while ( 1 )
  {
    if ( a2 < a1[1] || a2 > a1[2] )
      return 0LL;
    v2 = a2 <= a1[1] ? 0LL : (a2 - a1[1]) / *a1;
    if ( *a1 == 4096LL )
      break;
    a1 = (_QWORD *)a1[v2 + 7];
    if ( !a1 )
      return 0LL;
  }
  return a1[v2 + 7];
}
