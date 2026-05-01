/*
 * XREFs of DllMain @ 0x180005094
 * Callers:
 *     dllmain_dispatch @ 0x1801E1D10 (dllmain_dispatch.c)
 * Callees:
 *     TraceLoggingRegister @ 0x180001078 (TraceLoggingRegister.c)
 *     McGenEventRegister @ 0x180005024 (McGenEventRegister.c)
 *     McGenEventUnregister @ 0x180005044 (McGenEventUnregister.c)
 */

// local variable allocation has failed, the output may be wrong!
BOOL __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  if ( fdwReason )
  {
    if ( fdwReason == 1 )
    {
      McGenEventRegister(
        (__int64)hinstDLL,
        *(__int64 *)&fdwReason,
        MICROSOFT_TWINUI_PUBLISHER_Context,
        MICROSOFT_TWINUI_PUBLISHER_Context);
      EventSetInformation(
        MICROSOFT_TWINUI_PUBLISHER_Context[0],
        2LL,
        &`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits,
        (unsigned __int16)`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits);
      TraceLoggingRegister((TraceLoggingHProvider)&hProvider);
      DisableThreadLibraryCalls(hinstDLL);
      g_pfnResultLoggingCallback = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))lambda_d1718e9f7fd95a1f0d98ee7927bf62b6_::_lambda_invoker_cdecl_;
    }
  }
  else
  {
    McGenEventUnregister(MICROSOFT_TWINUI_PUBLISHER_Context);
    EventUnregister(RegHandle);
    RegHandle = 0LL;
    hProvider = 0;
  }
  return 1;
}
