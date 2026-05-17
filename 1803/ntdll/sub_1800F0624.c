/*
 * XREFs of sub_1800F0624 @ 0x1800F0624
 * Callers:
 *     sub_1800F0584 @ 0x1800F0584 (sub_1800F0584.c)
 *     sub_1800F0D74 @ 0x1800F0D74 (sub_1800F0D74.c)
 * Callees:
 *     memset @ 0x1800A16C0 (memset.c)
 */

void *__fastcall sub_1800F0624(_QWORD *a1, _QWORD *a2)
{
  void *result; // rax

  result = memset(a1, 0, 0x840uLL);
  a1[263] = a2;
  if ( a2 )
  {
    result = (void *)(*a2 >> 8);
    *a1 = result;
  }
  return result;
}
