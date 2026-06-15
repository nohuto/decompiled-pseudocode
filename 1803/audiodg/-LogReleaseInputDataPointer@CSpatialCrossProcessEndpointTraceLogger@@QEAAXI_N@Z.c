/*
 * XREFs of ?LogReleaseInputDataPointer@CSpatialCrossProcessEndpointTraceLogger@@QEAAXI_N@Z @ 0x14005A4B4
 * Callers:
 *     ?ReleaseInputDataPointer@CSpatialCrossProcessServerInputEndpoint@@UEAAXI_K@Z @ 0x14005FAF0 (-ReleaseInputDataPointer@CSpatialCrossProcessServerInputEndpoint@@UEAAXI_K@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x14001BC70 (__security_check_cookie.c)
 *     _TlgWrite @ 0x140034DB0 (_TlgWrite.c)
 */

void __fastcall CSpatialCrossProcessEndpointTraceLogger::LogReleaseInputDataPointer(
        CSpatialCrossProcessEndpointTraceLogger *this,
        int a2,
        unsigned __int8 a3,
        const GUID *a4)
{
  int v4; // [rsp+30h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  char *v6; // [rsp+60h] [rbp+17h]
  __int64 v7; // [rsp+68h] [rbp+1Fh]
  int *v8; // [rsp+70h] [rbp+27h]
  __int64 v9; // [rsp+78h] [rbp+2Fh]
  int *v10; // [rsp+80h] [rbp+37h]
  __int64 v11; // [rsp+88h] [rbp+3Fh]
  int v12; // [rsp+B8h] [rbp+6Fh] BYREF

  v12 = a2;
  if ( (unsigned int)dword_140087130 > 5 )
  {
    v7 = 16LL;
    v6 = (char *)this + 8;
    v8 = &v12;
    v4 = a3;
    v10 = &v4;
    v9 = 4LL;
    v11 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_140087130, &unk_140070A1F, 0LL, a4, 5u, &pData);
  }
}
