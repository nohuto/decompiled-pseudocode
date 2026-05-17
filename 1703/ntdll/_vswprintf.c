/*
 * XREFs of _vswprintf @ 0x180097420
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __cdecl vswprintf(wchar_t *const Buffer, const wchar_t *const Format, va_list ArgList)
{
  return sub_18009742C(Buffer, Format, 0LL, ArgList);
}
