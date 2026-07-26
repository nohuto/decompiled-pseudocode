/*
 * XREFs of ?NdisTraceLoggingRareFeaturePath@@YAXW4NdisTLRareFeature@@@Z @ 0x1C007767C
 * Callers:
 *     ndisHandlePnPRequest @ 0x1C00F7108 (ndisHandlePnPRequest.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0015A3C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0015A70 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 */

void __fastcall NdisTraceLoggingRareFeaturePath(const struct _TlgProvider_t *a1)
{
  const struct _TlgProvider_t *v1; // rcx
  const GUID *v2; // r8
  const GUID *v3; // r9
  int v4; // [rsp+30h] [rbp-58h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-50h] BYREF
  int *v6; // [rsp+58h] [rbp-30h]
  int v7; // [rsp+60h] [rbp-28h]
  int v8; // [rsp+64h] [rbp-24h]

  if ( (unsigned int)dword_1C0091010 > 5 )
  {
    if ( TlgKeywordOn(a1, 0x400000000000uLL) )
    {
      v4 = 0;
      v8 = 0;
      v6 = &v4;
      v7 = 4;
      TlgWrite(v1, &unk_1C00806CF, v2, v3, 3u, &pData);
    }
  }
}
