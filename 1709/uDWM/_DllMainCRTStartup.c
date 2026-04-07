/*
 * XREFs of _DllMainCRTStartup @ 0x180046210
 * Callers:
 *     _DllMainStartup @ 0x180036470 (_DllMainStartup.c)
 * Callees:
 *     __security_init_cookie @ 0x180046580 (__security_init_cookie.c)
 */

__int64 __fastcall DllMainCRTStartup(HINSTANCE hinstDLL, DWORD fdwReason)
{
  if ( fdwReason == 1 )
    _security_init_cookie();
  return _DllMainCRTStartup(hinstDLL, fdwReason);
}
