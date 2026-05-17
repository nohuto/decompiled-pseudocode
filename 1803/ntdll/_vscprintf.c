/*
 * XREFs of _vscprintf @ 0x18008C720
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __cdecl vscprintf(const char *const Format, va_list ArgList)
{
  return sub_18008C7F8(sub_180091650, Format, 0LL, ArgList);
}
