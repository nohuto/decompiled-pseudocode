/*
 * XREFs of sub_1800093DC @ 0x1800093DC
 * Callers:
 *     sub_180009380 @ 0x180009380 (sub_180009380.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800093DC(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r8

  v2 = *(_QWORD *)(a2 + 24) & 0xFFFFFFFFFFFF0000uLL;
  if ( a1 < v2 )
    return 0xFFFFFFFFLL;
  else
    return a1 > v2;
}
