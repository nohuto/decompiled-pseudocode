/*
 * XREFs of ?AEWMILOG_DROP@@YAXKPEAXE_K1@Z @ 0x140060444
 * Callers:
 *     ?AddTimestampMessage@CCrossProcessServerOutputEndpoint@@MEAAJW4EndpointMessageID@@IIPEAUAE_CURRENT_POSITION@@W4APO_BUFFER_FLAGS@@W4AddTimestampMessageOptions@1@@Z @ 0x14001BEA0 (-AddTimestampMessage@CCrossProcessServerOutputEndpoint@@MEAAJW4EndpointMessageID@@IIPEAUAE_CURRE.c)
 * Callees:
 *     memset @ 0x14001DC2C (memset.c)
 */

void __fastcall AEWMILOG_DROP(__int64 a1, void *a2, __int64 a3, __int64 a4, unsigned __int64 a5)
{
  _BYTE EventTrace[64]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v8; // [rsp+60h] [rbp-18h]
  unsigned __int64 v9; // [rsp+68h] [rbp-10h]

  if ( g_u32AEWMILogLevel >= 5 )
  {
    memset(EventTrace, 0, sizeof(EventTrace));
    *(_DWORD *)&EventTrace[56] = 0;
    strcpy(EventTrace, "P");
    v9 = a5;
    *(_DWORD *)&EventTrace[44] = 0x20000;
    *(_OWORD *)&EventTrace[24] = AEWMIGUID_DROP;
    *(_WORD *)&EventTrace[4] = 1280;
    *(_QWORD *)&EventTrace[48] = a2;
    v8 = a4;
    TraceEvent(g_hAEWMITraceHandle, (PEVENT_TRACE_HEADER)EventTrace);
  }
}
