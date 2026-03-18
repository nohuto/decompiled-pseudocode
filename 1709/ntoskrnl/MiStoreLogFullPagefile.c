/*
 * XREFs of MiStoreLogFullPagefile @ 0x14022C4C4
 * Callers:
 *     MiStoreWriteModifiedPages @ 0x14022CE80 (MiStoreWriteModifiedPages.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1400BA32C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _TlgWriteEx @ 0x140213AC0 (_TlgWriteEx.c)
 */

void MiStoreLogFullPagefile()
{
  UINT32 cData; // edx
  ULONG64 v1; // r8
  const struct _TlgProvider_t *v2; // r9
  const GUID *v3; // [rsp+20h] [rbp-58h]
  const GUID *v4; // [rsp+28h] [rbp-50h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-38h] BYREF

  if ( hProvider && hProvider->LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(hProvider, 2uLL) )
      TlgWriteEx(v2, &unk_1402D0C8A, v1, (ULONG)v2, v3, v4, cData, &pData);
  }
}
