/*
 * XREFs of _wcsicmp @ 0x1800925A0
 * Callers:
 *     RtlGetFileMUIPath @ 0x18001B6F0 (RtlGetFileMUIPath.c)
 *     LdrpResSearchResourceMappedFile @ 0x18001D76C (LdrpResSearchResourceMappedFile.c)
 *     LdrpSearchResourceSection_U @ 0x180023154 (LdrpSearchResourceSection_U.c)
 *     LdrRscIsTypeExist @ 0x18002AB00 (LdrRscIsTypeExist.c)
 *     RtlpConsoleFallbackNameFromLocaleName @ 0x1800502E0 (RtlpConsoleFallbackNameFromLocaleName.c)
 *     RtlpLangNameInMultiSzString_Size @ 0x180050B4C (RtlpLangNameInMultiSzString_Size.c)
 *     RtlpLangNameInMultiSzString @ 0x180050DA0 (RtlpLangNameInMultiSzString.c)
 *     RtlpAddNeutralsToMergedList @ 0x180050F1C (RtlpAddNeutralsToMergedList.c)
 *     RtlpMuiRegGetStringIndexInPool @ 0x180052408 (RtlpMuiRegGetStringIndexInPool.c)
 *     RtlCultureNameToLCID @ 0x1800524A0 (RtlCultureNameToLCID.c)
 *     PsspWalkHandleTable @ 0x18005AA18 (PsspWalkHandleTable.c)
 *     RtlpHashStringToAtom @ 0x18007097C (RtlpHashStringToAtom.c)
 *     LdrRemoveLoadAsDataTable @ 0x18007AFB0 (LdrRemoveLoadAsDataTable.c)
 *     LdrpVerifyAlternateResourceModule @ 0x18007DAD8 (LdrpVerifyAlternateResourceModule.c)
 *     AVrfpDllLoadNotificationInternal @ 0x1800DAB20 (AVrfpDllLoadNotificationInternal.c)
 *     AVrfpDllUnloadNotificationInternal @ 0x1800DABF8 (AVrfpDllUnloadNotificationInternal.c)
 *     AVrfpFindClosestThunkDuplicate @ 0x1800DAE88 (AVrfpFindClosestThunkDuplicate.c)
 *     AVrfpParseVerifierDllsString @ 0x1800DB354 (AVrfpParseVerifierDllsString.c)
 *     AVrfpVerifierStopInitialize @ 0x1800DB874 (AVrfpVerifierStopInitialize.c)
 *     RtlpCleanupRegistryKeys @ 0x1800EC2B0 (RtlpCleanupRegistryKeys.c)
 *     RtlpMuiRegAddAlternateCodePage @ 0x1800FBAA8 (RtlpMuiRegAddAlternateCodePage.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x1800FBE88 (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x1800FCE98 (RtlpMuiRegLangInfoMatchesSpec.c)
 * Callees:
 *     <none>
 */

int __cdecl wcsicmp(const wchar_t *String1, const wchar_t *String2)
{
  signed __int64 v2; // r9
  unsigned __int16 v3; // r8
  wchar_t v4; // cx

  v2 = (char *)String1 - (char *)String2;
  do
  {
    v3 = *(const wchar_t *)((char *)String2 + v2);
    if ( (unsigned __int16)(v3 - 65) <= 0x19u )
      v3 += 32;
    v4 = *String2;
    if ( (unsigned __int16)(*String2 - 65) <= 0x19u )
      v4 += 32;
    ++String2;
  }
  while ( v3 && v3 == v4 );
  return v3 - v4;
}
