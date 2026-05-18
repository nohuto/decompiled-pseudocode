/*
 * XREFs of _DllMainCRTStartup @ 0x180008E40
 * Callers:
 *     _DllMainStartup @ 0x1800043D0 (_DllMainStartup.c)
 * Callees:
 *     __security_init_cookie @ 0x1800094B0 (__security_init_cookie.c)
 */

__int64 __fastcall DllMainCRTStartup(HINSTANCE hinstDLL, DWORD fdwReason)
{
  if ( fdwReason == 1 )
    _security_init_cookie();
  return sub_180008E80(hinstDLL, fdwReason);
}
