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

NTSTATUS __fastcall OpenGlobalizationUserSettingsKey(
        ACCESS_MASK DesiredAccess,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        PHANDLE CurrentUserKey)
{
  int v6; // ecx
  BOOLEAN IsMultiSessionSku; // al
  int v9; // ecx
  int v10; // ecx

  if ( !CurrentUserKey )
    return -1073741811;
  if ( dword_1801600A4 )
  {
    v6 = dword_180160520;
  }
  else
  {
    IsMultiSessionSku = RtlIsMultiSessionSku();
    v6 = dword_180160520;
    dword_1801600A4 = 1;
    if ( !IsMultiSessionSku )
      v6 = 1;
    dword_180160520 = v6;
  }
  if ( !v6 )
    return RtlOpenCurrentUser(DesiredAccess, CurrentUserKey);
  v9 = v6 - 1;
  if ( !v9 )
    return OpenGlobalizationUserSettingsKey_ForSingleUserModel(DesiredAccess);
  v10 = v9 - 1;
  if ( !v10 )
    return OpenGlobalizationUserSettingsKey_ForSingleUserModel(DesiredAccess);
  if ( v10 == 1 )
    return -1073741822;
  return -1073741595;
}
