/*
 * XREFs of ?LogStreamControl@CSpatialCrossProcessEndpointTraceLogger@@QEAAXPEBD@Z @ 0x14005A654
 * Callers:
 *     ?ResetStream@CSpatialCrossProcessBaseEndpoint@@IEAAJXZ @ 0x14005D800 (-ResetStream@CSpatialCrossProcessBaseEndpoint@@IEAAJXZ.c)
 *     ?Start@CSpatialCrossProcessControl@@UEAAJXZ @ 0x14005D880 (-Start@CSpatialCrossProcessControl@@UEAAJXZ.c)
 *     ?Stop@CSpatialCrossProcessControl@@UEAAJXZ @ 0x14005D980 (-Stop@CSpatialCrossProcessControl@@UEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x14001BC70 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x140034D80 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x140034DB0 (_TlgWrite.c)
 */

void __fastcall CSpatialCrossProcessEndpointTraceLogger::LogStreamControl(
        CSpatialCrossProcessEndpointTraceLogger *this,
        const char *a2)
{
  LPCGUID v2; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-58h] BYREF
  char *v4; // [rsp+50h] [rbp-38h]
  int v5; // [rsp+58h] [rbp-30h]
  int v6; // [rsp+5Ch] [rbp-2Ch]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp-28h] BYREF

  if ( (unsigned int)dword_140087130 > 5 )
  {
    v6 = 0;
    v4 = (char *)this + 8;
    v5 = 16;
    TlgCreateSz(&pDesc, a2);
    TlgWrite((TraceLoggingHProvider)&dword_140087130, &unk_1400707EF, 0LL, v2, 4u, &pData);
  }
}
