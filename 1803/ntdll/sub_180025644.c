/*
 * XREFs of sub_180025644 @ 0x180025644
 * Callers:
 *     sub_1800254A0 @ 0x1800254A0 (sub_1800254A0.c)
 *     sub_18002A150 @ 0x18002A150 (sub_18002A150.c)
 *     sub_18002C774 @ 0x18002C774 (sub_18002C774.c)
 *     sub_180046810 @ 0x180046810 (sub_180046810.c)
 *     sub_180054B20 @ 0x180054B20 (sub_180054B20.c)
 *     sub_180075FE0 @ 0x180075FE0 (sub_180075FE0.c)
 *     sub_180076EF0 @ 0x180076EF0 (sub_180076EF0.c)
 *     sub_1800773B0 @ 0x1800773B0 (sub_1800773B0.c)
 *     sub_180108E80 @ 0x180108E80 (sub_180108E80.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_180025644(__int64 a1)
{
  if ( a1 )
  {
    if ( MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] >= *(_QWORD *)(a1 + 24) )
      *(_QWORD *)(a1 + 24) = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - *(_QWORD *)(a1 + 24);
  }
}
