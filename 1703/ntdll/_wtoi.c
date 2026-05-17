/*
 * XREFs of _wtoi @ 0x180097C90
 * Callers:
 *     <none>
 * Callees:
 *     sub_18009BF88 @ 0x18009BF88 (sub_18009BF88.c)
 */

int __cdecl wtoi(const wchar_t *String)
{
  int result; // eax

  result = 0;
  if ( String )
    return sub_18009BF88(String, 0LL, 10LL, 1LL);
  return result;
}
