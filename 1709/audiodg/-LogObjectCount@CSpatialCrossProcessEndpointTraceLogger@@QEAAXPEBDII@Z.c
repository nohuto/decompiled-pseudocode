/*
 * XREFs of ?LogObjectCount@CSpatialCrossProcessEndpointTraceLogger@@QEAAXPEBDII@Z @ 0x14005CF20
 * Callers:
 *     ?ProcessComplete@CSpatialCrossProcessClientOutputEndpoint@@UEAAJXZ @ 0x140061680 (-ProcessComplete@CSpatialCrossProcessClientOutputEndpoint@@UEAAJXZ.c)
 *     ?GetInputDataPointer@CSpatialCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x1400620F0 (-GetInputDataPointer@CSpatialCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@.c)
 * Callees:
 *     _TlgCreateSz @ 0x14001BF44 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x14001CBB0 (__security_check_cookie.c)
 *     _TlgWrite @ 0x140036120 (_TlgWrite.c)
 */

void __fastcall CSpatialCrossProcessEndpointTraceLogger::LogObjectCount(
        CSpatialCrossProcessEndpointTraceLogger *this,
        const char *a2,
        int a3,
        int a4)
{
  LPCGUID v4; // r8
  LPCGUID v5; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-19h] BYREF
  char *v7; // [rsp+50h] [rbp+7h]
  __int64 v8; // [rsp+58h] [rbp+Fh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp+17h] BYREF
  int *v10; // [rsp+70h] [rbp+27h]
  __int64 v11; // [rsp+78h] [rbp+2Fh]
  int *v12; // [rsp+80h] [rbp+37h]
  __int64 v13; // [rsp+88h] [rbp+3Fh]
  int v14; // [rsp+C0h] [rbp+77h] BYREF
  int v15; // [rsp+C8h] [rbp+7Fh] BYREF

  v15 = a4;
  v14 = a3;
  if ( (unsigned int)dword_1400890A0 > 5 )
  {
    v8 = 16LL;
    v7 = (char *)this + 8;
    TlgCreateSz(&pDesc, a2);
    v11 = 4LL;
    v12 = &v15;
    v10 = &v14;
    v13 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1400890A0, &unk_1400730CD, v4, v5, 6u, &pData);
  }
}
