/*
 * XREFs of atoi @ 0x1800967A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18009B238 @ 0x18009B238 (sub_18009B238.c)
 */

int __cdecl atoi(const char *String)
{
  int result; // eax

  result = 0;
  if ( String )
    return sub_18009B238(String, 0LL, 10LL, 1LL);
  return result;
}
