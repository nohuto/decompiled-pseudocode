/*
 * XREFs of vDbgPrintEx @ 0x1800E13A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18005FF34 @ 0x18005FF34 (sub_18005FF34.c)
 */

ULONG __cdecl vDbgPrintEx(ULONG ComponentId, ULONG Level, PCCH Format, va_list arglist)
{
  return sub_18005FF34(&dword_1801150C2, ComponentId, Level, (char *)Format, arglist, 1);
}
