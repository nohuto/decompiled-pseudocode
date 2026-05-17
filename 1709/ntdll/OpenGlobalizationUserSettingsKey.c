/*
 * XREFs of OpenGlobalizationUserSettingsKey @ 0x18004D3CC
 * Callers:
 *     RtlpLoadUserUIByPolicy @ 0x180004460 (RtlpLoadUserUIByPolicy.c)
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x1800054C4 (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x18004FA38 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     RtlpLoadLanguageConfigList @ 0x18005302C (RtlpLoadLanguageConfigList.c)
 *     RtlpSetInstallLanguage @ 0x1800ED590 (RtlpSetInstallLanguage.c)
 *     RtlpSetMachineUILanguagesImmediate @ 0x1800EDAE4 (RtlpSetMachineUILanguagesImmediate.c)
 *     RtlpSetPreferredUILanguages @ 0x1800EDCC0 (RtlpSetPreferredUILanguages.c)
 *     RtlpGetLocaleDataKey @ 0x1800F630C (RtlpGetLocaleDataKey.c)
 *     RtlpGetUserOrMachineUILanguage4NLS @ 0x1800FB500 (RtlpGetUserOrMachineUILanguage4NLS.c)
 * Callees:
 *     RtlOpenCurrentUser @ 0x18004F8F0 (RtlOpenCurrentUser.c)
 *     RtlIsMultiSessionSku @ 0x18007DF90 (RtlIsMultiSessionSku.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x18010E524 (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 */

__int64 __fastcall OpenGlobalizationUserSettingsKey(
        unsigned int a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  int v7; // ecx
  char IsMultiSessionSku; // al
  int v10; // ecx
  int v11; // ecx

  if ( !a5 )
    return 3221225485LL;
  if ( dword_1801600A4 )
  {
    v7 = dword_180160520;
  }
  else
  {
    IsMultiSessionSku = RtlIsMultiSessionSku();
    v7 = dword_180160520;
    dword_1801600A4 = 1;
    if ( !IsMultiSessionSku )
      v7 = 1;
    dword_180160520 = v7;
  }
  if ( !v7 )
    return RtlOpenCurrentUser(a1, a5);
  v10 = v7 - 1;
  if ( !v10 )
    return OpenGlobalizationUserSettingsKey_ForSingleUserModel(a1, a2, a3, a5);
  v11 = v10 - 1;
  if ( !v11 )
    return OpenGlobalizationUserSettingsKey_ForSingleUserModel(a1, a2, a3, a5);
  if ( v11 == 1 )
    return 3221225474LL;
  return 3221225701LL;
}
