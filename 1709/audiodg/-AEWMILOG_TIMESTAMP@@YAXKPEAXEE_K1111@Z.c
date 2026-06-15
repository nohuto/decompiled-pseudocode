/*
 * XREFs of ?AEWMILOG_TIMESTAMP@@YAXKPEAXEE_K1111@Z @ 0x140063420
 * Callers:
 *     ?AddTimestampMessage@CCrossProcessServerOutputEndpoint@@MEAAJW4EndpointMessageID@@IIPEAUAE_CURRENT_POSITION@@W4APO_BUFFER_FLAGS@@W4AddTimestampMessageOptions@1@@Z @ 0x140058E90 (-AddTimestampMessage@CCrossProcessServerOutputEndpoint@@MEAAJW4EndpointMessageID@@IIPEAUAE_CURRE.c)
 * Callees:
 *     memset @ 0x14001D9AC (memset.c)
 */

void __fastcall AEWMILOG_TIMESTAMP(
        __int64 a1,
        void *a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        unsigned __int64 a8,
        unsigned __int64 a9)
{
  _BYTE EventTrace[64]; // [rsp+20h] [rbp-41h] BYREF
  unsigned __int64 v11; // [rsp+60h] [rbp-1h]
  unsigned __int64 v12; // [rsp+68h] [rbp+7h]
  unsigned __int64 v13; // [rsp+70h] [rbp+Fh]
  unsigned __int64 v14; // [rsp+78h] [rbp+17h]
  unsigned __int64 v15; // [rsp+80h] [rbp+1Fh]

  if ( g_u32AEWMILogLevel >= 5 )
  {
    memset(EventTrace, 0, sizeof(EventTrace));
    *(_DWORD *)&EventTrace[56] = 0;
    strcpy(EventTrace, "h");
    v11 = a5;
    v12 = a6;
    v13 = a7;
    v14 = a8;
    v15 = a9;
    *(_DWORD *)&EventTrace[44] = 0x20000;
    *(_OWORD *)&EventTrace[24] = AEWMIGUID_TIMESTAMP;
    *(_WORD *)&EventTrace[4] = 1282;
    *(_QWORD *)&EventTrace[48] = a2;
    TraceEvent(g_hAEWMITraceHandle, (PEVENT_TRACE_HEADER)EventTrace);
  }
}
