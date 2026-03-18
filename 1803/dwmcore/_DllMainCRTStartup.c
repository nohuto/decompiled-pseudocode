/*
 * XREFs of _DllMainCRTStartup @ 0x1800DC6E0
 * Callers:
 *     _DllMainStartup @ 0x1800C7EC0 (_DllMainStartup.c)
 * Callees:
 *     __security_init_cookie @ 0x1800DC720 (__security_init_cookie.c)
 */

__int64 __fastcall DllMainCRTStartup(CCompositionLight *hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  if ( fdwReason == 1 )
    _security_init_cookie();
  return dllmain_dispatch(hinstDLL, fdwReason, lpvReserved);
}
