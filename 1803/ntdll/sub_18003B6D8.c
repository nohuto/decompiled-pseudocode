/*
 * XREFs of sub_18003B6D8 @ 0x18003B6D8
 * Callers:
 *     sub_18003B5F8 @ 0x18003B5F8 (sub_18003B5F8.c)
 *     sub_18007D794 @ 0x18007D794 (sub_18007D794.c)
 * Callees:
 *     <none>
 */

_UNKNOWN **__fastcall sub_18003B6D8(void *a1)
{
  _UNKNOWN **result; // rax

  for ( result = (_UNKNOWN **)off_1801565D8; result != &off_1801565D8; result = (_UNKNOWN **)*result )
  {
    if ( result[7] == a1 )
      return result;
  }
  return 0LL;
}
