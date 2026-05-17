/*
 * XREFs of _vscwprintf @ 0x1800922B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __cdecl vscwprintf(const wchar_t *const Format, va_list ArgList)
{
  return vscprintf_helper(woutput_l, Format, 0LL, ArgList);
}
