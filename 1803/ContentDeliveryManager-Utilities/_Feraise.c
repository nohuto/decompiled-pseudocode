/*
 * XREFs of _Feraise @ 0x1800BFA9C
 * Callers:
 *     _FXp_addh @ 0x1800AC07C (_FXp_addh.c)
 *     _FXp_mulh @ 0x1800AC4DC (_FXp_mulh.c)
 *     _Xp_addh @ 0x1800ACD38 (_Xp_addh.c)
 *     _Xp_mulh @ 0x1800AD184 (_Xp_mulh.c)
 *     _LXp_addh @ 0x1800AD810 (_LXp_addh.c)
 *     _LXp_mulh @ 0x1800ADBF4 (_LXp_mulh.c)
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
