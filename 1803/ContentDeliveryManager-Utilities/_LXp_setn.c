/*
 * XREFs of _LXp_setn @ 0x1800ADEE8
 * Callers:
 *     _Stoldx @ 0x1800A5CDC (_Stoldx.c)
 * Callees:
 *     _LXp_setw @ 0x1800ADF08 (_LXp_setw.c)
 */

__int64 __fastcall LXp_setn(__int64 a1, __int64 a2)
{
  LXp_setw(a1, a2);
  return a1;
}
