/*
 * XREFs of RtlpGetSystemDefaultUILanguage @ 0x180046590
 * Callers:
 *     sub_180044D64 @ 0x180044D64 (sub_180044D64.c)
 *     sub_1800468D4 @ 0x1800468D4 (sub_1800468D4.c)
 *     RtlpQueryDefaultUILanguage @ 0x18006D720 (RtlpQueryDefaultUILanguage.c)
 *     RtlpCleanupRegistryKeys @ 0x1800EC730 (RtlpCleanupRegistryKeys.c)
 * Callees:
 *     RtlpCreateProcessRegistryInfo @ 0x180040DB0 (RtlpCreateProcessRegistryInfo.c)
 *     sub_18008F0E0 @ 0x18008F0E0 (sub_18008F0E0.c)
 *     ZwIsUILanguageComitted @ 0x1800A7230 (ZwIsUILanguageComitted.c)
 *     ZwQueryInstallUILanguage @ 0x1800A7B50 (ZwQueryInstallUILanguage.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl RtlpGetSystemDefaultUILanguage(LANGID DefaultUILanguageId, PLCID Lcid)
{
  PLCID v2; // rbx
  LANGID *v3; // rsi
  int v4; // edi
  int v6; // eax
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
    if ( !Lcid && (v6 = RtlpCreateProcessRegistryInfo(&v8), v2 = v8, v4 = v6, v6 < 0)
      || (!v2 || !*((_WORD *)v2 + 2) ? (v4 = -1073741595) : (InstallUILanguageId = *((_WORD *)v2 + 2)), v4 < 0) )
    {
      v4 = ZwQueryInstallUILanguage(&InstallUILanguageId);
      if ( v4 < 0 )
        return v4;
      if ( ZwIsUILanguageComitted() >= 0 )
      {
        if ( v2 )
        {
          sub_18008F0E0(v2, (char *)v2 + 6, v2 + 2);
          *((_WORD *)v2 + 2) = InstallUILanguageId;
        }
      }
    }
    *v3 = InstallUILanguageId;
    return v4;
  }
  return -1073741811;
}
