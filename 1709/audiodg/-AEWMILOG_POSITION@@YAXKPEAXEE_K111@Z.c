/*
 * XREFs of ?AEWMILOG_POSITION@@YAXKPEAXEE_K111@Z @ 0x14006313C
 * Callers:
 *     ?GetCurrentPadding@CCrossProcessBaseEndpoint@@UEAAXPEA_JPEAUAE_CURRENT_POSITION@@@Z @ 0x140055C30 (-GetCurrentPadding@CCrossProcessBaseEndpoint@@UEAAXPEA_JPEAUAE_CURRENT_POSITION@@@Z.c)
 *     ?GetCurrentPadding@CCrossProcessClientInputEndpoint@@UEAAXPEA_JPEAUAE_CURRENT_POSITION@@@Z @ 0x1400576B0 (-GetCurrentPadding@CCrossProcessClientInputEndpoint@@UEAAXPEA_JPEAUAE_CURRENT_POSITION@@@Z.c)
 *     ?GetDevicePosition@CCrossProcessClientInputEndpoint@@UEAAJPEA_K0@Z @ 0x140057770 (-GetDevicePosition@CCrossProcessClientInputEndpoint@@UEAAJPEA_K0@Z.c)
 *     ?GetDevicePosition@CCrossProcessClientOutputEndpoint@@UEAAJPEA_K0@Z @ 0x140057D90 (-GetDevicePosition@CCrossProcessClientOutputEndpoint@@UEAAJPEA_K0@Z.c)
 *     ?GetDevicePosition@CSpatialCrossProcessClientOutputEndpoint@@UEAAJPEA_K0@Z @ 0x140060BC0 (-GetDevicePosition@CSpatialCrossProcessClientOutputEndpoint@@UEAAJPEA_K0@Z.c)
 * Callees:
 *     memset @ 0x14001D9AC (memset.c)
 */

void __fastcall AEWMILOG_POSITION(
        __int64 a1,
        void *a2,
        __int64 a3,
        char a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        unsigned __int64 a8)
{
  _BYTE EventTrace[64]; // [rsp+20h] [rbp-60h] BYREF
  unsigned __int64 v11; // [rsp+60h] [rbp-20h]
  unsigned __int64 v12; // [rsp+68h] [rbp-18h]
  unsigned __int64 v13; // [rsp+70h] [rbp-10h]
  unsigned __int64 v14; // [rsp+78h] [rbp-8h]

  if ( g_u32AEWMILogLevel >= 5 )
  {
    memset(EventTrace, 0, sizeof(EventTrace));
    *(_DWORD *)&EventTrace[56] = 0;
    strcpy(EventTrace, "`");
    v11 = a5;
    v12 = a6;
    v13 = a7;
    v14 = a8;
    *(_DWORD *)&EventTrace[44] = 0x20000;
    *(_OWORD *)&EventTrace[24] = AEWMIGUID_POSITION;
    EventTrace[5] = 5;
    EventTrace[4] = a4;
    *(_QWORD *)&EventTrace[48] = a2;
    TraceEvent(g_hAEWMITraceHandle, (PEVENT_TRACE_HEADER)EventTrace);
  }
}
