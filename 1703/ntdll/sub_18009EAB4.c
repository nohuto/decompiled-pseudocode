/*
 * XREFs of sub_18009EAB4 @ 0x18009EAB4
 * Callers:
 *     sub_18009DBEC @ 0x18009DBEC (sub_18009DBEC.c)
 *     sub_18009DD10 @ 0x18009DD10 (sub_18009DD10.c)
 *     sub_18009E460 @ 0x18009E460 (sub_18009E460.c)
 *     sub_18009EAE4 @ 0x18009EAE4 (sub_18009EAE4.c)
 * Callees:
 *     _errno @ 0x180088F50 (_errno.c)
 */

int *__fastcall sub_18009EAB4(int a1)
{
  int *result; // rax

  if ( a1 == 1 )
  {
    result = errno();
    *result = 33;
  }
  else
  {
    result = (int *)(unsigned int)(a1 - 2);
    if ( (unsigned int)result <= 1 )
    {
      result = errno();
      *result = 34;
    }
  }
  return result;
}
