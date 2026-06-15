/*
 * XREFs of ?LogReleaseInputDataPointer@CSpatialCrossProcessEndpointTraceLogger@@QEAAXI_N@Z @ 0x14005A1EC
 * Callers:
 *     ?ReleaseInputDataPointer@CSpatialCrossProcessServerInputEndpoint@@UEAAXI_K@Z @ 0x14005F640 (-ReleaseInputDataPointer@CSpatialCrossProcessServerInputEndpoint@@UEAAXI_K@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x14001CE40 (__security_check_cookie.c)
 *     _TlgWrite @ 0x140036628 (_TlgWrite.c)
 */

void __fastcall CSpatialCrossProcessEndpointTraceLogger::LogReleaseInputDataPointer(
        CSpatialCrossProcessEndpointTraceLogger *this,
        int a2,
        const GUID *a3,
        const GUID *a4)
{
  BOOL v4; // [rsp+30h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  char *v6; // [rsp+60h] [rbp+7h]
  __int64 v7; // [rsp+68h] [rbp+Fh]
  int *v8; // [rsp+70h] [rbp+17h]
  __int64 v9; // [rsp+78h] [rbp+1Fh]
  BOOL *v10; // [rsp+80h] [rbp+27h]
  __int64 v11; // [rsp+88h] [rbp+2Fh]
  int v12; // [rsp+C8h] [rbp+6Fh] BYREF

  v12 = a2;
  if ( (unsigned int)dword_1400850A0 > 5 )
  {
    v7 = 16LL;
    v6 = (char *)this + 8;
    v9 = 4LL;
    v8 = &v12;
    v11 = 4LL;
    v4 = (_BYTE)a3 != 0;
    v10 = &v4;
    TlgWrite((TraceLoggingHProvider)&dword_1400850A0, &unk_14006FD77, a3, a4, 5u, &pData);
  }
}
