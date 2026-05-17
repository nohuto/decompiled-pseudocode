/*
 * XREFs of sub_1800F353C @ 0x1800F353C
 * Callers:
 *     sub_1800F349C @ 0x1800F349C (sub_1800F349C.c)
 *     sub_1800F3C5C @ 0x1800F3C5C (sub_1800F3C5C.c)
 * Callees:
 *     memset @ 0x1800ABDC0 (memset.c)
 */

void *__fastcall sub_1800F353C(_QWORD *a1, _QWORD *a2)
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
