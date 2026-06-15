/*
 * XREFs of DllMain @ 0x18004B674
 * Callers:
 *     dllmain_dispatch @ 0x180048A50 (dllmain_dispatch.c)
 * Callees:
 *     ?AeWmiInitialize@@YAHPEBU_GUID@@@Z @ 0x1800388A8 (-AeWmiInitialize@@YAHPEBU_GUID@@@Z.c)
 *     ?AERTMemoryInitialize@@YAJ_K00@Z @ 0x180038960 (-AERTMemoryInitialize@@YAJ_K00@Z.c)
 *     ?Provider@AudioSrvTelemetryProvider@@SAQEBU_TlgProvider_t@@XZ @ 0x180038A8C (-Provider@AudioSrvTelemetryProvider@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?SetResultTelemetryFallback@wil@@YAXP6AX_NAEBUFailureInfo@1@@Z@Z @ 0x180038AA8 (-SetResultTelemetryFallback@wil@@YAXP6AX_NAEBUFailureInfo@1@@Z@Z.c)
 *     ?VAD_DllProcessAttach@@YAHXZ @ 0x180038AC8 (-VAD_DllProcessAttach@@YAHXZ.c)
 *     ?AeWmiShutdown@@YAXXZ @ 0x1800B86F0 (-AeWmiShutdown@@YAXXZ.c)
 *     WppCleanupUm @ 0x1800B8AF0 (WppCleanupUm.c)
 *     ?AERTMemoryShutdown@@YAJXZ @ 0x1800D10AC (-AERTMemoryShutdown@@YAJXZ.c)
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
      dword_18012B86C = 1;
      dword_18012B868 = VAD_DllProcessAttach();
      v3 = dword_18012B868;
      if ( !dword_18012B868 )
        dword_18012B86C = 0;
    }
    else
    {
      return 0;
    }
  }
  else if ( !fdwReason && !lpvReserved )
  {
    dword_18012B86C = 0;
    dword_18012B868 = 0;
    AERTMemoryShutdown();
    AeWmiShutdown();
    g_SysFxUtilTlp = 0LL;
    WppCleanupUm();
  }
  return v3;
}
