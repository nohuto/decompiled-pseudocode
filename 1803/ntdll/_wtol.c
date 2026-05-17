/*
 * XREFs of _wtol @ 0x18008D130
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __cdecl wtol(const wchar_t *String)
{
  if ( String )
    return sub_1800911D8(String, 0LL, 10LL, 1LL);
  else
    return 0;
}
