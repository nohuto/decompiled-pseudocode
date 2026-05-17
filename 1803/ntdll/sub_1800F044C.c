/*
 * XREFs of sub_1800F044C @ 0x1800F044C
 * Callers:
 *     sub_1800F0490 @ 0x1800F0490 (sub_1800F0490.c)
 *     sub_1800F07E4 @ 0x1800F07E4 (sub_1800F07E4.c)
 *     sub_1800F09BC @ 0x1800F09BC (sub_1800F09BC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800F044C(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rax
  _QWORD *v3; // rax

  while ( 1 )
  {
    if ( a2 < a1[1] || a2 > a1[2] )
      return 0LL;
    v2 = a2 <= a1[1] ? 0LL : (a2 - a1[1]) / *a1;
    v3 = &a1[v2];
    if ( *a1 == 4096LL )
      break;
    a1 = (_QWORD *)v3[7];
    if ( !a1 )
      return 0LL;
  }
  return v3[7];
}
