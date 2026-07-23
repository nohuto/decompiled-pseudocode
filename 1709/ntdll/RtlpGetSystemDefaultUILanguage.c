/*
 * XREFs of RtlpGetSystemDefaultUILanguage @ 0x180003570
 * Callers:
 *     RtlpQueryDefaultUILanguage @ 0x180005B30 (RtlpQueryDefaultUILanguage.c)
 *     RtlpCleanupRegistryKeys @ 0x1800EC2B0 (RtlpCleanupRegistryKeys.c)
 * Callees:
 *     RtlpCreateProcessRegistryInfo @ 0x18002CDB0 (RtlpCreateProcessRegistryInfo.c)
 *     RtlpLoadInstallLanguageFallback @ 0x18008CB30 (RtlpLoadInstallLanguageFallback.c)
 *     NtIsUILanguageComitted @ 0x1800A2010 (NtIsUILanguageComitted.c)
 *     NtQueryInstallUILanguage @ 0x1800A2970 (NtQueryInstallUILanguage.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl RtlpGetSystemDefaultUILanguage(LANGID DefaultUILanguageId, PLCID Lcid)
{
  PLCID v2; // rbx
  LANGID *v3; // rsi
  int v4; // edi
  int v5; // eax
  LANGID InstallUILanguageId; // [rsp+40h] [rbp+8h] BYREF
  DWORD *v8; // [rsp+50h] [rbp+18h] BYREF

  v2 = Lcid;
  InstallUILanguageId = 0;
  v3 = (LANGID *)DefaultUILanguageId;
  v8 = 0LL;
  v4 = 0;
  if ( DefaultUILanguageId )
  {
    *(_WORD *)DefaultUILanguageId = 0;
    if ( !Lcid && (v5 = RtlpCreateProcessRegistryInfo(&v8), v2 = v8, v4 = v5, v5 < 0)
      || (!v2 || !*((_WORD *)v2 + 2) ? (v4 = -1073741595) : (InstallUILanguageId = *((_WORD *)v2 + 2)), v4 < 0) )
    {
      v4 = NtQueryInstallUILanguage(&InstallUILanguageId);
      if ( v4 < 0 )
        return v4;
      if ( NtIsUILanguageComitted() >= 0 )
      {
        if ( v2 )
        {
          RtlpLoadInstallLanguageFallback(v2, (char *)v2 + 6, v2 + 2);
          *((_WORD *)v2 + 2) = InstallUILanguageId;
        }
      }
    }
    *v3 = InstallUILanguageId;
    return v4;
  }
  return -1073741811;
}
