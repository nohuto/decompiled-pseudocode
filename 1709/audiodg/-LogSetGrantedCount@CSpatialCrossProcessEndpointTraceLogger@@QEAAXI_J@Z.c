/*
 * XREFs of ?LogSetGrantedCount@CSpatialCrossProcessEndpointTraceLogger@@QEAAXI_J@Z @ 0x14005D16C
 * Callers:
 *     ?SetGrantedObjectCount@CSpatialCrossProcessBaseEndpoint@@UEAAJI_J@Z @ 0x14005FA70 (-SetGrantedObjectCount@CSpatialCrossProcessBaseEndpoint@@UEAAJI_J@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x14001CBB0 (__security_check_cookie.c)
 *     _TlgWrite @ 0x140036120 (_TlgWrite.c)
 */

void __fastcall CSpatialCrossProcessEndpointTraceLogger::LogSetGrantedCount(
        CSpatialCrossProcessEndpointTraceLogger *this,
        int a2,
        const GUID *a3,
        const GUID *a4)
{
  const GUID *v4; // [rsp+30h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  char *v6; // [rsp+60h] [rbp+17h]
  __int64 v7; // [rsp+68h] [rbp+1Fh]
  int *v8; // [rsp+70h] [rbp+27h]
  __int64 v9; // [rsp+78h] [rbp+2Fh]
  const GUID **v10; // [rsp+80h] [rbp+37h]
  __int64 v11; // [rsp+88h] [rbp+3Fh]
  int v12; // [rsp+B8h] [rbp+6Fh] BYREF

  v12 = a2;
  if ( (unsigned int)dword_1400890A0 > 5 )
  {
    v7 = 16LL;
    v6 = (char *)this + 8;
    v8 = &v12;
    v10 = &v4;
    v9 = 4LL;
    v4 = a3;
    v11 = 8LL;
    TlgWrite((TraceLoggingHProvider)&dword_1400890A0, &unk_140073083, a3, a4, 5u, &pData);
  }
}
