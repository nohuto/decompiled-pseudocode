/*
 * XREFs of sub_180093D28 @ 0x180093D28
 * Callers:
 *     sub_180092E68 @ 0x180092E68 (sub_180092E68.c)
 *     sub_180092F8C @ 0x180092F8C (sub_180092F8C.c)
 *     sub_1800936D0 @ 0x1800936D0 (sub_1800936D0.c)
 *     sub_180093D58 @ 0x180093D58 (sub_180093D58.c)
 * Callees:
 *     _errno @ 0x180083380 (_errno.c)
 */

int *__fastcall sub_180093D28(int a1)
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
