/*
 * XREFs of ??$ChainLinkEventStop@PEBDPEAUIChainLink@Chaining@Shell@Internal@Windows@@AEAW4ChainLinkEventType@2345@@ChainLinkTraceLogging@Chaining@Shell@Internal@Windows@@SAX$$QEAPEBD$$QEAPEAUIChainLink@1234@AEAW4ChainLinkEventType@1234@@Z @ 0x18005C02C
 * Callers:
 *     ?Notify@ChainLinkNotifier@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAAXXZ @ 0x180059D28 (-Notify@ChainLinkNotifier@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAA.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Provider@ChainLinkTraceLogging@Chaining@Shell@Internal@Windows@@SAQEBU_TlgProvider_t@@XZ @ 0x18005E3C0 (-Provider@ChainLinkTraceLogging@Chaining@Shell@Internal@Windows@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 */

int __fastcall Windows::Internal::Shell::Chaining::ChainLinkTraceLogging::ChainLinkEventStop<char const *,Windows::Internal::Shell::Chaining::IChainLink *,enum Windows::Internal::Shell::Chaining::ChainLinkEventType &>(
        const wchar_t **a1,
        __int64 *a2,
        int *a3)
{
  const struct _TlgProvider_t *v6; // rax
  const wchar_t *v7; // r10
  __int64 v8; // rcx
  int v10; // [rsp+38h] [rbp-29h] BYREF
  __int64 v11; // [rsp+40h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-19h] BYREF
  const wchar_t *v13; // [rsp+68h] [rbp+7h]
  int v14; // [rsp+70h] [rbp+Fh]
  int v15; // [rsp+74h] [rbp+13h]
  __int64 *v16; // [rsp+78h] [rbp+17h]
  __int64 v17; // [rsp+80h] [rbp+1Fh]
  int *v18; // [rsp+88h] [rbp+27h]
  __int64 v19; // [rsp+90h] [rbp+2Fh]

  v6 = Windows::Internal::Shell::Chaining::ChainLinkTraceLogging::Provider();
  if ( *(_DWORD *)v6 > 5u )
  {
    v7 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
    LODWORD(v8) = 0;
    if ( *a1 )
    {
      v7 = *a1;
      v8 = -1LL;
      do
        ++v8;
      while ( *((_BYTE *)*a1 + v8) );
    }
    v13 = v7;
    v14 = v8 + 1;
    v11 = *a2;
    v16 = &v11;
    v10 = *a3;
    v18 = &v10;
    v15 = 0;
    v17 = 8LL;
    v19 = 4LL;
    LODWORD(v6) = TlgWrite(v6, &unk_1801F533D, 0LL, 0LL, 5u, &pData);
  }
  return (int)v6;
}
