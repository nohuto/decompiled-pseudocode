/*
 * XREFs of sub_180100D30 @ 0x180100D30
 * Callers:
 *     sub_180020404 @ 0x180020404 (sub_180020404.c)
 *     sub_180020EF0 @ 0x180020EF0 (sub_180020EF0.c)
 *     sub_180023990 @ 0x180023990 (sub_180023990.c)
 *     sub_180023C90 @ 0x180023C90 (sub_180023C90.c)
 *     sub_180025780 @ 0x180025780 (sub_180025780.c)
 *     sub_180029FC0 @ 0x180029FC0 (sub_180029FC0.c)
 * Callees:
 *     sub_1800F22CC @ 0x1800F22CC (sub_1800F22CC.c)
 */

unsigned __int64 __fastcall sub_180100D30(__int64 a1, __int64 a2)
{
  __int64 v2; // r8

  v2 = 0LL;
  if ( !a1
    || (a1 ^ qword_18015BFA8 ^ *(_QWORD *)((a2 & 0xFFFFFFFFFFF00000uLL) + 0x10) ^ ((a2 & 0xFFFFFFFFFFF00000uLL) >> 20)) == 0xA2E64EADA2E64EADuLL )
  {
    return (a2 & 0xFFFFFFFFFFF00000uLL) + 32LL * (unsigned int)((a2 - (a2 & 0xFFFFFFFFFFF00000uLL)) >> 12);
  }
  return v2;
}
