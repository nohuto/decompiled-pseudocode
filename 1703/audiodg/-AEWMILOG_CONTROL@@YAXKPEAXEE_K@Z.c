/*
 * XREFs of ?AEWMILOG_CONTROL@@YAXKPEAXEE_K@Z @ 0x1400539B0
 * Callers:
 *     ?Reset@CCrossProcessControl@@UEAAJXZ @ 0x1400548C0 (-Reset@CCrossProcessControl@@UEAAJXZ.c)
 *     ?Start@CCrossProcessControl@@UEAAJXZ @ 0x140054C40 (-Start@CCrossProcessControl@@UEAAJXZ.c)
 *     ?Stop@CCrossProcessControl@@UEAAJXZ @ 0x140054D80 (-Stop@CCrossProcessControl@@UEAAJXZ.c)
 *     ?Reset@CSpatialCrossProcessControl@@UEAAJXZ @ 0x14005D380 (-Reset@CSpatialCrossProcessControl@@UEAAJXZ.c)
 *     ?Start@CSpatialCrossProcessControl@@UEAAJXZ @ 0x14005D4D0 (-Start@CSpatialCrossProcessControl@@UEAAJXZ.c)
 *     ?Stop@CSpatialCrossProcessControl@@UEAAJXZ @ 0x14005D5D0 (-Stop@CSpatialCrossProcessControl@@UEAAJXZ.c)
 * Callees:
 *     memset @ 0x14001DC2C (memset.c)
 */

void __fastcall AEWMILOG_CONTROL(__int64 a1, void *a2, __int64 a3, char a4)
{
  _BYTE EventTrace[64]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v7; // [rsp+60h] [rbp-18h]

  if ( g_u32AEWMILogLevel >= 5 )
  {
    memset(EventTrace, 0, sizeof(EventTrace));
    *(_DWORD *)&EventTrace[56] = 0;
    v7 = 0LL;
    *(_OWORD *)&EventTrace[24] = AEWMIGUID_CONTROL;
    strcpy(EventTrace, "H");
    *(_DWORD *)&EventTrace[44] = 0x20000;
    EventTrace[5] = 5;
    EventTrace[4] = a4;
    *(_QWORD *)&EventTrace[48] = a2;
    TraceEvent(g_hAEWMITraceHandle, (PEVENT_TRACE_HEADER)EventTrace);
  }
}
