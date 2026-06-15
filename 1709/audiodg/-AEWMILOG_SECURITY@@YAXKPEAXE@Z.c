/*
 * XREFs of ?AEWMILOG_SECURITY@@YAXKPEAXE@Z @ 0x1400631E0
 * Callers:
 *     ?ReleaseInputDataPointer@CCrossProcessServerInputEndpoint@@UEAAXI_K@Z @ 0x1400172C0 (-ReleaseInputDataPointer@CCrossProcessServerInputEndpoint@@UEAAXI_K@Z.c)
 *     ?GetInputDataPointer@CCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x140017480 (-GetInputDataPointer@CCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_.c)
 *     ?IsValidOffset@CCrossProcessBaseEndpoint@@IEAA_N_J@Z @ 0x140017B98 (-IsValidOffset@CCrossProcessBaseEndpoint@@IEAA_N_J@Z.c)
 *     ?IsValidFlags@CCrossProcessBaseEndpoint@@IEAA_NI@Z @ 0x140056520 (-IsValidFlags@CCrossProcessBaseEndpoint@@IEAA_NI@Z.c)
 *     ?GetInputDataPointer@CCrossProcessClientInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x140057870 (-GetInputDataPointer@CCrossProcessClientInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_.c)
 *     ?ReleaseInputDataPointer@CCrossProcessClientInputEndpoint@@UEAAXI_K@Z @ 0x140057C00 (-ReleaseInputDataPointer@CCrossProcessClientInputEndpoint@@UEAAXI_K@Z.c)
 * Callees:
 *     memset @ 0x14001D9AC (memset.c)
 */

void __fastcall AEWMILOG_SECURITY(__int64 a1, void *a2)
{
  _BYTE EventTrace[64]; // [rsp+20h] [rbp-48h] BYREF

  if ( g_u32AEWMILogLevel >= 5 )
  {
    memset(EventTrace, 0, sizeof(EventTrace));
    *(_DWORD *)&EventTrace[56] = 0;
    *(_OWORD *)&EventTrace[24] = AEWMIGUID_SECURITY;
    strcpy(EventTrace, "@");
    *(_DWORD *)&EventTrace[44] = 0x20000;
    *(_WORD *)&EventTrace[4] = 1280;
    *(_QWORD *)&EventTrace[48] = a2;
    TraceEvent(g_hAEWMITraceHandle, (PEVENT_TRACE_HEADER)EventTrace);
  }
}
