/*
 * XREFs of _LDtest @ 0x1800B2FD4
 * Callers:
 *     _LXp_addh @ 0x1800A0514 (_LXp_addh.c)
 *     _LXp_mulh @ 0x1800A0984 (_LXp_mulh.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int16 __cdecl LDtest(long double *a1)
{
  return Dtest(a1);
}
