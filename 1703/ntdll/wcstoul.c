/*
 * XREFs of wcstoul @ 0x18009BFC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18009BD48 @ 0x18009BD48 (sub_18009BD48.c)
 */

unsigned int __cdecl wcstoul(const wchar_t *String, wchar_t **EndPtr, int Radix)
{
  return sub_18009BD48((__int64)&off_180110B08, (unsigned __int16 *)String, EndPtr, Radix, 1, 0);
}
