/*
 * XREFs of ?LogStreamControl@CSpatialCrossProcessEndpointTraceLogger@@QEAAXPEBD@Z @ 0x14005A390
 * Callers:
 *     ?ResetStream@CSpatialCrossProcessBaseEndpoint@@IEAAJXZ @ 0x14005D450 (-ResetStream@CSpatialCrossProcessBaseEndpoint@@IEAAJXZ.c)
 *     ?Start@CSpatialCrossProcessControl@@UEAAJXZ @ 0x14005D4D0 (-Start@CSpatialCrossProcessControl@@UEAAJXZ.c)
 *     ?Stop@CSpatialCrossProcessControl@@UEAAJXZ @ 0x14005D5D0 (-Stop@CSpatialCrossProcessControl@@UEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x14001CE40 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1400365A0 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x140036628 (_TlgWrite.c)
 */

void __fastcall CSpatialCrossProcessEndpointTraceLogger::LogStreamControl(
        CSpatialCrossProcessEndpointTraceLogger *this,
        const char *a2)
{
  LPCGUID v2; // r8
  LPCGUID v3; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-58h] BYREF
  char *v5; // [rsp+50h] [rbp-38h]
  int v6; // [rsp+58h] [rbp-30h]
  int v7; // [rsp+5Ch] [rbp-2Ch]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp-28h] BYREF

  if ( (unsigned int)dword_1400850A0 > 5 )
  {
    v7 = 0;
    v5 = (char *)this + 8;
    v6 = 16;
    TlgCreateSz(&pDesc, a2);
    TlgWrite((TraceLoggingHProvider)&dword_1400850A0, &unk_14006FB9D, v2, v3, 4u, &pData);
  }
}
