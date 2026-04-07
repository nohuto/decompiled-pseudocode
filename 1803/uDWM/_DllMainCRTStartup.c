/*
 * XREFs of _DllMainCRTStartup @ 0x180049B60
 * Callers:
 *     _DllMainStartup @ 0x180039270 (_DllMainStartup.c)
 * Callees:
 *     __security_init_cookie @ 0x180049ED0 (__security_init_cookie.c)
 */

__int64 __fastcall DllMainCRTStartup(HINSTANCE hinstDLL, DWORD fdwReason)
{
  if ( fdwReason == 1 )
    _security_init_cookie();
  return _DllMainCRTStartup(hinstDLL, fdwReason);
}
