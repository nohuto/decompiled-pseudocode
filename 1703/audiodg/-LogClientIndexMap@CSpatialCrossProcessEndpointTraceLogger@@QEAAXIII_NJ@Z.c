/*
 * XREFs of ?LogClientIndexMap@CSpatialCrossProcessEndpointTraceLogger@@QEAAXIII_NJ@Z @ 0x140059BE4
 * Callers:
 *     ?GetObjectMetadata@CSpatialCrossProcessClientOutputEndpoint@@UEAAJIPEAPEAXPEAI@Z @ 0x14005E000 (-GetObjectMetadata@CSpatialCrossProcessClientOutputEndpoint@@UEAAJIPEAPEAXPEAI@Z.c)
 *     ?GetObjectProperties@CSpatialCrossProcessClientOutputEndpoint@@UEAAJIPEAPEAXPEAI@Z @ 0x14005E100 (-GetObjectProperties@CSpatialCrossProcessClientOutputEndpoint@@UEAAJIPEAPEAXPEAI@Z.c)
 *     ?GetObjectSampleBuffer@CSpatialCrossProcessClientOutputEndpoint@@UEAAJIPEAPEAMPEAI@Z @ 0x14005E200 (-GetObjectSampleBuffer@CSpatialCrossProcessClientOutputEndpoint@@UEAAJIPEAPEAMPEAI@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x14001CE40 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1400365A0 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x140036628 (_TlgWrite.c)
 */

void __fastcall CSpatialCrossProcessEndpointTraceLogger::LogClientIndexMap(
        CSpatialCrossProcessEndpointTraceLogger *this,
        int a2,
        int a3,
        int a4,
        bool a5,
        char a6)
{
  LPCGUID v6; // r9
  int v7; // eax
  LPCGUID v8; // r8
  int v9; // [rsp+38h] [rbp-79h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-69h] BYREF
  char *v11; // [rsp+68h] [rbp-49h]
  __int64 v12; // [rsp+70h] [rbp-41h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+78h] [rbp-39h] BYREF
  int *v14; // [rsp+88h] [rbp-29h]
  __int64 v15; // [rsp+90h] [rbp-21h]
  int *v16; // [rsp+98h] [rbp-19h]
  __int64 v17; // [rsp+A0h] [rbp-11h]
  int *v18; // [rsp+A8h] [rbp-9h]
  __int64 v19; // [rsp+B0h] [rbp-1h]
  int *v20; // [rsp+B8h] [rbp+7h]
  __int64 v21; // [rsp+C0h] [rbp+Fh]
  char *v22; // [rsp+C8h] [rbp+17h]
  __int64 v23; // [rsp+D0h] [rbp+1Fh]
  int v24; // [rsp+110h] [rbp+5Fh] BYREF
  int v25; // [rsp+118h] [rbp+67h] BYREF
  int v26; // [rsp+120h] [rbp+6Fh] BYREF

  v26 = a4;
  v25 = a3;
  v24 = a2;
  if ( (unsigned int)dword_1400850A0 > 5 )
  {
    v12 = 16LL;
    v11 = (char *)this + 8;
    TlgCreateSz(&pDesc, "IdxMap");
    v16 = &v25;
    v14 = &v24;
    v18 = &v26;
    v7 = (int)v6;
    LOBYTE(v7) = a5 != (bool)v6;
    v15 = 4LL;
    v9 = v7;
    v20 = &v9;
    v22 = &a6;
    v17 = 4LL;
    v19 = 4LL;
    v21 = 4LL;
    v23 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1400850A0, &unk_14006FE60, v8, v6, 9u, &pData);
  }
}
