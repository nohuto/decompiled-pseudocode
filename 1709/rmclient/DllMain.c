/*
 * XREFs of DllMain @ 0x1800080C0
 * Callers:
 *     __DllMainCRTStartup @ 0x180007520 (__DllMainCRTStartup.c)
 * Callees:
 *     RmpClientInitializeCoreApi @ 0x180005350 (RmpClientInitializeCoreApi.c)
 *     ?FreeResourceManagerProxy@@YAXXZ @ 0x1800053C0 (-FreeResourceManagerProxy@@YAXXZ.c)
 *     TraceLoggingRegisterEx @ 0x18000AB40 (TraceLoggingRegisterEx.c)
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
    dword_18001B000 = 0;
  }
  return 1;
}
