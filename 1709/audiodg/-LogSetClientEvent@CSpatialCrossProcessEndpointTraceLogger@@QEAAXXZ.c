/*
 * XREFs of ?LogSetClientEvent@CSpatialCrossProcessEndpointTraceLogger@@QEAAXXZ @ 0x14005D100
 * Callers:
 *     ?SignalCompletionEvent@CSpatialCrossProcessServerEndpoint@@AEAA_NXZ @ 0x140061E88 (-SignalCompletionEvent@CSpatialCrossProcessServerEndpoint@@AEAA_NXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x14001CBB0 (__security_check_cookie.c)
 *     _TlgWrite @ 0x140036120 (_TlgWrite.c)
 */

void __fastcall CSpatialCrossProcessEndpointTraceLogger::LogSetClientEvent(
        CSpatialCrossProcessEndpointTraceLogger *this,
        __int64 a2,
        const GUID *a3,
        const GUID *a4)
{
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-48h] BYREF
  char *v5; // [rsp+50h] [rbp-28h]
  int v6; // [rsp+58h] [rbp-20h]
  int v7; // [rsp+5Ch] [rbp-1Ch]

  if ( (unsigned int)dword_1400890A0 > 5 )
  {
    v7 = 0;
    v5 = (char *)this + 8;
    v6 = 16;
    TlgWrite((TraceLoggingHProvider)&dword_1400890A0, &unk_140072DCF, a3, a4, 3u, &pData);
  }
}
