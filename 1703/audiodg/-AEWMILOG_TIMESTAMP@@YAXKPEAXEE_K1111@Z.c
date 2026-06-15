/*
 * XREFs of ?AEWMILOG_TIMESTAMP@@YAXKPEAXEE_K1111@Z @ 0x140060040
 * Callers:
 *     ?AddTimestampMessage@CCrossProcessServerOutputEndpoint@@MEAAJW4EndpointMessageID@@IIPEAUAE_CURRENT_POSITION@@W4APO_BUFFER_FLAGS@@W4AddTimestampMessageOptions@1@@Z @ 0x14001BEA0 (-AddTimestampMessage@CCrossProcessServerOutputEndpoint@@MEAAJW4EndpointMessageID@@IIPEAUAE_CURRE.c)
 * Callees:
 *     memset @ 0x14001DC2C (memset.c)
 */

void __fastcall AEWMILOG_TIMESTAMP(
        __int64 a1,
        void *a2,
        __int64 a3,
        char a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        unsigned __int64 a8,
        unsigned __int64 a9)
{
  _BYTE EventTrace[64]; // [rsp+20h] [rbp-41h] BYREF
  unsigned __int64 v12; // [rsp+60h] [rbp-1h]
  unsigned __int64 v13; // [rsp+68h] [rbp+7h]
  unsigned __int64 v14; // [rsp+70h] [rbp+Fh]
  unsigned __int64 v15; // [rsp+78h] [rbp+17h]
  unsigned __int64 v16; // [rsp+80h] [rbp+1Fh]

  if ( g_u32AEWMILogLevel >= 5 )
  {
    memset(EventTrace, 0, sizeof(EventTrace));
    *(_DWORD *)&EventTrace[56] = 0;
    strcpy(EventTrace, "h");
    v12 = a5;
    v13 = a6;
    v14 = a7;
    v15 = a8;
    v16 = a9;
    *(_DWORD *)&EventTrace[44] = 0x20000;
    *(_OWORD *)&EventTrace[24] = AEWMIGUID_TIMESTAMP;
    EventTrace[5] = 5;
    EventTrace[4] = a4;
    *(_QWORD *)&EventTrace[48] = a2;
    TraceEvent(g_hAEWMITraceHandle, (PEVENT_TRACE_HEADER)EventTrace);
  }
}
