/*
 * XREFs of ?AEWMILOG_DATA@@YAXKPEAXEE_K11@Z @ 0x1400600F0
 * Callers:
 *     ?GetInputDataPointer@CCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x140018D40 (-GetInputDataPointer@CCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_.c)
 *     ?GetOutputDataPointer@CCrossProcessServerOutputEndpoint@@UEAA_KIPEAUAE_CURRENT_POSITION@@@Z @ 0x14001C170 (-GetOutputDataPointer@CCrossProcessServerOutputEndpoint@@UEAA_KIPEAUAE_CURRENT_POSITION@@@Z.c)
 *     ?ReleaseOutputDataPointer@CCrossProcessServerOutputEndpoint@@UEAAXPEBUAPO_CONNECTION_PROPERTY@@@Z @ 0x14001C4E0 (-ReleaseOutputDataPointer@CCrossProcessServerOutputEndpoint@@UEAAXPEBUAPO_CONNECTION_PROPERTY@@@.c)
 *     ?GetInputDataPointer@CCrossProcessClientInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x140055660 (-GetInputDataPointer@CCrossProcessClientInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_.c)
 *     ?ReleaseInputDataPointer@CCrossProcessClientInputEndpoint@@UEAAXI_K@Z @ 0x1400559E0 (-ReleaseInputDataPointer@CCrossProcessClientInputEndpoint@@UEAAXI_K@Z.c)
 *     ?GetOutputDataPointer@CCrossProcessClientOutputEndpoint@@UEAA_KIPEAUAE_CURRENT_POSITION@@@Z @ 0x140055D90 (-GetOutputDataPointer@CCrossProcessClientOutputEndpoint@@UEAA_KIPEAUAE_CURRENT_POSITION@@@Z.c)
 *     ?ReleaseOutputDataPointer@CCrossProcessClientOutputEndpoint@@UEAAXPEBUAPO_CONNECTION_PROPERTY@@@Z @ 0x140056510 (-ReleaseOutputDataPointer@CCrossProcessClientOutputEndpoint@@UEAAXPEBUAPO_CONNECTION_PROPERTY@@@.c)
 *     ?GetInputDataPointer@CSpatialCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x14005F240 (-GetInputDataPointer@CSpatialCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@.c)
 *     ?ReleaseInputDataPointer@CSpatialCrossProcessServerInputEndpoint@@UEAAXI_K@Z @ 0x14005F640 (-ReleaseInputDataPointer@CSpatialCrossProcessServerInputEndpoint@@UEAAXI_K@Z.c)
 * Callees:
 *     memset @ 0x14001DC2C (memset.c)
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
