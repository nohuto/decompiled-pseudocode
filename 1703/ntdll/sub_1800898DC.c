/*
 * XREFs of sub_1800898DC @ 0x1800898DC
 * Callers:
 *     sub_180081D84 @ 0x180081D84 (sub_180081D84.c)
 *     sub_180089798 @ 0x180089798 (sub_180089798.c)
 *     sub_1800D65C8 @ 0x1800D65C8 (sub_1800D65C8.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1800898DC(__int64 a1, __int64 a2)
{
  char v2; // r8

  v2 = 0;
  if ( !a2 || (a2 & *(_QWORD *)(a1 + 16)) != 0 && (a2 & *(_QWORD *)(a1 + 24)) == *(_QWORD *)(a1 + 24) )
    return 1;
  return v2;
}
