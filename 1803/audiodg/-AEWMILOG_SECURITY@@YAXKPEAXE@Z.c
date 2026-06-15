/*
 * XREFs of ?AEWMILOG_SECURITY@@YAXKPEAXE@Z @ 0x1400601E0
 * Callers:
 *     ?ReleaseInputDataPointer@CCrossProcessServerInputEndpoint@@UEAAXI_K@Z @ 0x140017980 (-ReleaseInputDataPointer@CCrossProcessServerInputEndpoint@@UEAAXI_K@Z.c)
 *     ?GetInputDataPointer@CCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x140017B40 (-GetInputDataPointer@CCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_.c)
 *     ?IsValidOffset@CCrossProcessBaseEndpoint@@IEAA_N_J@Z @ 0x140018218 (-IsValidOffset@CCrossProcessBaseEndpoint@@IEAA_N_J@Z.c)
 *     ?IsValidFlags@CCrossProcessBaseEndpoint@@IEAA_NI@Z @ 0x1400541AC (-IsValidFlags@CCrossProcessBaseEndpoint@@IEAA_NI@Z.c)
 *     ?GetInputDataPointer@CCrossProcessClientInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x1400554A0 (-GetInputDataPointer@CCrossProcessClientInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_.c)
 *     ?ReleaseInputDataPointer@CCrossProcessClientInputEndpoint@@UEAAXI_K@Z @ 0x140055830 (-ReleaseInputDataPointer@CCrossProcessClientInputEndpoint@@UEAAXI_K@Z.c)
 * Callees:
 *     memset_0 @ 0x14001C9A0 (memset_0.c)
 */

void __fastcall AEWMILOG_SECURITY(__int64 a1, void *a2)
{
  struct _EVENT_TRACE_HEADER EventTrace; // [rsp+20h] [rbp-48h] BYREF
  void *v4; // [rsp+50h] [rbp-18h]
  int v5; // [rsp+58h] [rbp-10h]

  if ( g_u32AEWMILogLevel >= 5 )
  {
    memset_0(&EventTrace, 0, 0x40uLL);
    v5 = 0;
    EventTrace.24 = (union _EVENT_TRACE_HEADER::$146F82FB58FCEC23F5D30A6BD72C4E4F)AEWMIGUID_SECURITY;
    EventTrace.Size = 64;
    EventTrace.UserTime = 0x20000;
    LOWORD(EventTrace.Version) = 1280;
    v4 = a2;
    TraceEvent(g_hAEWMITraceHandle, &EventTrace);
  }
}
