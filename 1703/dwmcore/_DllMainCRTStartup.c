/*
 * XREFs of _DllMainCRTStartup @ 0x1800D3CE0
 * Callers:
 *     _DllMainStartup @ 0x1800C8640 (_DllMainStartup.c)
 * Callees:
 *     __security_init_cookie @ 0x1800D40C0 (__security_init_cookie.c)
 */

__int64 __fastcall DllMainCRTStartup(HINSTANCE hinstDLL, DWORD fdwReason)
{
  if ( fdwReason == 1 )
    _security_init_cookie();
  return _DllMainCRTStartup(hinstDLL, fdwReason);
}
