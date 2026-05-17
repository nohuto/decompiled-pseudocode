/*
 * XREFs of sub_1800F13B0 @ 0x1800F13B0
 * Callers:
 *     sub_1800F13DC @ 0x1800F13DC (sub_1800F13DC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800F13B0(unsigned int a1, unsigned __int16 *a2, int a3)
{
  int v3; // eax

  for ( ; a3; --a3 )
  {
    v3 = *a2++;
    a1 = ((v3 + a1) >> 16) + (unsigned __int16)(v3 + a1);
  }
  return a1 + HIWORD(a1);
}
