/*
 * XREFs of ?LogGetAvailableObjectCount@CSpatialCrossProcessEndpointTraceLogger@@QEAAXPEBDI@Z @ 0x14005CBDC
 * Callers:
 *     ?GetObjectsAvailableForProcessing@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI0@Z @ 0x14005ED60 (-GetObjectsAvailableForProcessing@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI0@Z.c)
 *     ?GetObjectsAvailableForRendering@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI0@Z @ 0x14005EE34 (-GetObjectsAvailableForRendering@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI0@Z.c)
 * Callees:
 *     _TlgCreateSz @ 0x14001BF44 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x14001CBB0 (__security_check_cookie.c)
 *     _TlgWrite @ 0x140036120 (_TlgWrite.c)
 */

void __fastcall CSpatialCrossProcessEndpointTraceLogger::LogGetAvailableObjectCount(
        CSpatialCrossProcessEndpointTraceLogger *this,
        const char *a2,
        int a3)
{
  LPCGUID v3; // r8
  LPCGUID v4; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-68h] BYREF
  char *v6; // [rsp+50h] [rbp-48h]
  int v7; // [rsp+58h] [rbp-40h]
  int v8; // [rsp+5Ch] [rbp-3Ch]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp-38h] BYREF
  int *v10; // [rsp+70h] [rbp-28h]
  int v11; // [rsp+78h] [rbp-20h]
  int v12; // [rsp+7Ch] [rbp-1Ch]
  int v13; // [rsp+B0h] [rbp+18h] BYREF

  v13 = a3;
  if ( (unsigned int)dword_1400890A0 > 5 )
  {
    v8 = 0;
    v6 = (char *)this + 8;
    v7 = 16;
    TlgCreateSz(&pDesc, a2);
    v12 = 0;
    v10 = &v13;
    v11 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1400890A0, &unk_14007303C, v3, v4, 5u, &pData);
  }
}
