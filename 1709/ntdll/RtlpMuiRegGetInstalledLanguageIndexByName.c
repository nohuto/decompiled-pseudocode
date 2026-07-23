/*
 * XREFs of RtlpMuiRegGetInstalledLanguageIndexByName @ 0x1800516DC
 * Callers:
 *     RtlGetUserPreferredUILanguages @ 0x180005240 (RtlGetUserPreferredUILanguages.c)
 *     RtlGetSystemPreferredUILanguages @ 0x180005620 (RtlGetSystemPreferredUILanguages.c)
 *     GetLCIDFromLangListNodeWithLICCheck @ 0x1800200E4 (GetLCIDFromLangListNodeWithLICCheck.c)
 *     RtlpMUIRegPatchLicenseInfortmation @ 0x180050BDC (RtlpMUIRegPatchLicenseInfortmation.c)
 *     RtlGetNeutralFallback @ 0x180050E04 (RtlGetNeutralFallback.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x180051DBC (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     RtlpVerifyAndCommitUILanguageSettings @ 0x18008C290 (RtlpVerifyAndCommitUILanguageSettings.c)
 *     RtlGetUILanguageInfo @ 0x1800EB810 (RtlGetUILanguageInfo.c)
 *     RtlpAutoCompleteLanguageFallback @ 0x1800EC15C (RtlpAutoCompleteLanguageFallback.c)
 *     RtlpCleanupRegistryKeys @ 0x1800EC2B0 (RtlpCleanupRegistryKeys.c)
 *     RtlpGetInstalledLanguageType @ 0x1800ECF94 (RtlpGetInstalledLanguageType.c)
 *     RtlpSetPreferredUILanguages @ 0x1800EDCC0 (RtlpSetPreferredUILanguages.c)
 *     RtlpGetAlternateCodePage @ 0x1800F6088 (RtlpGetAlternateCodePage.c)
 *     _RtlpRemovePendingDeleteLanguages @ 0x1800FF32C (_RtlpRemovePendingDeleteLanguages.c)
 * Callees:
 *     RtlpMuiRegGetOrAddStringToPool @ 0x1800517D0 (RtlpMuiRegGetOrAddStringToPool.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x180051DBC (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     RtlCultureNameToLCID @ 0x1800524A0 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x180052680 (RtlInitUnicodeString.c)
 */

__int64 __fastcall RtlpMuiRegGetInstalledLanguageIndexByName(__int64 a1, const WCHAR *a2, char a3, _WORD *a4)
{
  unsigned int InstalledLanguageIndexByLangId; // ebx
  char v9; // r15
  __int64 v10; // rbp
  __int16 v11; // r9
  int v13; // ecx
  __int64 v14; // r10
  __int64 v15; // rdx
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-38h] BYREF
  DWORD Lcid; // [rsp+60h] [rbp+8h] BYREF

  InstalledLanguageIndexByLangId = -1073741772;
  v9 = 0;
  if ( !a1 || !a2 )
    return 3221225485LL;
  v10 = *(_QWORD *)(a1 + 24);
  if ( *a2 )
  {
    v11 = RtlpMuiRegGetOrAddStringToPool(*(_QWORD *)(a1 + 32), a2, 0LL, &Lcid);
    if ( v11 >= 0 )
    {
      v13 = 0;
      if ( *(_WORD *)(v10 + 6) )
      {
        v14 = *(_QWORD *)(v10 + 16);
        do
        {
          v15 = 28LL * v13;
          if ( *(_WORD *)(v15 + v14 + 6) == v11 )
          {
            if ( (*(_WORD *)(v15 + v14) & 0x1020) == 0x20 )
            {
              if ( a4 )
              {
                *a4 = v13;
                return 0LL;
              }
            }
            else if ( (*(_WORD *)(v15 + v14) & 0x1000) != 0 )
            {
              v9 = 1;
            }
          }
          ++v13;
        }
        while ( v13 < *(unsigned __int16 *)(v10 + 6) );
      }
    }
  }
  if ( a3 )
  {
    RtlInitUnicodeString(&DestinationString, a2);
    if ( RtlCultureNameToLCID(&DestinationString, &Lcid) )
    {
      if ( Lcid != 4096 )
        InstalledLanguageIndexByLangId = RtlpMuiRegGetInstalledLanguageIndexByLangId(
                                           a1,
                                           (unsigned __int16)Lcid,
                                           0LL,
                                           a4);
    }
  }
  if ( v9 && InstalledLanguageIndexByLangId == -1073741772 )
    return 3221225659LL;
  else
    return InstalledLanguageIndexByLangId;
}
