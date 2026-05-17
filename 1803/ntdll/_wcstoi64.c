/*
 * XREFs of _wcstoi64 @ 0x18008CD70
 * Callers:
 *     _wtoi64 @ 0x18008D110 (_wtoi64.c)
 * Callees:
 *     sub_18008CDCC @ 0x18008CDCC (sub_18008CDCC.c)
 */

__int64 __cdecl wcstoi64(const wchar_t *String, wchar_t **EndPtr, int Radix)
{
  return sub_18008CDCC((unsigned int)&off_180110AF8, (_DWORD)String, (_DWORD)EndPtr, Radix, 0, 0LL);
}
