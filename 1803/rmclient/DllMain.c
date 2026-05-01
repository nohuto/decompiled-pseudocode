/*
 * XREFs of DllMain @ 0x1800075F4
 * Callers:
 *     __DllMainCRTStartup @ 0x180006D80 (__DllMainCRTStartup.c)
 * Callees:
 *     RmpClientInitializeCoreApi @ 0x1800065A0 (RmpClientInitializeCoreApi.c)
 *     ?FreeResourceManagerProxy@@YAXXZ @ 0x1800068C0 (-FreeResourceManagerProxy@@YAXXZ.c)
 *     TraceLoggingRegisterEx @ 0x180009C40 (TraceLoggingRegisterEx.c)
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
    dword_18001C000 = 0;
  }
  return 1;
}
