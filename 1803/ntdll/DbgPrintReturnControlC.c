/*
 * XREFs of DbgPrintReturnControlC @ 0x1800DAEC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800085D4 @ 0x1800085D4 (sub_1800085D4.c)
 */

__int64 DbgPrintReturnControlC(char *a1, ...)
{
  va_list va; // [rsp+48h] [rbp+10h] BYREF

  va_start(va, a1);
  return sub_1800085D4(&dword_180114112, 0x65u, 0, a1, va, 0);
}
