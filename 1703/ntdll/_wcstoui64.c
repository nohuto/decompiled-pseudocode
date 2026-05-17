/*
 * XREFs of _wcstoui64 @ 0x180097940
 * Callers:
 *     <none>
 * Callees:
 *     sub_18009796C @ 0x18009796C (sub_18009796C.c)
 */

unsigned __int64 __cdecl wcstoui64(const wchar_t *String, wchar_t **EndPtr, int Radix)
{
  return sub_18009796C((unsigned int)&off_180110B08, (_DWORD)String, (_DWORD)EndPtr, Radix, 1, 0LL);
}
