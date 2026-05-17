/*
 * XREFs of sub_1800EE040 @ 0x1800EE040
 * Callers:
 *     sub_1800EE06C @ 0x1800EE06C (sub_1800EE06C.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall sub_1800EE040(unsigned int a1, unsigned __int16 *a2, int a3)
{
  int v3; // eax

  for ( ; a3; --a3 )
  {
    v3 = *a2++;
    a1 = ((v3 + a1) >> 16) + (unsigned __int16)(v3 + a1);
  }
  return a1 + HIWORD(a1);
}
