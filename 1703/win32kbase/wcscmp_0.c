/*
 * XREFs of wcscmp_0 @ 0x1C00A1566
 * Callers:
 *     RIMGetProductString @ 0x1C00585D0 (RIMGetProductString.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl wcscmp_0(const wchar_t *Str1, const wchar_t *Str2)
{
  return wcscmp(Str1, Str2);
}
