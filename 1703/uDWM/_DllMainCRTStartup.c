/*
 * XREFs of _DllMainCRTStartup @ 0x18004D850
 * Callers:
 *     _DllMainStartup @ 0x18004A430 (_DllMainStartup.c)
 * Callees:
 *     __security_init_cookie @ 0x18004DBC0 (__security_init_cookie.c)
 */

__int64 __fastcall DllMainCRTStartup(HINSTANCE hinstDLL, DWORD fdwReason)
{
  if ( fdwReason == 1 )
    _security_init_cookie();
  return _DllMainCRTStartup(hinstDLL, fdwReason);
}
