/*
 * XREFs of atol @ 0x18008BA50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __cdecl atol(const char *String)
{
  if ( String )
    return sub_1800905D8(String, 0LL, 10LL, 1LL);
  else
    return 0;
}
