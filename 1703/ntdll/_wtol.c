/*
 * XREFs of _wtol @ 0x180097CE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __cdecl wtol(const wchar_t *String)
{
  if ( String )
    return sub_18009BF88(String, 0LL, 10LL, 1LL);
  else
    return 0;
}
