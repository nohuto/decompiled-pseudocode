/*
 * XREFs of _Feraise @ 0x1800B2A44
 * Callers:
 *     _FXp_addh @ 0x18009EE1C (_FXp_addh.c)
 *     _FXp_mulh @ 0x18009F27C (_FXp_mulh.c)
 *     _Xp_addh @ 0x18009FAC4 (_Xp_addh.c)
 *     _Xp_mulh @ 0x18009FE88 (_Xp_mulh.c)
 *     _LXp_addh @ 0x1800A0514 (_LXp_addh.c)
 *     _LXp_mulh @ 0x1800A0984 (_LXp_mulh.c)
 * Callees:
 *     <none>
 */

void __cdecl Feraise(int a1)
{
  if ( (a1 & 5) != 0 )
  {
    *_errno() = 33;
  }
  else if ( (a1 & 0x18) != 0 )
  {
    *_errno() = 34;
  }
}
