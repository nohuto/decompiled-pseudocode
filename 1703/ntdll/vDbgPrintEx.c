/*
 * XREFs of vDbgPrintEx @ 0x1800E13A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18005FF34 @ 0x18005FF34 (sub_18005FF34.c)
 */

__int64 __fastcall vDbgPrintEx(unsigned int a1, unsigned int a2, char *a3, va_list a4)
{
  return sub_18005FF34(byte_1801150C2, a1, a2, a3, a4, 1);
}
