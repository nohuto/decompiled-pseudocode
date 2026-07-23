/*
 * XREFs of sub_180059D74 @ 0x180059D74
 * Callers:
 *     sub_18001BDD0 @ 0x18001BDD0 (sub_18001BDD0.c)
 * Callees:
 *     sub_180059DC0 @ 0x180059DC0 (sub_180059DC0.c)
 *     sub_1800830C4 @ 0x1800830C4 (sub_1800830C4.c)
 */

int __fastcall sub_180059D74(_DWORD *a1)
{
  int result; // eax

  result = a1[30];
  if ( (result & 0x20000000) != 0 )
  {
    result &= ~0x20000000u;
    a1[30] = result;
    if ( (dword_18015D42C & 1) == 0 )
    {
      sub_180059DC0(a1);
      result = a1[30];
    }
  }
  if ( (result & 0x10000000) != 0 )
  {
    a1[30] = result & 0xEFFFFFFF;
    result = sub_1800830C4(a1);
    a1[30] &= ~0x10000000u;
  }
  return result;
}
