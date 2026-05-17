/*
 * XREFs of _wtoi @ 0x18008D0E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800911D8 @ 0x1800911D8 (sub_1800911D8.c)
 */

int __cdecl wtoi(const wchar_t *String)
{
  int result; // eax

  result = 0;
  if ( String )
    return sub_1800911D8(String, 0LL, 10LL, 1LL);
  return result;
}
