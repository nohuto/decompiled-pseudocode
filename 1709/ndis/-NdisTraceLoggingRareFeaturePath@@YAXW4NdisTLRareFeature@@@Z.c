/*
 * XREFs of ?NdisTraceLoggingRareFeaturePath@@YAXW4NdisTLRareFeature@@@Z @ 0x1C007949C
 * Callers:
 *     ndisHandlePnPRequest @ 0x1C0101AFC (ndisHandlePnPRequest.c)
 * Callees:
 *     _TlgWrite @ 0x1C0011DA8 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C0012B70 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 */

void NdisTraceLoggingRareFeaturePath()
{
  const GUID *v0; // r8
  const GUID *v1; // r9
  int v2; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  int *v4; // [rsp+58h] [rbp-20h]
  int v5; // [rsp+60h] [rbp-18h]
  int v6; // [rsp+64h] [rbp-14h]

  if ( hProvider.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&hProvider, 0x400000000000uLL) )
    {
      v2 = 0;
      v6 = 0;
      v4 = &v2;
      v5 = 4;
      TlgWrite(&hProvider, &unk_1C00852F4, v0, v1, 3u, &pData);
    }
  }
}
