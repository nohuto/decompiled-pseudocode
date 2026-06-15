/*
 * XREFs of ?LogPolicySpatialOnSpeakerEndpointEnabled@@YAXPEBG0_N@Z @ 0x1800C1548
 * Callers:
 *     EnableSpatialOnSpeakerEndpoint @ 0x180039A24 (EnableSpatialOnSpeakerEndpoint.c)
 * Callees:
 *     _TlgWrite @ 0x180026640 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800266D8 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x18002854C (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 */

void __fastcall LogPolicySpatialOnSpeakerEndpointEnabled(const unsigned __int16 *a1, const unsigned __int16 *a2)
{
  const WCHAR *v2; // r9
  LPCWSTR v3; // r11
  char v4; // r10
  LPCGUID v5; // r8
  LPCGUID v6; // r9
  BOOL v7; // [rsp+30h] [rbp-88h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-78h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp-58h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+70h] [rbp-48h] BYREF
  BOOL *v11; // [rsp+80h] [rbp-38h]
  int v12; // [rsp+88h] [rbp-30h]
  int v13; // [rsp+8Ch] [rbp-2Ch]

  if ( (unsigned int)hProvider > 4 )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
    {
      TlgCreateWsz(&pDesc, v2);
      TlgCreateWsz(&v10, v3);
      v12 = 4;
      v11 = &v7;
      v13 = 0;
      v7 = v4 != 0;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800FA809, v5, v6, 5u, &pData);
    }
  }
}
