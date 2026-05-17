/*
 * XREFs of sub_1800169B4 @ 0x1800169B4
 * Callers:
 *     sub_180011380 @ 0x180011380 (sub_180011380.c)
 *     sub_180011A40 @ 0x180011A40 (sub_180011A40.c)
 *     sub_180012130 @ 0x180012130 (sub_180012130.c)
 *     sub_1800132E0 @ 0x1800132E0 (sub_1800132E0.c)
 *     sub_180014090 @ 0x180014090 (sub_180014090.c)
 *     sub_180014660 @ 0x180014660 (sub_180014660.c)
 *     sub_180016810 @ 0x180016810 (sub_180016810.c)
 *     sub_180080D00 @ 0x180080D00 (sub_180080D00.c)
 *     sub_1800957D0 @ 0x1800957D0 (sub_1800957D0.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1800169B4(__int64 a1)
{
  if ( a1 )
  {
    if ( MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] >= *(_QWORD *)(a1 + 24) )
      *(_QWORD *)(a1 + 24) = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - *(_QWORD *)(a1 + 24);
  }
}
