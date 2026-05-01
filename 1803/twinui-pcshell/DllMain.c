/*
 * XREFs of DllMain @ 0x18009C5CC
 * Callers:
 *     dllmain_dispatch @ 0x18009800C (dllmain_dispatch.c)
 * Callees:
 *     TraceLoggingRegisterEx @ 0x180095C44 (TraceLoggingRegisterEx.c)
 *     ?SetResultLoggingCallback@wil@@YAXP6AXAEBUFailureInfo@1@@Z@Z @ 0x1800961FC (-SetResultLoggingCallback@wil@@YAXP6AXAEBUFailureInfo@1@@Z@Z.c)
 *     McGenEventRegister @ 0x180096230 (McGenEventRegister.c)
 *     McGenEventUnregister @ 0x180101450 (McGenEventUnregister.c)
 *     SHFusionUninitialize @ 0x180101634 (SHFusionUninitialize.c)
 */

// local variable allocation has failed, the output may be wrong!
// Hidden C++ exception states: #wind=1
BOOL __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  TLG_PENABLECALLBACK v4; // rdx
  PVOID v5; // r8
  void (*v6)(const struct wil::FailureInfo *); // rdx
  __int64 v7; // rcx

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
      TraceLoggingRegisterEx((TraceLoggingHProvider)&hProvider, v4, v5);
      hModule = hinstDLL;
      dword_1804382F0 = 123;
      DisableThreadLibraryCalls(hinstDLL);
      wil::SetResultLoggingCallback((wil *)lambda_eccc1875da2115ade755cfcef89d88c7_::_lambda_invoker_cdecl_, v6);
    }
  }
  else
  {
    McGenEventUnregister(MICROSOFT_TWINUI_PUBLISHER_Context, fdwReason, lpvReserved);
    EventUnregister(RegHandle);
    RegHandle = 0LL;
    hProvider = 0;
    SHFusionUninitialize(v7);
  }
  return 1;
}
