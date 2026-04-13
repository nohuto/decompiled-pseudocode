/*
 * XREFs of _LDscale @ 0x1800A050C
 * Callers:
 *     _Stoldx @ 0x180098C34 (_Stoldx.c)
 *     _LXp_addh @ 0x1800A0514 (_LXp_addh.c)
 *     _LXp_mulh @ 0x1800A0984 (_LXp_mulh.c)
 *     _LXp_setw @ 0x1800A0C94 (_LXp_setw.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall LDscale(_WORD *a1, int a2)
{
  return Dscale(a1, a2);
}
