/*
 * XREFs of ?LogGetAvailableObjectCount@CSpatialCrossProcessEndpointTraceLogger@@QEAAXPEBDI@Z @ 0x140059D60
 * Callers:
 *     ?GetObjectsAvailableForProcessing@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI0@Z @ 0x14005BF0C (-GetObjectsAvailableForProcessing@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI0@Z.c)
 *     ?GetObjectsAvailableForRendering@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI0@Z @ 0x14005BFE0 (-GetObjectsAvailableForRendering@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI0@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x14001CE40 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1400365A0 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x140036628 (_TlgWrite.c)
 */

void __fastcall CSpatialCrossProcessEndpointTraceLogger::LogGetAvailableObjectCount(
        CSpatialCrossProcessEndpointTraceLogger *this,
        const char *a2,
        int a3)
{
  LPCGUID v3; // r8
  LPCGUID v4; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-78h] BYREF
  char *v6; // [rsp+50h] [rbp-58h]
  int v7; // [rsp+58h] [rbp-50h]
  int v8; // [rsp+5Ch] [rbp-4Ch]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp-48h] BYREF
  int *v10; // [rsp+70h] [rbp-38h]
  int v11; // [rsp+78h] [rbp-30h]
  int v12; // [rsp+7Ch] [rbp-2Ch]
  int v13; // [rsp+C0h] [rbp+18h] BYREF

  v13 = a3;
  if ( (unsigned int)dword_1400850A0 > 5 )
  {
    v8 = 0;
    v6 = (char *)this + 8;
    v7 = 16;
    TlgCreateSz(&pDesc, a2);
    v12 = 0;
    v10 = &v13;
    v11 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1400850A0, &unk_14006FEBA, v3, v4, 5u, &pData);
  }
}
