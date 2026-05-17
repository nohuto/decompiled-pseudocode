/*
 * XREFs of wcstoul @ 0x180091210
 * Callers:
 *     <none>
 * Callees:
 *     sub_180090F98 @ 0x180090F98 (sub_180090F98.c)
 */

unsigned int __cdecl wcstoul(const wchar_t *String, wchar_t **EndPtr, int Radix)
{
  return sub_180090F98((__int64)&off_180110AF8, (unsigned __int16 *)String, EndPtr, Radix, 1, 0);
}
