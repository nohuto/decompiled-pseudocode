/*
 * XREFs of atol @ 0x1800967D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __cdecl atol(const char *String)
{
  if ( String )
    return sub_18009B238(String, 0LL, 10LL, 1LL);
  else
    return 0;
}
