/*
 * XREFs of _wcstoui64 @ 0x18008CDA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18008CDCC @ 0x18008CDCC (sub_18008CDCC.c)
 */

unsigned __int64 __cdecl wcstoui64(const wchar_t *String, wchar_t **EndPtr, int Radix)
{
  return sub_18008CDCC((unsigned int)&off_180110AF8, (_DWORD)String, (_DWORD)EndPtr, Radix, 1, 0LL);
}
