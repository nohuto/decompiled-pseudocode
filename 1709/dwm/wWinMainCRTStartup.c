/*
 * XREFs of wWinMainCRTStartup @ 0x140003930
 * Callers:
 *     <none>
 * Callees:
 *     __security_init_cookie @ 0x140004150 (__security_init_cookie.c)
 */

int wWinMainCRTStartup()
{
  _security_init_cookie();
  return sub_1400036CC();
}
