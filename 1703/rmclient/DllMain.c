/*
 * XREFs of DllMain @ 0x180007C90
 * Callers:
 *     sub_180007550 @ 0x180007550 (sub_180007550.c)
 * Callees:
 *     RmpClientInitializeCoreApi @ 0x180004DC0 (RmpClientInitializeCoreApi.c)
 *     ?FreeResourceManagerProxy@@YAXXZ @ 0x180004E60 (-FreeResourceManagerProxy@@YAXXZ.c)
 *     TraceLoggingRegisterEx @ 0x180004E90 (TraceLoggingRegisterEx.c)
 */

// local variable allocation has failed, the output may be wrong!
BOOL __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  if ( fdwReason )
  {
    if ( fdwReason == 1 )
    {
      TraceLoggingRegisterEx((TraceLoggingHProvider)hinstDLL, *(TLG_PENABLECALLBACK *)&fdwReason, lpvReserved);
      RmpClientInitializeCoreApi();
      DisableThreadLibraryCalls(hinstDLL);
    }
  }
  else
  {
    FreeResourceManagerProxy();
    EventUnregister(RegHandle);
    RegHandle = 0LL;
    dword_180018000 = 0;
  }
  return 1;
}
