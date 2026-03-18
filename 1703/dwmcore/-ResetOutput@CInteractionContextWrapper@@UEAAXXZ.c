/*
 * XREFs of ?ResetOutput@CInteractionContextWrapper@@UEAAXXZ @ 0x180190A50
 * Callers:
 *     <none>
 * Callees:
 *     ?ResetCachedInteractionOutput@CInteractionContextWrapper@@AEAAX_N@Z @ 0x1800B3A8C (-ResetCachedInteractionOutput@CInteractionContextWrapper@@AEAAX_N@Z.c)
 *     _TlgKeywordOn @ 0x1800BB2F8 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800BD9E0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

void __fastcall CInteractionContextWrapper::ResetOutput(CInteractionContextWrapper *this)
{
  const struct _TlgProvider_t *v1; // rcx
  const GUID *v2; // r8
  const GUID *v3; // r9
  const GUID *v4; // [rsp+30h] [rbp-58h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-50h] BYREF
  const GUID **v6; // [rsp+58h] [rbp-30h]
  int v7; // [rsp+60h] [rbp-28h]
  int v8; // [rsp+64h] [rbp-24h]

  CInteractionContextWrapper::ResetCachedInteractionOutput(this, 0LL);
  if ( dword_18023D7F0 > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_18023D7F0, 2uLL) )
    {
      v8 = 0;
      v6 = &v4;
      v4 = v3;
      v7 = 8;
      TlgWrite(v1, &unk_1801F91A7, v2, v3, 3u, &pData);
    }
  }
}
