/*
 * XREFs of CloseGlobalizationUserSettingsKey @ 0x18000623C
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
 *     NtClose @ 0x1800A02A0 (NtClose.c)
 */

__int64 __fastcall CloseGlobalizationUserSettingsKey(char *a1)
{
  unsigned int v1; // edx

  v1 = 0;
  if ( (unsigned __int64)(a1 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    return (unsigned int)ZwClose(a1);
  return v1;
}
