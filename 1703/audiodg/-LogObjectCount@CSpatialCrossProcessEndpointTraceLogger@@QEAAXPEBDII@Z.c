/*
 * XREFs of ?LogObjectCount@CSpatialCrossProcessEndpointTraceLogger@@QEAAXPEBDII@Z @ 0x14005A0AC
 * Callers:
 *     ?ProcessComplete@CSpatialCrossProcessClientOutputEndpoint@@UEAAJXZ @ 0x14005E860 (-ProcessComplete@CSpatialCrossProcessClientOutputEndpoint@@UEAAJXZ.c)
 *     ?GetInputDataPointer@CSpatialCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x14005F240 (-GetInputDataPointer@CSpatialCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@.c)
 * Callees:
 *     __security_check_cookie @ 0x14001CE40 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1400365A0 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x140036628 (_TlgWrite.c)
 */

void __fastcall CSpatialCrossProcessEndpointTraceLogger::LogObjectCount(
        CSpatialCrossProcessEndpointTraceLogger *this,
        const char *a2,
        int a3,
        int a4)
{
  LPCGUID v4; // r8
  LPCGUID v5; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-29h] BYREF
  char *v7; // [rsp+50h] [rbp-9h]
  __int64 v8; // [rsp+58h] [rbp-1h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp+7h] BYREF
  int *v10; // [rsp+70h] [rbp+17h]
  __int64 v11; // [rsp+78h] [rbp+1Fh]
  int *v12; // [rsp+80h] [rbp+27h]
  __int64 v13; // [rsp+88h] [rbp+2Fh]
  int v14; // [rsp+D0h] [rbp+77h] BYREF
  int v15; // [rsp+D8h] [rbp+7Fh] BYREF

  v15 = a4;
  v14 = a3;
  if ( (unsigned int)dword_1400850A0 > 5 )
  {
    v8 = 16LL;
    v7 = (char *)this + 8;
    TlgCreateSz(&pDesc, a2);
    v11 = 4LL;
    v12 = &v15;
    v10 = &v14;
    v13 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1400850A0, &unk_14006FF3A, v4, v5, 6u, &pData);
  }
}
