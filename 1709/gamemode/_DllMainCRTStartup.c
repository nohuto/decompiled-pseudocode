/*
 * XREFs of _DllMainCRTStartup @ 0x180002810
 * Callers:
 *     <none>
 * Callees:
 *     __security_init_cookie @ 0x180002BB0 (__security_init_cookie.c)
 */

BOOL __stdcall DllMainCRTStartup(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpReserved)
{
  if ( fdwReason == 1 )
    _security_init_cookie();
  return sub_180002850(hinstDLL, fdwReason);
}
