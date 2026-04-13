/*
 * XREFs of _LDtest @ 0x1800C002C
 * Callers:
 *     _LXp_addh @ 0x1800AD810 (_LXp_addh.c)
 *     _LXp_mulh @ 0x1800ADBF4 (_LXp_mulh.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int16 __cdecl LDtest(long double *a1)
{
  return Dtest(a1);
}
