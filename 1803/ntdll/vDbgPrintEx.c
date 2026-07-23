/*
 * XREFs of vDbgPrintEx @ 0x1800DAF70
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800085D4 @ 0x1800085D4 (sub_1800085D4.c)
 */

ULONG __cdecl vDbgPrintEx(ULONG ComponentId, ULONG Level, PCCH Format, va_list arglist)
{
  return sub_1800085D4(&dword_180114112, ComponentId, Level, (char *)Format, arglist, 1);
}
