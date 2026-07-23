/*
 * XREFs of DbgPrintReturnControlC @ 0x1800E12F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18005FF34 @ 0x18005FF34 (sub_18005FF34.c)
 */

__int64 DbgPrintReturnControlC(char *a1, ...)
{
  va_list va; // [rsp+48h] [rbp+10h] BYREF

  va_start(va, a1);
  return sub_18005FF34(&dword_1801150C2, 0x65u, 0, a1, va, 0);
}
