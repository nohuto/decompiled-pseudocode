/*
 * XREFs of _FXp_setn @ 0x1800AC7C4
 * Callers:
 *     _Stofx @ 0x1800A4C68 (_Stofx.c)
 * Callees:
 *     _FXp_addh @ 0x1800AC07C (_FXp_addh.c)
 *     _FXp_mulh @ 0x1800AC4DC (_FXp_mulh.c)
 *     _FXp_setw @ 0x1800AC848 (_FXp_setw.c)
 */

float *__fastcall FXp_setn(float *a1, unsigned int a2, int a3)
{
  int v6; // ebx

  v6 = a3 / 10000;
  FXp_setw(a1, a2);
  FXp_mulh(a1, a2, 10000.0);
  FXp_addh(a1, a2, (float)(a3 - 10000 * v6));
  return a1;
}
