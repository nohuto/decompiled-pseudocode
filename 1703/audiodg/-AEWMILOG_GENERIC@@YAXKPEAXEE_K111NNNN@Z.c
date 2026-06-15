/*
 * XREFs of ?AEWMILOG_GENERIC@@YAXKPEAXEE_K111NNNN@Z @ 0x140053A34
 * Callers:
 *     ?GetCurrentPadding@CCrossProcessBaseEndpoint@@UEAAXPEA_JPEAUAE_CURRENT_POSITION@@@Z @ 0x140053DD0 (-GetCurrentPadding@CCrossProcessBaseEndpoint@@UEAAXPEA_JPEAUAE_CURRENT_POSITION@@@Z.c)
 *     ?GetPosition@CCrossProcessClientInputEndpoint@@UEAAJPEA_K0@Z @ 0x1400558E0 (-GetPosition@CCrossProcessClientInputEndpoint@@UEAAJPEA_K0@Z.c)
 *     ?GetPosition@CCrossProcessClientOutputEndpoint@@UEAAJPEA_K0@Z @ 0x140056040 (-GetPosition@CCrossProcessClientOutputEndpoint@@UEAAJPEA_K0@Z.c)
 *     ?GetPosition@CSpatialCrossProcessClientOutputEndpoint@@UEAAJPEA_K0@Z @ 0x14005E300 (-GetPosition@CSpatialCrossProcessClientOutputEndpoint@@UEAAJPEA_K0@Z.c)
 * Callees:
 *     memset @ 0x14001DC2C (memset.c)
 */

void __fastcall AEWMILOG_GENERIC(
        __int64 a1,
        void *a2,
        __int64 a3,
        char a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        unsigned __int64 a8,
        double a9,
        double a10,
        double a11,
        double a12)
{
  _BYTE EventTrace[64]; // [rsp+20h] [rbp-69h] BYREF
  unsigned __int64 v15; // [rsp+60h] [rbp-29h]
  unsigned __int64 v16; // [rsp+68h] [rbp-21h]
  unsigned __int64 v17; // [rsp+70h] [rbp-19h]
  unsigned __int64 v18; // [rsp+78h] [rbp-11h]
  double v19; // [rsp+80h] [rbp-9h]
  double v20; // [rsp+88h] [rbp-1h]
  double v21; // [rsp+90h] [rbp+7h]
  double v22; // [rsp+98h] [rbp+Fh]

  if ( g_u32AEWMILogLevel >= 5 )
  {
    memset(EventTrace, 0, sizeof(EventTrace));
    *(_DWORD *)&EventTrace[56] = 0;
    *(_WORD *)EventTrace = 128;
    v15 = a5;
    v16 = a6;
    *(_OWORD *)&EventTrace[24] = AEWMIGUID_GENERIC;
    v17 = a7;
    v19 = a9;
    v20 = a10;
    v18 = a8;
    v21 = a11;
    v22 = a12;
    *(_DWORD *)&EventTrace[44] = 0x20000;
    EventTrace[5] = 5;
    EventTrace[4] = a4;
    *(_QWORD *)&EventTrace[48] = a2;
    TraceEvent(g_hAEWMITraceHandle, (PEVENT_TRACE_HEADER)EventTrace);
  }
}
