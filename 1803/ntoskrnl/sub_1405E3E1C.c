/*
 * XREFs of sub_1405E3E1C @ 0x1405E3E1C
 * Callers:
 *     sub_1405E3DD8 @ 0x1405E3DD8 (sub_1405E3DD8.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

_WORD *__fastcall sub_1405E3E1C(_QWORD *a1)
{
  _WORD *result; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  result = ExAllocatePoolWithTag(PagedPool, 0x80uLL, 0x20534C53u);
  if ( result )
  {
    *a1 = 0x800000LL;
    a1[1] = result;
    *result = 0;
  }
  return result;
}
