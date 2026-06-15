/*
 * XREFs of wWinMainCRTStartup @ 0x14001CB80
 * Callers:
 *     <none>
 * Callees:
 *     __security_init_cookie @ 0x14001D2F4 (__security_init_cookie.c)
 */

__int64 wWinMainCRTStartup()
{
  _security_init_cookie();
  return _scrt_common_main_seh();
}
