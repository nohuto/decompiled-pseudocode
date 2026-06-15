/*
 * XREFs of ?LogGetPosition@CSpatialCrossProcessEndpointTraceLogger@@QEAAX_K00000@Z @ 0x140059F40
 * Callers:
 *     ?GetPosition@CSpatialCrossProcessClientOutputEndpoint@@UEAAJPEA_K0@Z @ 0x14005E300 (-GetPosition@CSpatialCrossProcessClientOutputEndpoint@@UEAAJPEA_K0@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x14001CE40 (__security_check_cookie.c)
 *     _TlgWrite @ 0x140036628 (_TlgWrite.c)
 */

void __fastcall CSpatialCrossProcessEndpointTraceLogger::LogGetPosition(
        CSpatialCrossProcessEndpointTraceLogger *this,
        __int64 a2,
        const GUID *a3,
        const GUID *a4,
        char a5,
        char a6,
        char a7)
{
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-71h] BYREF
  char *v8; // [rsp+58h] [rbp-51h]
  __int64 v9; // [rsp+60h] [rbp-49h]
  __int64 *v10; // [rsp+68h] [rbp-41h]
  __int64 v11; // [rsp+70h] [rbp-39h]
  const GUID **v12; // [rsp+78h] [rbp-31h]
  __int64 v13; // [rsp+80h] [rbp-29h]
  char *v14; // [rsp+88h] [rbp-21h]
  __int64 v15; // [rsp+90h] [rbp-19h]
  const GUID **v16; // [rsp+98h] [rbp-11h]
  __int64 v17; // [rsp+A0h] [rbp-9h]
  char *v18; // [rsp+A8h] [rbp-1h]
  __int64 v19; // [rsp+B0h] [rbp+7h]
  char *v20; // [rsp+B8h] [rbp+Fh]
  __int64 v21; // [rsp+C0h] [rbp+17h]
  __int64 v22; // [rsp+100h] [rbp+57h] BYREF
  const GUID *v23; // [rsp+108h] [rbp+5Fh] BYREF
  const GUID *v24; // [rsp+110h] [rbp+67h] BYREF

  v24 = a4;
  v23 = a3;
  v22 = a2;
  if ( (unsigned int)dword_1400850A0 > 5 )
  {
    v9 = 16LL;
    v8 = (char *)this + 8;
    v10 = &v22;
    v12 = &v23;
    v14 = &a6;
    v16 = &v24;
    v18 = &a5;
    v20 = &a7;
    v11 = 8LL;
    v13 = 8LL;
    v15 = 8LL;
    v17 = 8LL;
    v19 = 8LL;
    v21 = 8LL;
    TlgWrite((TraceLoggingHProvider)&dword_1400850A0, &unk_14006FC4B, a3, a4, 9u, &pData);
  }
}
