/*
 * XREFs of wcscmp_0 @ 0x1C00AA9E5
 * Callers:
 *     RIMGetProductString @ 0x1C000E9E0 (RIMGetProductString.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl wcscmp_0(const wchar_t *Str1, const wchar_t *Str2)
{
  return wcscmp(Str1, Str2);
}
