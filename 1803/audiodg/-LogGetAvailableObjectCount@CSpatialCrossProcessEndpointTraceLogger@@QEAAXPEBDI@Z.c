/*
 * XREFs of ?LogGetAvailableObjectCount@CSpatialCrossProcessEndpointTraceLogger@@QEAAXPEBDI@Z @ 0x14005A02C
 * Callers:
 *     ?GetObjectsAvailableForProcessing@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI0@Z @ 0x14005C310 (-GetObjectsAvailableForProcessing@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI0@Z.c)
 *     ?GetObjectsAvailableForRendering@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI0@Z @ 0x14005C3EC (-GetObjectsAvailableForRendering@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI0@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x14001BC70 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x140034D80 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x140034DB0 (_TlgWrite.c)
 */

void __fastcall CSpatialCrossProcessEndpointTraceLogger::LogGetAvailableObjectCount(
        CSpatialCrossProcessEndpointTraceLogger *this,
        const char *a2,
        int a3)
{
  LPCGUID v3; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-68h] BYREF
  char *v5; // [rsp+50h] [rbp-48h]
  int v6; // [rsp+58h] [rbp-40h]
  int v7; // [rsp+5Ch] [rbp-3Ch]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp-38h] BYREF
  int *v9; // [rsp+70h] [rbp-28h]
  int v10; // [rsp+78h] [rbp-20h]
  int v11; // [rsp+7Ch] [rbp-1Ch]
  int v12; // [rsp+B0h] [rbp+18h] BYREF

  v12 = a3;
  if ( (unsigned int)dword_140087130 > 5 )
  {
    v7 = 0;
    v5 = (char *)this + 8;
    v6 = 16;
    TlgCreateSz(&pDesc, a2);
    v11 = 0;
    v9 = &v12;
    v10 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_140087130, &unk_140070B45, 0LL, v3, 5u, &pData);
  }
}
