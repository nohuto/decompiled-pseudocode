/*
 * XREFs of vDbgPrintEx @ 0x1800DAF70
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800085D4 @ 0x1800085D4 (sub_1800085D4.c)
 */

__int64 __fastcall vDbgPrintEx(unsigned int a1, unsigned int a2, char *a3, va_list a4)
{
  return sub_1800085D4(byte_180114112, a1, a2, a3, a4, 1);
}
