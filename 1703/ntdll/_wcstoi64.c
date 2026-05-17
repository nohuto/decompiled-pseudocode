/*
 * XREFs of _wcstoi64 @ 0x180097910
 * Callers:
 *     _wtoi64 @ 0x180097CC0 (_wtoi64.c)
 * Callees:
 *     sub_18009796C @ 0x18009796C (sub_18009796C.c)
 */

__int64 __cdecl wcstoi64(const wchar_t *String, wchar_t **EndPtr, int Radix)
{
  return sub_18009796C((unsigned int)&off_180110B08, (_DWORD)String, (_DWORD)EndPtr, Radix, 0, 0LL);
}
