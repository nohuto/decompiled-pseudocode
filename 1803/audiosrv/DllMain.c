/*
 * XREFs of DllMain @ 0x1800632DC
 * Callers:
 *     dllmain_dispatch @ 0x18006075C (dllmain_dispatch.c)
 * Callees:
 *     ?Provider@AudioSrvTelemetryProvider@@SAQEBU_TlgProvider_t@@XZ @ 0x1800084D0 (-Provider@AudioSrvTelemetryProvider@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?AeWmiInitialize@@YAHPEBU_GUID@@@Z @ 0x18001814C (-AeWmiInitialize@@YAHPEBU_GUID@@@Z.c)
 *     ?AERTMemoryInitialize@@YAJ_K00@Z @ 0x180018204 (-AERTMemoryInitialize@@YAJ_K00@Z.c)
 *     ?SetResultTelemetryFallback@wil@@YAXP6AX_NAEBUFailureInfo@1@@Z@Z @ 0x180018374 (-SetResultTelemetryFallback@wil@@YAXP6AX_NAEBUFailureInfo@1@@Z@Z.c)
 *     ?VAD_DllProcessAttach@@YAHXZ @ 0x1800183C8 (-VAD_DllProcessAttach@@YAHXZ.c)
 *     ?AeWmiShutdown@@YAXXZ @ 0x1800E634C (-AeWmiShutdown@@YAXXZ.c)
 *     WppCleanupUm @ 0x1800E6638 (WppCleanupUm.c)
 *     ?AERTMemoryShutdown@@YAJXZ @ 0x18010B734 (-AERTMemoryShutdown@@YAJXZ.c)
 */

BOOL __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  int v3; // ebx
  const struct _GUID *v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  void *v7; // r8
  void (*v8)(bool, const struct wil::FailureInfo *); // rdx
  wil *v9; // rcx
  __int64 v10; // rcx

  v3 = 1;
  if ( fdwReason == 1 )
  {
    DisableThreadLibraryCalls(hinstDLL);
    hHeap = GetProcessHeap();
    AeWmiInitialize(v4);
    if ( (int)AERTMemoryInitialize(v6, v5, v7) >= 0 )
    {
      wil::SetResultTelemetryFallback(v9, v8);
      g_SysFxUtilTlp = AudioSrvTelemetryProvider::Provider(v10);
      dword_18018A2C4 = 1;
      dword_18018A2C0 = VAD_DllProcessAttach();
      v3 = dword_18018A2C0;
      if ( !dword_18018A2C0 )
        dword_18018A2C4 = 0;
    }
    else
    {
      return 0;
    }
  }
  else if ( !fdwReason && !lpvReserved )
  {
    dword_18018A2C4 = 0;
    dword_18018A2C0 = 0;
    AERTMemoryShutdown();
    AeWmiShutdown();
    g_SysFxUtilTlp = 0LL;
    WppCleanupUm();
  }
  return v3;
}
