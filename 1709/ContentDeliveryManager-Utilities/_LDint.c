/*
 * XREFs of _LDint @ 0x1800B2FDC
 * Callers:
 *     _LXp_addh @ 0x1800A0514 (_LXp_addh.c)
 *     _LXp_mulh @ 0x1800A0984 (_LXp_mulh.c)
 *     _LXp_setw @ 0x1800A0C94 (_LXp_setw.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int16 __fastcall LDint(_WORD *a1, __int16 a2)
{
  return Dint(a1, a2);
}
