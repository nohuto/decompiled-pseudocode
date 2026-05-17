/*
 * XREFs of atoi @ 0x18008BA20
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800905D8 @ 0x1800905D8 (sub_1800905D8.c)
 */

int __cdecl atoi(const char *String)
{
  int result; // eax

  result = 0;
  if ( String )
    return sub_1800905D8(String, 0LL, 10LL, 1LL);
  return result;
}
