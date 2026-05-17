/*
 * XREFs of _vscwprintf @ 0x18008C7E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __cdecl vscwprintf(const wchar_t *const Format, va_list ArgList)
{
  return sub_18008C7F8(sub_180091FB0, Format, 0LL, ArgList);
}
