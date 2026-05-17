/*
 * XREFs of TpWaitForWork @ 0x180057E60
 * Callers:
 *     sub_180056DF4 @ 0x180056DF4 (sub_180056DF4.c)
 * Callees:
 *     sub_18002C5FC @ 0x18002C5FC (sub_18002C5FC.c)
 *     sub_180058A10 @ 0x180058A10 (sub_180058A10.c)
 */

unsigned int *__fastcall TpWaitForWork(_QWORD *a1, int a2)
{
  unsigned int *result; // rax

  result = (unsigned int *)sub_180058A10(a1, 0LL, 0LL);
  if ( (_DWORD)result )
    return sub_18002C5FC(a1, a2);
  return result;
}
