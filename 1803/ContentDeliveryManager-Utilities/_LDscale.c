/*
 * XREFs of _LDscale @ 0x1800AD808
 * Callers:
 *     _Stoldx @ 0x1800A5CDC (_Stoldx.c)
 *     _LXp_addh @ 0x1800AD810 (_LXp_addh.c)
 *     _LXp_mulh @ 0x1800ADBF4 (_LXp_mulh.c)
 *     _LXp_setw @ 0x1800ADF08 (_LXp_setw.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall LDscale(unsigned __int16 *a1, int a2)
{
  return Dscale(a1, a2);
}
