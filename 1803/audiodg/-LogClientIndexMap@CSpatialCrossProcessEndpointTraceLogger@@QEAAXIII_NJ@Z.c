/*
 * XREFs of ?LogClientIndexMap@CSpatialCrossProcessEndpointTraceLogger@@QEAAXIII_NJ@Z @ 0x140059EB8
 * Callers:
 *     ?GetObjectMetadata@CSpatialCrossProcessClientOutputEndpoint@@UEAAJIPEAPEAXPEAI@Z @ 0x14005E400 (-GetObjectMetadata@CSpatialCrossProcessClientOutputEndpoint@@UEAAJIPEAPEAXPEAI@Z.c)
 *     ?GetObjectProperties@CSpatialCrossProcessClientOutputEndpoint@@UEAAJIPEAPEAXPEAI@Z @ 0x14005E500 (-GetObjectProperties@CSpatialCrossProcessClientOutputEndpoint@@UEAAJIPEAPEAXPEAI@Z.c)
 *     ?GetObjectSampleBuffer@CSpatialCrossProcessClientOutputEndpoint@@UEAAJIPEAPEAMPEAI@Z @ 0x14005E600 (-GetObjectSampleBuffer@CSpatialCrossProcessClientOutputEndpoint@@UEAAJIPEAPEAMPEAI@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x14001BC70 (__security_check_cookie.c)
 *     _TlgWrite @ 0x140034DB0 (_TlgWrite.c)
 */

void __fastcall CSpatialCrossProcessEndpointTraceLogger::LogClientIndexMap(
        CSpatialCrossProcessEndpointTraceLogger *this,
        int a2,
        int a3,
        const GUID *a4,
        bool a5,
        char a6)
{
  BOOL v6; // [rsp+38h] [rbp-69h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-59h] BYREF
  char *v8; // [rsp+68h] [rbp-39h]
  __int64 v9; // [rsp+70h] [rbp-31h]
  const char *v10; // [rsp+78h] [rbp-29h]
  __int64 v11; // [rsp+80h] [rbp-21h]
  int *v12; // [rsp+88h] [rbp-19h]
  __int64 v13; // [rsp+90h] [rbp-11h]
  int *v14; // [rsp+98h] [rbp-9h]
  __int64 v15; // [rsp+A0h] [rbp-1h]
  int *v16; // [rsp+A8h] [rbp+7h]
  __int64 v17; // [rsp+B0h] [rbp+Fh]
  BOOL *v18; // [rsp+B8h] [rbp+17h]
  __int64 v19; // [rsp+C0h] [rbp+1Fh]
  char *v20; // [rsp+C8h] [rbp+27h]
  __int64 v21; // [rsp+D0h] [rbp+2Fh]
  int v22; // [rsp+100h] [rbp+5Fh] BYREF
  int v23; // [rsp+108h] [rbp+67h] BYREF
  int v24; // [rsp+110h] [rbp+6Fh] BYREF

  v24 = (int)a4;
  v23 = a3;
  v22 = a2;
  if ( (unsigned int)dword_140087130 > 5 )
  {
    v9 = 16LL;
    v8 = (char *)this + 8;
    v10 = "IdxMap";
    v12 = &v22;
    v14 = &v23;
    v16 = &v24;
    v6 = a5;
    v18 = &v6;
    v20 = &a6;
    v11 = 7LL;
    v13 = 4LL;
    v15 = 4LL;
    v17 = 4LL;
    v19 = 4LL;
    v21 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_140087130, &unk_140070A70, 0LL, a4, 9u, &pData);
  }
}
