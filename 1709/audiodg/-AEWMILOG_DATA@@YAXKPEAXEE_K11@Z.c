/*
 * XREFs of ?AEWMILOG_DATA@@YAXKPEAXEE_K11@Z @ 0x140063254
 * Callers:
 *     ?GetInputDataPointer@CCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x140017480 (-GetInputDataPointer@CCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_.c)
 *     ?GetInputDataPointer@CCrossProcessClientInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x140057870 (-GetInputDataPointer@CCrossProcessClientInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_.c)
 *     ?ReleaseInputDataPointer@CCrossProcessClientInputEndpoint@@UEAAXI_K@Z @ 0x140057C00 (-ReleaseInputDataPointer@CCrossProcessClientInputEndpoint@@UEAAXI_K@Z.c)
 *     ?GetOutputDataPointer@CCrossProcessClientOutputEndpoint@@UEAA_KIPEAUAE_CURRENT_POSITION@@@Z @ 0x140057FA0 (-GetOutputDataPointer@CCrossProcessClientOutputEndpoint@@UEAA_KIPEAUAE_CURRENT_POSITION@@@Z.c)
 *     ?ReleaseOutputDataPointer@CCrossProcessClientOutputEndpoint@@UEAAXPEBUAPO_CONNECTION_PROPERTY@@@Z @ 0x140058B80 (-ReleaseOutputDataPointer@CCrossProcessClientOutputEndpoint@@UEAAXPEBUAPO_CONNECTION_PROPERTY@@@.c)
 *     ?GetOutputDataPointer@CCrossProcessServerOutputEndpoint@@UEAA_KIPEAUAE_CURRENT_POSITION@@@Z @ 0x140059230 (-GetOutputDataPointer@CCrossProcessServerOutputEndpoint@@UEAA_KIPEAUAE_CURRENT_POSITION@@@Z.c)
 *     ?ReleaseOutputDataPointer@CCrossProcessServerOutputEndpoint@@UEAAXPEBUAPO_CONNECTION_PROPERTY@@@Z @ 0x1400595B0 (-ReleaseOutputDataPointer@CCrossProcessServerOutputEndpoint@@UEAAXPEBUAPO_CONNECTION_PROPERTY@@@.c)
 *     ?GetInputDataPointer@CSpatialCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x1400620F0 (-GetInputDataPointer@CSpatialCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@.c)
 *     ?ReleaseInputDataPointer@CSpatialCrossProcessServerInputEndpoint@@UEAAXI_K@Z @ 0x1400624E0 (-ReleaseInputDataPointer@CSpatialCrossProcessServerInputEndpoint@@UEAAXI_K@Z.c)
 * Callees:
 *     memset @ 0x14001D9AC (memset.c)
 */

void __fastcall AEWMILOG_DATA(
        __int64 a1,
        void *a2,
        __int64 a3,
        char a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned __int64 a7)
{
  _BYTE EventTrace[64]; // [rsp+20h] [rbp-60h] BYREF
  unsigned __int64 v10; // [rsp+60h] [rbp-20h]
  unsigned __int64 v11; // [rsp+68h] [rbp-18h]
  unsigned __int64 v12; // [rsp+70h] [rbp-10h]

  if ( g_u32AEWMILogLevel >= 5 )
  {
    memset(EventTrace, 0, sizeof(EventTrace));
    *(_DWORD *)&EventTrace[56] = 0;
    strcpy(EventTrace, "X");
    v10 = a5;
    v11 = a6;
    v12 = a7;
    *(_DWORD *)&EventTrace[44] = 0x20000;
    *(_OWORD *)&EventTrace[24] = AEWMIGUID_DATA;
    EventTrace[5] = 5;
    EventTrace[4] = a4;
    *(_QWORD *)&EventTrace[48] = a2;
    TraceEvent(g_hAEWMITraceHandle, (PEVENT_TRACE_HEADER)EventTrace);
  }
}
