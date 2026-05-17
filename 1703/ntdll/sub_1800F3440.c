/*
 * XREFs of sub_1800F3440 @ 0x1800F3440
 * Callers:
 *     sub_1800F3AF8 @ 0x1800F3AF8 (sub_1800F3AF8.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall sub_1800F3440(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rax
  int v5; // ecx

  while ( 1 )
  {
    if ( a2 < a1[1] || a2 > a1[2] )
      return 0;
    v3 = a2 <= a1[1] ? 0LL : (a2 - a1[1]) / *a1;
    if ( *a1 == 4096LL )
      break;
    a1 = (_QWORD *)a1[v3 + 7];
    if ( !a1 )
      return 0;
  }
  v5 = *((char *)a1 + (v3 >> 3) + 24);
  return _bittest(&v5, v3 & 7);
}
