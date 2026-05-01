/*
 * XREFs of DllMain @ 0x180004D64
 * Callers:
 *     dllmain_dispatch @ 0x180193CB0 (dllmain_dispatch.c)
 * Callees:
 *     TraceLoggingRegister @ 0x180001078 (TraceLoggingRegister.c)
 *     McGenEventRegister @ 0x180004CD8 (McGenEventRegister.c)
 *     McGenEventUnregister @ 0x180004D08 (McGenEventUnregister.c)
 */

BOOL __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  if ( fdwReason )
  {
    if ( fdwReason == 1 )
    {
      McGenEventRegister();
      EventSetInformation(
        Microsoft_Windows_Immersive_ShellHandle,
        2LL,
        &`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits,
        (unsigned __int16)`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits);
      TraceLoggingRegister((TraceLoggingHProvider)&hProvider);
      DisableThreadLibraryCalls(hinstDLL);
      g_pfnResultLoggingCallback = (__int64)lambda_d1718e9f7fd95a1f0d98ee7927bf62b6_::_lambda_invoker_cdecl_;
    }
  }
  else
  {
    McGenEventUnregister();
    EventUnregister(RegHandle);
    RegHandle = 0LL;
    hProvider = 0;
  }
  return 1;
}
