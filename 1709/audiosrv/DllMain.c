/*
 * XREFs of DllMain @ 0x18003541C
 * Callers:
 *     dllmain_dispatch @ 0x180032930 (dllmain_dispatch.c)
 * Callees:
 *     ?Provider@AudioSrvTelemetryProvider@@SAQEBU_TlgProvider_t@@XZ @ 0x18005FCD0 (-Provider@AudioSrvTelemetryProvider@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?SetResultTelemetryFallback@wil@@YAXP6AX_NAEBUFailureInfo@1@@Z@Z @ 0x180063A04 (-SetResultTelemetryFallback@wil@@YAXP6AX_NAEBUFailureInfo@1@@Z@Z.c)
 *     ?VAD_DllProcessAttach@@YAHXZ @ 0x180064824 (-VAD_DllProcessAttach@@YAHXZ.c)
 *     ?AeWmiInitialize@@YAHPEBU_GUID@@@Z @ 0x1800AB8BC (-AeWmiInitialize@@YAHPEBU_GUID@@@Z.c)
 *     ?AeWmiShutdown@@YAXXZ @ 0x1800AB92C (-AeWmiShutdown@@YAXXZ.c)
 *     WppCleanupUm @ 0x1800AC358 (WppCleanupUm.c)
 *     ?AERTMemoryInitialize@@YAJ_K00@Z @ 0x1800DDAB4 (-AERTMemoryInitialize@@YAJ_K00@Z.c)
 *     ?AERTMemoryShutdown@@YAJXZ @ 0x1800DDB18 (-AERTMemoryShutdown@@YAJXZ.c)
 */

BOOL __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  int v3; // ebx
  const struct _GUID *v4; // rcx
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // r8
  void (*v8)(bool, const struct wil::FailureInfo *); // rdx
  wil *v9; // rcx

  v3 = 1;
  if ( fdwReason == 1 )
  {
    DisableThreadLibraryCalls(hinstDLL);
    hHeap = GetProcessHeap();
    AeWmiInitialize(v4);
    if ( (int)AERTMemoryInitialize(v6, v5, v7) >= 0 )
    {
      wil::SetResultTelemetryFallback(v9, v8);
      g_SysFxUtilTlp = AudioSrvTelemetryProvider::Provider();
      dword_18014BC08 = 1;
      dword_18014BC04 = VAD_DllProcessAttach();
      v3 = dword_18014BC04;
      if ( !dword_18014BC04 )
        dword_18014BC08 = 0;
    }
    else
    {
      return 0;
    }
  }
  else if ( !fdwReason && !lpvReserved )
  {
    dword_18014BC08 = 0;
    dword_18014BC04 = 0;
    AERTMemoryShutdown();
    AeWmiShutdown();
    g_SysFxUtilTlp = 0LL;
    WppCleanupUm();
  }
  return v3;
}
